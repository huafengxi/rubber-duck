static int sk_translate_io_error(sock_t* s, int64_t bytes, uint32_t epbit) {
  if (bytes > 0) {
    return 0;
  } else if (bytes < 0) {
    if (EWOULDBLOCK == errno || EAGAIN == errno) {
      skclear(s, epbit);
      return EAGAIN;
    } else {
      return errno;
    }
  } else {
    return ENODATA;
  }
}

static int sk_after_io(sock_t* s, const char* buf, int64_t bytes, uint32_t epbit) {
  int ret = sk_translate_io_error(s, bytes, epbit);
  sk_check_io(&s->debug_check, buf, bytes, epbit);
  return ret;
}
static int sk_after_iov(sock_t* s, struct iovec* iov, int cnt, int64_t bytes, uint32_t epbit) {
  int ret = sk_translate_io_error(s, bytes, epbit);
  sk_check_iov(&s->debug_check, iov, cnt, bytes, epbit);
  return ret;
}

static int sk_after_read(sock_t* s, const char* buf, int64_t bytes) { return sk_after_io(s, buf, bytes, EPOLLIN); }
static int sk_after_write(sock_t* s, const char* buf, int64_t bytes) { return sk_after_io(s, buf, bytes, EPOLLOUT); }
static int sk_after_readv(sock_t* s, struct iovec* iov, int cnt, int64_t bytes) { return sk_after_iov(s, iov, cnt, bytes, EPOLLIN); }
static int sk_after_writev(sock_t* s, struct iovec* iov, int cnt, int64_t bytes) { return sk_after_iov(s, iov, cnt, bytes, EPOLLOUT); }

int sk_read(sock_t* s, char* buf, size_t size, ssize_t* rbytes) {
  return sk_after_read(s, buf, (*rbytes = uintr_read(s->fd, buf, size)));
}

int sk_readv(sock_t* s, struct iovec* iov, int cnt, ssize_t* rbytes) {
  return sk_after_readv(s, iov, cnt, (*rbytes = uintr_readv(s->fd, iov, cnt)));
}

int sk_write(sock_t* s, const char* buf, size_t size, ssize_t* wbytes) {
  return sk_after_write(s, buf, (*wbytes = uintr_write(s->fd, buf, size)));
}

int sk_writev(sock_t* s, struct iovec* iov, int cnt, ssize_t* wbytes) {
  return sk_after_writev(s, iov, cnt, (*wbytes = uintr_writev(s->fd, iov, cnt)));
}

int sk_try_write_rb(sock_t* s, rbuffer_t* rb) {
  int err = 0;
  ssize_t wbytes = 0;
  int ioc = 0;
  struct iovec iov[2];
  if((ioc = rb_iov_read(rb, iov)) > 0
        && 0 == (err = sk_writev(s, iov, ioc, &wbytes))) {
    rb_consumed(rb, wbytes);
  }
  return err;
}

int sk_write_rb(sock_t* s, rbuffer_t* rb) {
  int err = 0;
  ssize_t wbytes = 0;
  int ioc = 0;
  struct iovec iov[2];
  while((ioc = rb_iov_read(rb, iov)) > 0
     && 0 == (err = sk_writev(s, iov, ioc, &wbytes))) {
    rb_consumed(rb, wbytes);
  }
  return err;
}

int sk_try_read_rb(sock_t* s, rbuffer_t* rb) {
  int err = 0;
  ssize_t rbytes = 0;
  int ioc = 0;
  struct iovec iov[2];
  if ((ioc = rb_iov_alloc(rb, iov)) > 0
        && 0 == (err = sk_readv(s, iov, ioc, &rbytes))) {
    rb_iov_ready(rb, rbytes);
  }
  return err;
}

int sk_read_with_rb(void** ret, sock_t* s, rbuffer_t* rb, int64_t size) {
  int err = 0;
  while (NULL == (*ret = rb_read(rb, size)) && 0 == err && 0 == (err = sk_try_read_rb(s, rb)))
    ;
  return err;
}

int sk_alloc_with_rb(void** ret, sock_t* s, rbuffer_t* wb, int64_t size) {
  int err = 0;
  while (NULL == (*ret = rb_alloc(wb, size)) && 0 == err && 0 == (err = sk_try_write_rb(s, wb)))
    ;
  return err;
}
