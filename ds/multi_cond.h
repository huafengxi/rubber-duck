#define N_COND 256
typedef struct multi_cond_t {
  int seq[N_COND];
  int64_t wait;
  int64_t wakeup;
} multi_cond_t;

void multi_cond_init(multi_cond_t* mc);

inline int32_t* multi_cond_alloc(multi_cond_t* mc) {
  return mc->seq + (FAA(&mc->wait, 1) % N_COND);
}

inline void multi_cond_signal(multi_cond_t* mc) {
  int64_t idx = FAA(&mc->wakeup, 1);
  int32_t* seq = mc->seq + (idx % N_COND);
  FAA(seq, 1);
  futex_wake(seq, 1);
}
