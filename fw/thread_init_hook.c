THREAD_SETUP(format) {
  //format_init(&g_format, sizeof(g_format.buf));
}
USECTION_DEF(thread_setup);
CONSTRUCTOR void __thread_setup() {
  for(void** p = (void**)&USECTION_BEGIN(thread_setup); (uint64_t)p < (uint64_t)&USECTION_END(thread_setup); p++) {
    ((void (*)())*p)();
  }
}

