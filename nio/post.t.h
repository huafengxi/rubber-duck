static void my_post_io(my_t* io, my_req_t* r) {
  my_sk_t* sk = my_get_sk(io, r);
  if (sk) {
    my_do_post(io, sk, r);
    eloop_fire(&io->ep, (sock_t*)sk);
  } else {
#if nio_test(WRITE_QUEUE)
    my_flush_cb_on_post_fail(io, r);
#endif
#if nio_test(RESP_CB)
    my_resp_cb_on_post_fail(r);
#endif
  }
}

static int my_post_async(my_t* io, my_req_t* req) {
  if (req->msg.s < (int64_t)sizeof(req->msg)) {
    return EINVAL;
  }
  if (sc_queue_push(&io->req_queue, &req->link)) {
    evfd_signal(io->evfd.fd);
  }
  return 0;
}

static my_t* my_select_thread(my_g_t* io_g, int idx) {
  return io_g->instance + (idx % io_g->cnt);
}

int my_post(my_g_t* io_g, my_req_t* req, int io_index) {
  return my_post_async(my_select_thread(io_g, io_index), req);
}

static void my_handle_one_req(my_t* io, link_t* l) {
  my_post_io(io, structof(l, my_req_t, link));
}

static int my_handle_req_queue(my_t* io) {
  link_t* l = NULL;
  int cnt = 0;
  while(cnt < 128 && (l = sc_queue_pop(&io->req_queue))) {
    my_handle_one_req(io, l);
    cnt++;
  }
  return cnt == 0? EAGAIN: 0;
}

static int my_evfd_cb(sock_t* s) {
  evfd_drain(s->fd);
  return my_handle_req_queue(structof(s, my_t, evfd));
}
