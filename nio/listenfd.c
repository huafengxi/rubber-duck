int listenfd_handle_event(listenfd_t* s) {
  int err = 0;
  if (skt(s, IN)) {
    int fd = tcp_accept(s->fd);
    if (fd >= 0) {
      bool add_succ = false;
      sf_t* sf = s->sf;
      sock_t* ns = sf->create(sf);
      if (NULL != ns) {
        ns->fd = fd;
        ns->fty = sf;
        if (eloop_regist(s->ep, ns, EPOLLIN | EPOLLOUT) == 0) {
          add_succ = true;
          debug("accept new connection");
        }
      }
      if (!add_succ) {
        if (fd >= 0) {
          close(fd);
        }
        if (NULL != ns) {
          sf->destroy(sf, ns);
        }
        error("accept newfd fail");
      }
    } else {
      if (EINTR == errno) {
        // do nothing
      } else if (EAGAIN == errno || EWOULDBLOCK == errno) {
        s->mask &= EPOLLIN;
        err = EAGAIN;
      } else {
        err = EIO;
      }
    }
  }
  return err;
}

int listenfd_init(eloop_t* ep, listenfd_t* s, sf_t* sf, addr_t addr) {
  sk_init((sock_t*)s, NULL, (void*)listenfd_handle_event, listen_create(addr));
  s->ep = ep;
  s->sf = sf;
  ef(s->fd < 0);
  ef(eloop_regist(ep, (sock_t*)s, EPOLLIN) != 0);
  info("listen succ: %s", T2S(addr, addr));
  return 0;
  el();
  error("listen fd init fail: fd=%d", s->fd);
  if (s->fd >= 0) {
    close(s->fd);
  }
  return EIO;
}
