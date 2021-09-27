int tch_init(eloop_t* ep, thread_channel_t* tch, handle_event_t func) {
  sc_queue_init(&tch->req_queue);
  return evfd_init(ep, &tch->evfd, func);
}
extern void tch_post(thread_channel_t* tch, link_t* l);
