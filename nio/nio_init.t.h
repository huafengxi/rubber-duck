int64_t my_init(my_t* io, my_cfg_t* cfg) {
  int err = 0;
  ef(err = eloop_init(&io->ep));
  ef(err = my_sf_init(&io->sf, cfg));
#if nio_test(LISTEN)
  ef(err = listenfd_init(&io->ep, &io->listenfd, (sf_t*)&io->sf, cfg->addr));
  info("%s listen at %s", STR(tns(_nio)), T2S(addr, cfg->addr));
#endif
#if nio_test(POST)
  ef(err = evfd_init(&io->ep, &io->evfd, (handle_event_t)my_evfd_cb));
  sc_queue_init(&io->req_queue);
#endif
#if nio_test(RESP_CB)
  ef(err = timerfd_init_tw(&io->ep, &io->cb_timerfd));
  tw_init(&io->cb_tw, my_resp_cb_on_timeout);
#endif
  ef(err = my_do_init(io, cfg));
  el();
  return err;
}

my_g_t* my_start(int n_thread, my_cfg_t* cfg) {
  my_g_t* cl_g = (my_g_t*)salloc(sizeof(my_g_t) + sizeof(my_t) * n_thread);
  ef(!cl_g);
  for(int i = 0; cl_g && i < n_thread; i++) {
    my_t* cl = cl_g->instance + i;
    ef(my_init(cl, cfg));
    ef(__start_thread_group(1, (thread_func_t)eloop_thread_run, &cl->ep));
  }
  cl_g->cnt = n_thread;
  return cl_g;
  el();
  // TODO: destroy cl
  return NULL;
}

my_g_t* my_create(int n_thread, my_cfg_t* cfg) {
  my_g_t* cl_g = (my_g_t*)salloc(sizeof(my_g_t) + sizeof(my_t) * n_thread);
  ef(!cl_g);
  for(int i = 0; cl_g && i < n_thread; i++) {
    my_t* cl = cl_g->instance + i;
    ef(my_init(cl, cfg));
  }
  cl_g->cnt = n_thread;
  return cl_g;
  el();
  return NULL;
}

void my_thread_work(my_g_t* cl_g, int idx) {
  eloop_run(&cl_g->instance[idx].ep);
}

EXPORT int my_minit(const char* name) {
  my_g_t** cl = (my_g_t**)sym("__%s_g", name);
  int n_thread = cfgi("n_thread", "1");
  my_cfg_t cfg;
  memset(&cfg, 0, sizeof(cfg));
  check(cl && 0 == my_minit_cfg(&cfg, name), "nio not defined: %s", name);
  check(*cl = my_start(n_thread, &cfg), "nio start fail: %s", name);
  info("nio start: %s thread: %d", name, n_thread);
  return 0;
}
