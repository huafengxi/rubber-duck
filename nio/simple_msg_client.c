typedef struct smc_sk_t {
  SOCK_COMMON;
  link_t hash;
  addr_t dest;
  write_queue_t wq;
  rbuffer_t ib;
} smc_sk_t;

typedef struct smc_sf_t {
  SOCK_FACTORY_COMMON;
} smc_sf_t;

typedef struct smc_t {
  eloop_t ep;
  smc_handle_func_t on_resp;
  smc_sf_t sf;
  evfd_t evfd;
  sc_queue_t req_queue;
  hash_t sk_map;
  link_t sk_table[1024];
} smc_t;

static void smc_flush_cb(smc_t* io, smc_req_t* r) {
  unused(io);
  dfree(r);
}

static int smc_sk_do_decode(smc_sk_t* s, smc_msg_t** msg) {
  int err = 0;
  if (0 == (err = sk_read_with_rb((void**)msg, (sock_t*)s, &s->ib, sizeof(**msg)))) {
    err = sk_read_with_rb((void**)msg, (sock_t*)s, &s->ib, (*msg)->s);
  }
  return err;
}

static int smc_sk_handle_msg(smc_sk_t* s, smc_msg_t* msg) {
  smc_t* pc = structof(s->fty, smc_t, sf);
  pc->on_resp(msg);
  rb_consumed(&s->ib, msg->s);
  return 0;
}

static int smc_sk_init(smc_sf_t* sf, smc_sk_t* s) {
  unused(sf);
  wq_init(&s->wq);
  rb_init(&s->ib);
  return 0;
}

static void smc_sk_destroy(smc_sf_t* sf, smc_sk_t* s) {
  smc_t* pc = structof(sf, smc_t, sf);
  ihash_del(&pc->sk_map, *(uint64_t*)&s->dest);
}

static int smc_sf_do_init(smc_sf_t* sf, void* arg) {
  unused(sf, arg);
  return 0;
}

static void smc_do_post(smc_t* cl, smc_sk_t* sk, smc_req_t* r) {
  unused(cl);
  wq_push(&sk->wq, &r->link);
}

static int smc_minit_cfg(smc_cfg_t* cfg, const char* name) {
  cfg->handle_func = (smc_handle_func_t)sym("__%s_handle_func", name);
  return cfg->handle_func? 0: ENOENT;
}

static int smc_do_init(smc_t* cl, smc_cfg_t* cfg) {
  cl->on_resp = (smc_handle_func_t)cfg->handle_func;
  hash_init(&cl->sk_map, arrlen(cl->sk_table));
  return 0;
}
typedef smc_handle_func_t smc_init_arg_t;

#define __tns_nio_opt__ (NIO_OPT_CONNECT|NIO_OPT_POST|NIO_OPT_WRITE_QUEUE)
//cog use_tpl('smc', 'nio.t.h')
#define tns(x) smc ## x
#include "nio.t.h.gen" // #global: smc_cb_t smc_cfg_t smc_create smc_cur_resp smc_decode smc_do_cb smc_do_cb_exception smc_do_connect smc_do_init smc_do_post smc_evfd_cb smc_flush_cb smc_flush_cb_after_flush smc_flush_cb_exception smc_flush_cb_on_post_fail smc_g_t smc_get_id smc_get_sk smc_handle_one_req smc_handle_req_queue smc_init smc_minit smc_minit_cfg smc_msg_t smc_post smc_post_async smc_post_io smc_req_dispatch smc_req_t smc_resp_cb_on_msg smc_resp_cb_on_post_fail smc_resp_cb_on_sk_destroy smc_resp_cb_on_timeout smc_select_thread smc_sf_do_init smc_sf_init smc_sf_t smc_sk_alloc smc_sk_check_connect smc_sk_consume smc_sk_delete smc_sk_destroy smc_sk_do_decode smc_sk_do_flush smc_sk_flush smc_sk_free smc_sk_handle_event smc_sk_handle_event_ready smc_sk_handle_msg smc_sk_init smc_sk_msg_done smc_sk_new smc_sk_read smc_sk_t smc_start smc_t smc_thread_work smc_try_connect smc_write_queue_on_sk_destroy
#undef tns
//end
