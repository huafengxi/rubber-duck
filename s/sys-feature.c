CMD(size, "sizeof") {
  info("sizeof(size_t)=%ld", sizeof(size_t));
  return 0;
}

__thread int thread_v;
void* thread_func(void* arg) {
  unused(arg);
  int x = 0;
  fprintf(stderr, "thread_v=%p read=%p write=%p x=%p\n", &thread_v, &__rb_read_tbuffer, &__rb_write_tbuffer, &x);
  return NULL;
}

CMD(tls, "tls") {
  int err = 0;
  pthread_t pd;
  pthread_attr_t attr;
  void* s = valloc(1<<24);
  if (!s) {
    info("alloc fail");
    return -1;
  }
  if ((err = pthread_attr_init(&attr))) {
    info("pthread_attr_init fail: err=%d", err);
  }
  if ((err = pthread_attr_setstack(&attr, s, 1<<24))) {
    info("pthread_attr_setstack fail: err=%d s=%p", err, s);
  }
  info("s=%p", s);
  if ((err = pthread_create(&pd, &attr, thread_func, NULL))) {
    info("pthread create fail: err=%d", err);
  } else {
    pthread_join(pd, NULL);
  }
  return err;
}

CMD(vma, "vma") {
  pause();
  return 0;
}

CMD(mmap, "mmap") {
  void* addr = mmap(NULL, 256<<20, PROT_READ, MAP_PRIVATE|MAP_ANONYMOUS, -1, 0);
  info("addr=%p", addr);
  addr = sbrk(256<<20);
  brk(0);
  addr = mmap((void*)0x4c0fb92000, 256<<20, PROT_READ, MAP_FIXED|MAP_PRIVATE|MAP_ANONYMOUS, -1, 0);
  info("add=%p", addr);
  pause();
  return 0;
}

char* get_big_array() {
  static char big[1<<30];
  return big;
}

CMD(local_static, "local_static") {
  pause();
  get_big_array();
  pause();
  return 0;
}
