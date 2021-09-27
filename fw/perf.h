inline uint64_t rand64(uint64_t h) {
  h ^= h >> 33;
  h *= 0xff51afd7ed558ccd;
  h ^= h >> 33;
  h *= 0xc4ceb9fe1a85ec53;
  h ^= h >> 33;
  return h;
}

#define PERF(func) STAT_DEF(func, 1);\
  CMD(func, "perf " #func) { return perf_minit(#func); }; \
  EXPORT void __ ## func ##_perf()

extern int __timeit(const char* name);
#define TIMEIT(func) \
 CMD(func, "timeit " #func) { __timeit(#func); return 0; } \
 EXPORT void __ ## func ## _perf()
