typedef msg_t sms_msg_t;
typedef struct sms_sk_t {
  SOCK_COMMON;
  rbuffer_t ib;
  rbuffer_t ob;
} sms_sk_t;

typedef struct sms_sf_t {
  SOCK_FACTORY_COMMON;
  sms_handle_func_t handle;
} sms_sf_t;

typedef struct sms_t {
  eloop_t ep;
  listenfd_t listenfd;
  sms_sf_t sf;
  sms_handle_func_t on_req;
} sms_t;

static int sms_sk_do_flush(sms_sk_t* s, int64_t* remain) {
  int err = sk_write_rb((sock_t*)s, &s->ob);
  *remain = rb_size(&s->ob);
  return err;
}

static int sms_sk_do_decode(sms_sk_t* s, sms_msg_t** msg) {
  int err = 0;
  if (0 == (err = sk_read_with_rb((void**)msg, (sock_t*)s, &s->ib, sizeof(**msg)))) {
    if ((*msg)->s <= MSG_LIMIT && (*msg)->s >= (int64_t)sizeof(**msg)) {
      err = sk_read_with_rb((void**)msg, (sock_t*)s, &s->ib, (*msg)->s);
    } else {
      while(1)
        ;
      err = EINVAL;
    }
  }
  return err;
}

static int sms_sk_handle_msg(sms_sk_t* s, sms_msg_t* req) {
  int err = 0;
  int64_t resp_size = 0;
  sms_msg_t* resp = NULL;
  sms_t* sms = structof(s->fty, sms_t, sf);
  if (0 == (err = sk_alloc_with_rb((void**)&resp, (sock_t*)s, &s->ob, MSG_LIMIT))) {
    if ((resp_size = sms->on_req(req, resp)) < 0) {
      info("handle error");
      err = EFAULT;
    } else {
      rb_consumed(&s->ib, req->s);
      rb_ready(&s->ob, (char*)resp, resp_size);
    }
  }
  return err;
}

static int sms_sk_init(sms_sf_t* sf, sms_sk_t* s) {
  unused(sf);
  rb_init(&s->ib);
  rb_init(&s->ob);
  return 0;
}

static void sms_sk_destroy(sms_sf_t* sf, sms_sk_t* s) {
  unused(sf,s);
}

static int sms_minit_cfg(sms_cfg_t* cfg, const char* name) {
  cfg->addr = addr_build("0.0.0.0", cfgi(name, "8042"));
  cfg->handle_func = (sms_handle_func_t)sym("__%s_handle_func", name);
  return cfg->handle_func? 0: ENOENT;
}

static int sms_sf_do_init(sms_sf_t* sf, sms_cfg_t* cfg) {
  unused(sf, cfg);
  return 0;
}

static int sms_do_init(sms_t* sms, sms_cfg_t* cfg) {
  sms->on_req = cfg->handle_func;
  return 0;
}

#define __tns_nio_opt__ (NIO_OPT_LISTEN)
//cog use_tpl('sms', 'nio.t.h')
#define tns(x) sms ## x
#include "nio.t.h.gen" // #global: sms_cb_t sms_cfg_t sms_create sms_cur_resp sms_decode sms_do_cb sms_do_cb_exception sms_do_connect sms_do_init sms_do_post sms_evfd_cb sms_flush_cb sms_flush_cb_after_flush sms_flush_cb_exception sms_flush_cb_on_post_fail sms_g_t sms_get_id sms_get_sk sms_handle_one_req sms_handle_req_queue sms_init sms_minit sms_minit_cfg sms_msg_t sms_post sms_post_async sms_post_io sms_req_dispatch sms_req_t sms_resp_cb_on_msg sms_resp_cb_on_post_fail sms_resp_cb_on_sk_destroy sms_resp_cb_on_timeout sms_select_thread sms_sf_do_init sms_sf_init sms_sf_t sms_sk_alloc sms_sk_check_connect sms_sk_consume sms_sk_delete sms_sk_destroy sms_sk_do_decode sms_sk_do_flush sms_sk_flush sms_sk_free sms_sk_handle_event sms_sk_handle_event_ready sms_sk_handle_msg sms_sk_init sms_sk_msg_done sms_sk_new sms_sk_read sms_sk_t sms_start sms_t sms_thread_work sms_try_connect sms_write_queue_on_sk_destroy
#undef tns
//end
