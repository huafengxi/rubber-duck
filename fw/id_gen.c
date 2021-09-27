__thread uint64_t cur_th_gen_id;
THREAD_SETUP(gen_id) {
  cur_th_gen_id = cth.id;
}

extern uint64_t gen_id();

uint64_t g_seq_id;
extern uint64_t gen_seq_id();
