static int strms_sk_handle_event(strms_sk_t* s) {
  int err = 0;
  int64_t rbytes = 0;
  if (s->cursor < 0) {
    if (skt(s, IN)) {
      sk_read((sock_t*)s, (char*)&s->cursor, sizeof(s->cursor), &rbytes);
      if (rbytes != sizeof(s->cursor)) {
        return EIO;
      }
    }
  }
  if (s->cursor < 0) {
    return EAGAIN;
  }
  if (0 != (err = sk_write_rb((sock_t*)s, &s->rb))) return err;

  int64_t size = 64 * 1024;
  char* buf = (char*)rb_alloc(&s->rb, size);
  if (NULL != buf) {
    rbytes = s->read(buf, size, s->cursor);
    info("stream read callback: cursor=%ld %ld", s->cursor, rbytes);
    if (rbytes > 0) {
      s->cursor += rbytes;
      rb_ready(&s->rb, buf, rbytes);
    } else {
      err = EAGAIN;
    }
  }
  return err;
}

static int strms_sk_init(strms_sf_t* sf, strms_sk_t* s) {
  dlink_insert(&sf->sl, &s->dlink);
  s->read = sf->read;
  s->cursor = -1;
  rb_init(&s->rb);
  return 0;
}

static void strms_sk_destroy(strms_sf_t* sf, strms_sk_t* s) {
  unused(sf);
  dlink_delete(&s->dlink);
}

typedef struct strms_cfg_t {
  strms_read_func_t read;
} strms_cfg_t;
static int strms_sf_do_init(strms_sf_t* sf, strms_cfg_t* cfg) {
  dlink_init(&sf->sl);
  sf->read = cfg->read;
  return 0;
}

//cog use_tpl('strms', 'sk_factory.t.h')
#define tns(x) strms ## x
#include "sk_factory.t.h.gen" // #global: strms_cfg_t strms_resp_cb_on_sk_destroy strms_sf_do_init strms_sf_init strms_sf_t strms_sk_alloc strms_sk_delete strms_sk_destroy strms_sk_free strms_sk_handle_event strms_sk_init strms_sk_new strms_sk_t strms_t strms_write_queue_on_sk_destroy
#undef tns
//end

static void __strms_broadcast(eloop_t* ep, dlink_t* sl) {
  info("stream server broadcast");
  dlink_for(sl, p) {
    strms_sk_t* s = structof(p, strms_sk_t, dlink);
    eloop_fire(ep, (sock_t*)s);
  }
}

static int strms_evfd_cb(evfd_t* s) {
  strms_t* svr = structof(s, strms_t, evfd);
  evfd_drain(s->fd);
  __strms_broadcast(&svr->ep, &svr->sf.sl);
  return EAGAIN;
}

int strms_init(strms_t* svr, addr_t addr, strms_read_func_t read) {
  int err = 0;
  strms_cfg_t cfg = { read };
  ef(err = eloop_init(&svr->ep));
  ef(err = evfd_init(&svr->ep, &svr->evfd, (handle_event_t)strms_evfd_cb));
  ef(err = listenfd_init(&svr->ep, &svr->listenfd, (sf_t*)&svr->sf, addr));
  ef(err = strms_sf_init(&svr->sf, (void*)&cfg));
  info("strms server init: %d", addr.port);
  el();
  return err;
}

void strms_signal(strms_t* svr) {
  int64_t c = 1;
  write(svr->evfd.fd, &c, sizeof(c));
}

EXPORT int strms_svr_minit(const char* name) {
  strms_t* svr = (strms_t*)sym("__%s_strms_svr", name);
  strms_read_func_t read = (strms_read_func_t)sym("__%s_read_func", name);
  check(svr && read, "stream server not defined: %s", name);
  check(0 == strms_init(svr, addr_build("0.0.0.0", cfgi(name, "8042")), read), "stream server init fail: %s", name);
  __start_thread_group(1, (thread_func_t)eloop_thread_run, &svr->ep);
  info("stream server start: %s", name);
  return 0;
}
