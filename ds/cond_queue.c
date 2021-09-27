void cond_queue_init(cond_queue_t* q, void* buf, int64_t bytes)
{
  fixed_queue_init(&q->queue, buf, bytes);
  multi_cond_init(&q->cond);
}
extern int cond_queue_push(cond_queue_t* q, void* p);
extern void* cond_queue_pop(cond_queue_t* q);
