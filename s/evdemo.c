int callback(sock_t* s) {
  evfd_drain(s->fd);
  info("on callback");
  return EAGAIN;
}

evfd_t evfd;
EVLOOP(evfd) {
  evfd_init(ep, &evfd, (handle_event_t)callback);
  return 0;
}

EXPORT int __evfd_perf_prepare() {
  return __do_cmd("evfd");
}

PERF(evfd_perf) {
  evfd_signal(evfd.fd);
  usleep(1000 * 1000);
}

timerfd_t timerfd;
EVLOOP(timerfd) {
  check(0 == timerfd_init(ep, &timerfd, callback), "timerfd init fail");
  timerfd_set_interval(&timerfd, 1000 * 1000);
  return 0;
}
