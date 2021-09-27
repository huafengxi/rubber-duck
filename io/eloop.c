struct epoll_event *__make_epoll_event(struct epoll_event *event, uint32_t event_flag, void* val) {
  event->events = event_flag;
  event->data.ptr = val;
  return event;
}

int eloop_init(eloop_t* ep) {
  ep->fd = epoll_create1(EPOLL_CLOEXEC);
  dlink_init(&ep->ready_link);
  return (ep->fd < 0)? errno: 0;
}

int eloop_regist(eloop_t* ep, sock_t* s, uint32_t eflag) {
  int err = 0;
  struct epoll_event event;
  uint32_t flag = eflag | EPOLLERR | EPOLLET;
  s->mask = 0;
  s->ready_link.next = NULL;
  if (0 != epoll_ctl(ep->fd, EPOLL_CTL_ADD, s->fd, __make_epoll_event(&event, flag, s))) {
    err = -EIO;
  } else {
    debug("sock regist: %p fd=%d", s, s->fd);
  }
  return err;
}

void eloop_fire(eloop_t* ep, sock_t* s) {
  if (!s->ready_link.next) {
    dlink_insert(&ep->ready_link, &s->ready_link);
  } else {
    sks(s, PENDING);
  }
}

static void eloop_refire(eloop_t* ep) {
  const int maxevents = 1024;
  struct epoll_event events[maxevents];
  if (dlink_is_empty(&ep->ready_link)) {
    int cnt = epoll_wait(ep->fd, events, maxevents, 1000);
    for(int i = 0; i < cnt; i++) {
      sock_t* s = (sock_t*)events[i].data.ptr;
      s->mask |= events[i].events;
      debug("eloop fire: %p mask=%x", s, s->mask);
      eloop_fire(ep, s);
    }
  }
}

static void sock_destroy(sock_t* s) {
  dlink_delete(&s->ready_link);
  if (s->fd >= 0) {
    close(s->fd);
  }
  if (s->fty) {
    s->fty->destroy(s->fty, s);
  }
}

static void eloop_handle_sock_event(sock_t* s) {
  int err = 0;
  if (0 == (err = s->handle_event(s))) {
    // yield
  } else if (EAGAIN == err) {
    if (skt(s, PENDING)) {
      skc(s, PENDING);
    } else {
      debug("sock sleep: %p", s);
      dlink_delete(&s->ready_link);
    }
  } else {
    debug("sock destroy: %p err=%d", s, err);
    sock_destroy(s);
  }
}

int eloop_thread_run(eloop_t** udata) {
  return eloop_run(*udata);
}

int eloop_run(eloop_t* ep) {
  while(true) {
    eloop_refire(ep);
    dlink_for(&ep->ready_link, p) {
      eloop_handle_sock_event(structof(p, sock_t, ready_link));
    }
  }
  return 0;
}

EXPORT int eloop_minit(const char* name) {
  eloop_t* ep = (eloop_t*)sym("__%s_eloop", name);
  void (*init_func)(eloop_t*) = (typeof(init_func))sym("__%s_eloop_init", name);
  check(ep && init_func, "eloop not defined");
  eloop_init(ep);
  init_func(ep);
  __start_thread_group(1, (thread_func_t)eloop_thread_run, ep);
  return 0;
}
