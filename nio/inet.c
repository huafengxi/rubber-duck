int check_connect_result(int fd) {
  int err = 0;
  int sys_err = 0;
  socklen_t errlen = sizeof(sys_err);
  if (0 != getsockopt(fd, SOL_SOCKET, SO_ERROR, &sys_err, &errlen)) {
    err = -EIO;
  } else if (EINPROGRESS == sys_err) {
    err = -EAGAIN;
  } else if (0 != sys_err) {
    err = -EIO;
    error("connect error: err=%d %s", sys_err, T2S(sock_fd, fd));
  }
  return err;
}

int async_connect(addr_t dest) {
  int fd = -1;
  struct sockaddr_in sin;
  ef((fd = socket(AF_INET, SOCK_STREAM, 0)) < 0);
  ef(make_fd_nonblocking(fd));
  ef(connect(fd, (struct sockaddr*)make_sockaddr(&sin, dest), sizeof(sin)) < 0 && EINPROGRESS != errno);
  return fd;
  el();
  if (fd >= 0) {
    close(fd);
  }
  return -1;
}

int listen_create(addr_t src) {
  int fd = 0;
  struct sockaddr_in sin;
  ef((fd = socket(AF_INET, SOCK_STREAM|SOCK_NONBLOCK|SOCK_CLOEXEC, 0)) < 0);
  ef(set_tcp_reuse_addr(fd));
  ef(bind(fd, (const struct sockaddr*)make_sockaddr(&sin, src), sizeof(sin)));
  ef(listen(fd, 1024));
  return fd;
  el();
  if (fd >= 0) {
    close(fd);
  }
  return -1;
}

int tcp_accept(int fd) {
  return accept4(fd, NULL, NULL, SOCK_NONBLOCK|SOCK_CLOEXEC);
}

int set_tcp_reuse_addr(int fd) {
  int flag = 1;
  return setsockopt(fd, SOL_SOCKET, SO_REUSEADDR, &flag, sizeof(flag));
}

int set_tcp_linger_on(int fd) {
  struct linger so_linger;
  so_linger.l_onoff = 1;
  so_linger.l_linger = 0;
  return setsockopt(fd, SOL_SOCKET, SO_LINGER, &so_linger, sizeof so_linger);
}

int set_tcp_nodelay(int fd) {
  int flag = 1;
  return setsockopt(fd, IPPROTO_TCP, TCP_NODELAY, (char *)&flag, sizeof(flag));
}

int set_tcp_recv_buf(int fd, int size) {
  return setsockopt(fd, SOL_SOCKET, SO_RCVBUF, (const char*)&size, sizeof(size));
}

int set_tcp_send_buf(int fd, int size) {
  return setsockopt(fd, SOL_SOCKET, SO_SNDBUF, (const char*)&size, sizeof(size));
}

const char* sock_fd_str(format_t* f, int fd) {
  addr_t local = get_local_addr(fd);
  addr_t remote = get_remote_addr(fd);
  return format_overwrite(f, "fd:%d:local:%s:remote:%s", fd, T2S(addr, local), T2S(addr, remote));
}
