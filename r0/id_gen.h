inline uint64_t gen_uniq_id() {
  const uint64_t batch_cnt = 1024;
  static uint64_t g_seq = 0;
  static __thread uint64_t thread_seq = 0;
  if (thread_seq % batch_cnt) {
    thread_seq = FAA(&g_seq, batch_cnt);
  }
  return ++thread_seq;
}
