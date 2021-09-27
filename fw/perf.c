extern inline uint64_t rand64(uint64_t h);
static uint64_t make_seq(uint64_t x, uint64_t id){ return (x<<10) + id; }
static uint64_t gen_rand(uint64_t x, uint64_t id) { return rand64(make_seq(x, id)); }

typedef struct perf_thread_ctx_t {
  const char* name;
  int total_thread;
  int thread_idx;
} perf_thread_ctx_t;

static int __perf_loop_thread_func(perf_thread_ctx_t* ctx) {
  int64_t* c = get_pc(ctx->name);
  int (*f)() = (typeof(f))sym("__%s_perf", ctx->name);
  int (*insert_func)(uint64_t) = (typeof(insert_func))sym("__%s_insert", ctx->name);
  int (*delete_func)(uint64_t) = (typeof(delete_func))sym("__%s_delete", ctx->name);
  if (f) {
    while(true) {
      f();
      *c += 1;
    }
  } else if (0 == (ctx->total_thread % 2)) {
    if (0 == (ctx->thread_idx % 2)) {
      for(int64_t i = 0; ; i++) {
        insert_func(gen_rand(i, ctx->thread_idx));
        *c += 1;
      }
    } else {
      for(int64_t i = 0; ; i++) {
        delete_func(gen_rand(i, ctx->thread_idx - 1));
        *c += 1;
      }
    }
  } else {
    int64_t populate = cfgi("populate", "1048576");
    for(int64_t i = 0; i < populate; i++) {
      insert_func(gen_rand(i, ctx->thread_idx));
    }
    for(int64_t i = 0; ; i++) {
      insert_func(gen_rand(i + populate, ctx->thread_idx));
      delete_func(gen_rand(i, ctx->thread_idx));
      *c += 1;
    }
  }
  return 0;
}

static void __prepare_hook(const char* name) {
  int (*f)() = (typeof(f))sym("__%s_prepare", name);
  if (f) {
    check(f() == 0, "%s_prepare fail", name);
  }
}

EXPORT int perf_minit(const char* name) {
  int64_t thread_count = cfg2i(name, "thread", "1");
  perf_thread_ctx_t ctx = {name, (int)thread_count, 0};
  info("perf_minit: %s thread_count=%ld", name, thread_count);
  __prepare_hook(name);
  for(int i = 0; i < thread_count; i++) {
    ctx.thread_idx = i;
    __start_thread((thread_func_t)__perf_loop_thread_func, (void*)&ctx, sizeof(ctx));
  }
  return 0;
}

int __timeit(const char* name) {
  int64_t start = get_us();
  int (*f)() = (typeof(f))sym_vital("__%s_perf", name);
  f();
  info("perf: %s %'ldus", name, get_us() - start);
  return 0;
}
