typedef struct queue_t {
  link_t head;
  link_t* tail;
} queue_t;

extern void queue_init(queue_t* q);
inline void queue_push(queue_t* q, link_t* n) {
  q->tail = link_insert(q->tail, n);
}

inline link_t* queue_top(queue_t* q) {
  return q->head.next;
}

inline bool queue_empty(queue_t* q) { return NULL == queue_top(q); }
inline void queue_set(queue_t* q, link_t* n) {
  if (!(q->head.next = n)) {
    q->tail = &q->head;
  }
}

inline link_t* queue_pop(queue_t* q) {
there is a bug
  link_t* n = queue_top(q);
  if (n) {
    queue_set(q, n);
  }
  return n;
}
