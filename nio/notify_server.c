static int ntfs_sk_handle_event(ntfs_sk_t* s) {
  int err = EAGAIN;
  if (skt(s, OUT)) {
    atomic_msg_t *m = &s->m, *src = &((ntfs_sf_t*)s->fty)->m;
    info("s->sp=%ld m->size=%ld m->seq=%ld src->seq=%ld", s->sp, m->size, m->seq, src->seq);
    if (s->sp >= m->size && m->seq < LOAD(&src->seq)) {
      m->size = atomic_msg_read(src, m->buf, &m->seq);
      s->sp = 0;
    }
    if (s->sp < m->size) {
      ssize_t wbytes = 0;
      if (0 == (err = sk_write((sock_t*)s, m->buf + s->sp, m->size - s->sp, &wbytes))) {
        err = EAGAIN;
      }
      s->sp += wbytes;
    }
  }
  return err;
}

static int ntfs_sk_init(ntfs_sf_t* sf, ntfs_sk_t* s) {
  dlink_insert(&sf->sl, &s->dlink);
  return 0;
}

static void ntfs_sk_destroy(ntfs_sf_t* sf, ntfs_sk_t* s) {
  unused(sf);
  dlink_delete(&s->dlink);
}

static int ntfs_sf_do_init(ntfs_sf_t* sf, void* arg) {
  unused(arg);
  atomic_msg_init(&sf->m);
  dlink_init(&sf->sl);
  return 0;
}

typedef struct ntfs_cfg_t {} ntfs_cfg_t;
//cog use_tpl('ntfs', 'sk_factory.t.h')
#define tns(x) ntfs ## x
#include "sk_factory.t.h.gen" // #global: ntfs_cfg_t ntfs_resp_cb_on_sk_destroy ntfs_sf_do_init ntfs_sf_init ntfs_sf_t ntfs_sk_alloc ntfs_sk_delete ntfs_sk_destroy ntfs_sk_free ntfs_sk_handle_event ntfs_sk_init ntfs_sk_new ntfs_sk_t ntfs_t ntfs_write_queue_on_sk_destroy
#undef tns
//end

static void __ntfs_broadcast(eloop_t* ep, dlink_t* sl) {
  info("notify servre broadcast");
  dlink_for(sl, p) {
    ntfs_sk_t* s = structof(p, ntfs_sk_t, dlink);
    eloop_fire(ep, (sock_t*)s);
  }
}

static int ntfs_evfd_cb(evfd_t* s) {
  ntfs_t* svr = structof(s, ntfs_t, evfd);
  evfd_drain(s->fd);
  __ntfs_broadcast(&svr->ep, &svr->sf.sl);
  return EAGAIN;
}

int ntfs_init(ntfs_t* ns, addr_t addr) {
  int err = 0;
  ef(err = eloop_init(&ns->ep));
  ef(err = ntfs_sf_init(&ns->sf, NULL));
  ef(err = evfd_init(&ns->ep, &ns->evfd, (handle_event_t)ntfs_evfd_cb));
  ef(err = listenfd_init(&ns->ep, &ns->listenfd, (sf_t*)&ns->sf, addr));
  info("notify server init: %d", addr.port);
  el();
  return err;
}

void ntfs_start(ntfs_t* ns) {
  __start_thread_group(1, (thread_func_t)eloop_thread_run, &ns->ep);
}

void ntfs_update(ntfs_t* ns, const char* msg, int64_t size) {
  atomic_msg_write(&ns->sf.m, msg, size);
  int64_t c = 1;
  write(ns->evfd.fd, &c, sizeof(c));
}

EXPORT int ntfs_svr_minit(const char* name) {
  ntfs_t* ns = (ntfs_t*)sym("__%s_ntfs_svr", name);
  check(ns, "notify server not defined: %s", name);
  check(0 == ntfs_init(ns, addr_build("0.0.0.0", cfgi(name, "8042"))), "notify server init fail: %s", name);
  ntfs_start(ns);
  info("notify server start: %s", name);
  return 0;
}
