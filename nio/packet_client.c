typedef struct pktc_sk_t {
  SOCK_COMMON;
  link_t hash;
  addr_t dest;
  write_queue_t wq;
  ibuffer_t ib;
  dlink_t cb_head;
} pktc_sk_t;

typedef struct pktc_sf_t {
  SOCK_FACTORY_COMMON;
} pktc_sf_t;

typedef struct pktc_t {
  eloop_t ep;
  pktc_sf_t sf;
  pktc_flush_cb_func_t flush_cb;
  int64_t min_msg_size;
  evfd_t evfd;
  sc_queue_t req_queue;
  timerfd_t cb_timerfd;
  time_wheel_t cb_tw;
  hash_t sk_map;
  link_t sk_table[1024];
  hash_t cb_map;
  link_t cb_table[1<<16];
} pktc_t;

typedef struct pktc_msg_t {
  int64_t sz;
  char* payload;
} pktc_msg_t;

static int64_t pktc_decode(char* b, int64_t s) { return msg_decode(b, s);}
static uint64_t pktc_get_id(pktc_msg_t* m) { return msg_get_id(m->payload); }

static int pktc_sk_read(void** b, pktc_sk_t* s, int64_t sz) {
  return sk_read_with_ib(b, (sock_t*)s, &s->ib, sz);
}

static void pktc_flush_cb(pktc_t* io, pktc_req_t* req) {
  io->flush_cb(req);
}

static void pktc_do_cb(pktc_cb_t* cb, pktc_msg_t* m) {
  cb->resp_cb(m->payload, m->sz, cb->arg);
}

static void pktc_do_cb_exception(pktc_cb_t* cb) {
  cb->resp_cb(NULL, 0, cb->arg);
}

static void pktc_sk_msg_done(pktc_sk_t* s, pktc_msg_t* m) {
  ib_consumed(&s->ib, m->sz);
}

static int pktc_sk_init(pktc_sf_t* sf, pktc_sk_t* s) {
  unused(sf);
  wq_init(&s->wq);
  ib_init(&s->ib);
  dlink_init(&s->cb_head);
  return 0;
}

static void pktc_sk_destroy(pktc_sf_t* sf, pktc_sk_t* s) {
  pktc_t* pc = structof(sf, pktc_t, sf);
  ihash_del(&pc->sk_map, *(uint64_t*)&s->dest);
}

static int pktc_sf_do_init(pktc_sf_t* sf, void* arg) {
  unused(sf, arg);
  return 0;
}

static void pktc_req_dispatch(pktc_sk_t* sk, pktc_req_t* r) {
  wq_push(&sk->wq, &r->link);
}

static int pktc_minit_cfg(pktc_cfg_t* cfg, const char* name) {
  cfg->flush_cb = (pktc_flush_cb_func_t)sym("__%s_flush_cb_func", name);
  return 0;
}

static int pktc_do_init(pktc_t* cl, pktc_cfg_t* cfg) {
  int err = 0;
  cl->flush_cb = cfg->flush_cb;
  cl->min_msg_size = 8;
  hash_init(&cl->sk_map, arrlen(cl->sk_table));
  hash_init(&cl->cb_map, arrlen(cl->cb_table));
  return err;
}


#define __tns_nio_opt__ (NIO_OPT_CONNECT|NIO_OPT_POST|NIO_OPT_RESP_CB|NIO_OPT_DECODE|NIO_OPT_WRITE_QUEUE)
//cog use_tpl('pktc', 'nio.t.h')
#define tns(x) pktc ## x
#include "nio.t.h.gen" // #global: pktc_cb_t pktc_cfg_t pktc_create pktc_cur_resp pktc_decode pktc_do_cb pktc_do_cb_exception pktc_do_connect pktc_do_init pktc_do_post pktc_evfd_cb pktc_flush_cb pktc_flush_cb_after_flush pktc_flush_cb_exception pktc_flush_cb_on_post_fail pktc_g_t pktc_get_id pktc_get_sk pktc_handle_one_req pktc_handle_req_queue pktc_init pktc_minit pktc_minit_cfg pktc_msg_t pktc_post pktc_post_async pktc_post_io pktc_req_dispatch pktc_req_t pktc_resp_cb_on_msg pktc_resp_cb_on_post_fail pktc_resp_cb_on_sk_destroy pktc_resp_cb_on_timeout pktc_select_thread pktc_sf_do_init pktc_sf_init pktc_sf_t pktc_sk_alloc pktc_sk_check_connect pktc_sk_consume pktc_sk_delete pktc_sk_destroy pktc_sk_do_decode pktc_sk_do_flush pktc_sk_flush pktc_sk_free pktc_sk_handle_event pktc_sk_handle_event_ready pktc_sk_handle_msg pktc_sk_init pktc_sk_msg_done pktc_sk_new pktc_sk_read pktc_sk_t pktc_start pktc_t pktc_thread_work pktc_try_connect pktc_write_queue_on_sk_destroy
#undef tns
//end
