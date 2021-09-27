thread_t g_thread_array[MAX_THREAD_NUM];
int32_t g_thread_count = 0;
__thread cur_thread_t cth;

extern uint64_t thread_base();
extern void __thread_setup();

static void* __thread_work(struct thread_t* arg) {
  cth.id = arg->id;
  __thread_setup();
  info("start_thread: tid=%d func=%p", arg->id, arg->func);
  int err = arg->func(arg->udata);
  info("thread_exit: err=%d", err);
  return NULL;
}

thread_t* prepare_thread(thread_func_t func, void* arg, int sz) {
  int32_t id = g_thread_count++;
  struct thread_t* th = g_thread_array + id;
  *th = (struct thread_t) {0, id, func, ""};
  memcpy(th->udata, arg, sz);
  return th;
}

static int __start_thread0(thread_t* th) {
  return pthread_create(&th->pd, NULL, (void* (*)(void*))__thread_work, th);
}

int __start_thread(thread_func_t func, void* arg, int sz) {
  return __start_thread0(prepare_thread(func, arg, sz));
}

int __start_thread_group(int n_thread, thread_func_t func, void* arg) {
  int err = 0;
  for(int i = 0; 0 == err && i < n_thread; i++) {
    err = __start_thread0(prepare_thread(func, &arg, sizeof(void*)));
  }
  return err;
}

void __wait_threads() {
  for(int i = 1; i < g_thread_count; i++) {
    pthread_join(g_thread_array[i].pd, NULL);
  }
}

void* thread_calloc(int32_t size) {
  return NULL;
  void* ret = cth.alloc_buf + cth.alloc_end;
  cth.alloc_end += size;
  return ret;
}

EXPORT int threads_minit(const char* name) {
  int (*func)(void*) = (typeof(func))sym("%s_thread_func", name);
  if (!func) return -ENOENT;
  int thread_cnt = cfgi(name, "1");
  info("start_thread_group: %s tc=%d func=%p", name, thread_cnt, func);
  __start_thread_group(thread_cnt, func, (void*)name);
  return 0;
}
