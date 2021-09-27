typedef struct write_queue_t {
  queue_t queue;
  int64_t pos;
} write_queue_t;

extern void wq_init(write_queue_t* wq);
inline void wq_push(write_queue_t* wq, link_t* l) {
  queue_push(&wq->queue, l);
}
extern int wq_flush(sock_t* s, write_queue_t* wq, link_t** old_head);
