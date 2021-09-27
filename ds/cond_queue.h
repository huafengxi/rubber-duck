typedef struct cond_queue_t {
  fixed_queue_t queue;
  multi_cond_t cond;
} cond_queue_t;

void cond_queue_init(cond_queue_t* q, void* buf, int64_t bytes);

inline int cond_queue_push(cond_queue_t* q, void* p) {
  int err = fixed_queue_push(&q->queue, p);
  if (0 == err) {
    multi_cond_signal(&q->cond);
  }
  return err;
}

inline void* cond_queue_pop(cond_queue_t* q) {
  int32_t* w = multi_cond_alloc(&q->cond);
  int32_t cmp = LOAD(w);
  void* p = fixed_queue_pop(&q->queue);
  if (NULL == p) {
    futex_wait(w, cmp, NULL);
  }
  return p;
}

