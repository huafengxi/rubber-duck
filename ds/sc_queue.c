void sc_queue_init(sc_queue_t* q) {
  q->head.next = NULL;
  q->tail = &q->head;
}

extern link_t* sc_queue_top(sc_queue_t* q);
extern bool sc_queue_push(sc_queue_t* q, link_t* n);
extern link_t* sc_queue_pop(sc_queue_t* q);
