extern __thread uint64_t cur_th_gen_id;
extern uint64_t g_seq_id;
inline uint64_t gen_id() {
  return cur_th_gen_id += MAX_THREAD_NUM;
}

inline uint64_t gen_seq_id() {
  return AAF(&g_seq_id, 1);
}
