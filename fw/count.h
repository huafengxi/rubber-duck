typedef struct counter_t
{
  int64_t count[MAX_THREAD_NUM][CACHE_ALIGN_SIZE/sizeof(int64_t)];
} counter_t;

inline void counter_add(counter_t* counter, int64_t x) { counter->count[cth.id][0] += x; }
inline int64_t counter_fetch(counter_t* counter) {
  int64_t s = 0;
  BARRIER();
  for(int i = 0; i < g_thread_count; i++) {
    s += counter->count[i][0];
  }
  return s;
}

inline void __counter_report(const char* msg, counter_t* cnt) {
  int64_t last = counter_fetch(cnt);
  while(true) {
    usleep(1000 * 1000);
    int64_t cur = counter_fetch(cnt);
    info("%s: %'ld", msg, cur - last);
    last = cur;
  }
}
