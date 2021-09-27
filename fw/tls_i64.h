inline int64_t* tls_i64(int64_t off) { return (int64_t*)tls_get(off); }
inline int64_t tls_add(int64_t off, int64_t x) { return *tls_i64(off) += x; }
inline int64_t tls_sumo(uint64_t off) {
  int64_t s = 0;
  for(int i = 0; i < g_thread_count; i++) {
    s += LOAD((int64_t*)tls_o(off, i));
  }
  return s;
}
inline int64_t tls_suma(int64_t* addr) { return tls_sumo(tls_co(addr)); }
