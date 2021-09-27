typedef struct pkts_sk_t {
  SOCK_COMMON;
  uint64_t id;
  write_queue_t wq;
  ibuffer_t ib;
} pkts_sk_t;

typedef struct pkts_sf_t {
  SOCK_FACTORY_COMMON;
} pkts_sf_t;

typedef struct pkts_t {
  eloop_t ep;
  listenfd_t listenfd;
  pkts_sf_t sf;
  void* udata;
  pkts_flush_cb_func_t flush_cb;
  int64_t min_msg_size;
  pkts_handle_func_t on_req;
  evfd_t evfd;
  sc_queue_t req_queue;
  idm_t sk_map;
  idm_item_t sk_table[1<<16];
} pkts_t;

typedef struct pkts_msg_t {
  int64_t sz;
  char* payload;
} pkts_msg_t;

static int64_t pkts_decode(char* b, int64_t s) { return msg_decode(b, s);}

void pkts_flush_cb(pkts_t* io, pkts_req_t* req) {
  io->flush_cb(req);
}

static int pkts_sk_read(void** b, pkts_sk_t* s, int64_t sz) {
  return sk_read_with_ib(b, (sock_t*)s, &s->ib, sz);
}

static int pkts_sk_handle_msg(pkts_sk_t* s, pkts_msg_t* msg) {
  pkts_t* pkts = structof(s->fty, pkts_t, sf);
  int ret = pkts->on_req(pkts->udata, ib_ref(&s->ib), msg->payload, msg->sz, s->id);
  ib_consumed(&s->ib, msg->sz);
  return ret;
}

static int pkts_sk_init(pkts_sf_t* sf, pkts_sk_t* s) {
  pkts_t* pkts = structof(sf, pkts_t, sf);
  wq_init(&s->wq);
  ib_init(&s->ib);
  s->id = idm_set(&pkts->sk_map, s);
  return 0;
}

static void pkts_sk_destroy(pkts_sf_t* sf, pkts_sk_t* s) {
  pkts_t* pkts = structof(sf, pkts_t, sf);
  idm_del(&pkts->sk_map, s->id);
}

static int pkts_sf_do_init(pkts_sf_t* sf, pkts_cfg_t* cfg) {
  unused(sf, cfg);
  return 0;
}

static int pkts_do_init(pkts_t* pkts, pkts_cfg_t* cfg) {
  idm_init(&pkts->sk_map, arrlen(pkts->sk_table));
  pkts->udata = cfg->udata;
  pkts->flush_cb = cfg->flush_cb;
  pkts->min_msg_size = 8;
  pkts->on_req = cfg->handle_func;
  return 0;
}

static pkts_sk_t* pkts_get_sk(pkts_t* pkts, pkts_req_t* r) {
  return (pkts_sk_t*)idm_get(&pkts->sk_map, r->chid);
}

static void pkts_do_post(pkts_t* pkts, pkts_sk_t* sk, pkts_req_t* r) {
  unused(pkts);
  wq_push(&sk->wq, &r->link);
}

static int pkts_minit_cfg(pkts_cfg_t* cfg, const char* name) {
  cfg->addr = addr_build("0.0.0.0", cfgi(name, "8042"));
  cfg->udata = sym("__%s_udata", name);
  cfg->flush_cb = (pkts_flush_cb_func_t)sym("__%s_flush_cb_func", name);
  cfg->handle_func = (pkts_handle_func_t)sym("__%s_handle_func", name);
  return (cfg->handle_func && cfg->flush_cb)? 0: ENOENT;
}

#define __tns_nio_opt__ (NIO_OPT_POST|NIO_OPT_LISTEN|NIO_OPT_DECODE|NIO_OPT_WRITE_QUEUE)
//cog use_tpl('pkts', 'nio.t.h')
#define tns(x) pkts ## x
#include "nio.t.h.gen" // #global: pkts_cb_t pkts_cfg_t pkts_create pkts_cur_resp pkts_decode pkts_do_cb pkts_do_cb_exception pkts_do_connect pkts_do_init pkts_do_post pkts_evfd_cb pkts_flush_cb pkts_flush_cb_after_flush pkts_flush_cb_exception pkts_flush_cb_on_post_fail pkts_g_t pkts_get_id pkts_get_sk pkts_handle_one_req pkts_handle_req_queue pkts_init pkts_minit pkts_minit_cfg pkts_msg_t pkts_post pkts_post_async pkts_post_io pkts_req_dispatch pkts_req_t pkts_resp_cb_on_msg pkts_resp_cb_on_post_fail pkts_resp_cb_on_sk_destroy pkts_resp_cb_on_timeout pkts_select_thread pkts_sf_do_init pkts_sf_init pkts_sf_t pkts_sk_alloc pkts_sk_check_connect pkts_sk_consume pkts_sk_delete pkts_sk_destroy pkts_sk_do_decode pkts_sk_do_flush pkts_sk_flush pkts_sk_free pkts_sk_handle_event pkts_sk_handle_event_ready pkts_sk_handle_msg pkts_sk_init pkts_sk_msg_done pkts_sk_new pkts_sk_read pkts_sk_t pkts_start pkts_t pkts_thread_work pkts_try_connect pkts_write_queue_on_sk_destroy
#undef tns
//end
