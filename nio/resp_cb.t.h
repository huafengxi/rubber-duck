static void my_resp_cb_on_sk_destroy(my_t* io, my_sk_t* s) {
  dlink_for(&s->cb_head, p) {
    my_cb_t* cb = structof(p, my_cb_t, sk_dlink);
    ihash_del(&io->cb_map, cb->id);
    dlink_delete(&cb->timer_dlink);
    my_do_cb_exception(cb);
  }
}

static void my_resp_cb_on_timeout(time_wheel_t* tw, dlink_t* l) {
  my_cb_t* cb = structof(l, my_cb_t, timer_dlink);
  my_t* io = structof(tw, my_t, cb_tw);
  ihash_del(&io->cb_map, cb->id);
  dlink_delete(&cb->sk_dlink);
  my_do_cb_exception(cb);
}

static void my_resp_cb_on_post_fail(my_req_t* r) {
  my_do_cb_exception(r->cb);
}

static void my_resp_cb_on_msg(my_t* io, my_msg_t* msg) {
  uint64_t id = my_get_id(msg);
  link_t* hlink = ihash_del(&io->cb_map, id);
  if (hlink) {
    my_cb_t* cb = structof(hlink, pktc_cb_t, hash_link);
    dlink_delete(&cb->timer_dlink);
    dlink_delete(&cb->sk_dlink);
    my_do_cb(cb, msg);
  }
}

static int my_sk_handle_msg(my_sk_t* s, my_msg_t* m) {
  my_t* io = structof(s->fty, my_t, sf);
  my_resp_cb_on_msg(io, m);
  my_sk_msg_done(s, m);
  return 0;
}

static void my_do_post(my_t* io, my_sk_t* sk, my_req_t* r) {
  my_cb_t* cb = r->cb;
  if (cb) {
    dlink_insert(&sk->cb_head, &cb->sk_dlink);
    ihash_insert(&io->cb_map, &cb->hash_link);
    tw_regist(&io->cb_tw, &cb->timer_dlink);
  }
  my_req_dispatch(sk, r);
}

