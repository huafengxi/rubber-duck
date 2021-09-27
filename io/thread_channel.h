typedef struct thread_channel_t {
  evfd_t evfd;
  sc_queue_t req_queue;
} thread_channel_t;

#define tch_handle_queue_def(name) static int name ## _tch_handle_queue(thread_channel_t* tch) { \
    link_t* l = NULL;                                                   \
    int cnt = 0;                                                        \
    while((l = sc_queue_pop(&tch->req_queue))) {                        \
      name ## _tch_handle_one(tch, l);                                  \
      cnt++;                                                            \
    }                                                                   \
    return cnt == 0? EAGAIN: 0;                                         \
  }

#define tch_evfd_cb_def(name) static int name ## _tch_evfd_cb(sock_t* s) { \
    evfd_drain(s->fd);                                                  \
    return name ## _tch_handle_queue(structof(s, thread_channel_t, evfd)); \
  }

extern int tch_init(eloop_t* ep, thread_channel_t* tch, handle_event_t func);
inline void tch_post(thread_channel_t* tch, link_t* l) {
  if (sc_queue_push(&tch->req_queue, l)) {
    evfd_signal(tch->evfd.fd);
  }
}
