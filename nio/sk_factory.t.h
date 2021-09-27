static void* my_sk_alloc(int64_t sz) { return salloc(sz); }
static void my_sk_free(void* p) { sfree(p); }

static my_sk_t* my_sk_new(my_sf_t* sf) {
  my_sk_t* s = (my_sk_t*)my_sk_alloc(sizeof(*s));
  if (s) {
    s->fty = (sf_t*)sf;
    s->handle_event = (handle_event_t)my_sk_handle_event;
    my_sk_init(sf, s);
  }
  info("sk_new: s=%p", s);
  return s;
}

static void my_sk_delete(my_sf_t* sf, my_sk_t* s) {
  my_t* io = structof(sf, my_t, sf);
  info("sk_destroy: s=%p io=%p", s, io);
  my_sk_destroy(sf, s);
#if nio_test(WRITE_QUEUE)
  my_write_queue_on_sk_destroy(io, s);
#endif
#if nio_test(RESP_CB)
  my_resp_cb_on_sk_destroy(io, s);
#endif
  my_sk_free(s);
}

static int my_sf_init(my_sf_t* sf, void* cfg) {
  sf_init((sf_t*)sf, (void*)my_sk_new, (void*)my_sk_delete);
  return my_sf_do_init(sf, (my_cfg_t*)cfg);
}
