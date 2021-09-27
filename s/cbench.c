typedef struct test_key_t {
  link_t link;
  str_t str;
  uint64_t id;
} test_key_t;

link_t* build_hash_key(uint64_t id) {
  test_key_t* p = malloc(sizeof(test_key_t));
  p->str.s = sizeof(id);
  p->id = id;
  return (link_t*)p;
}

hash_t* hm;
EXPORT int __hash_prepare() {
  hm = hash_create(1<<26);
  return 0;
}

EXPORT void __hash_insert(uint64_t id) {
  hash_insert(hm, build_hash_key(id));
}

EXPORT void __hash_delete(uint64_t id) {
  test_key_t key;
  key.str.s = sizeof(id);
  key.id = id;
  link_t* k = hash_del(hm, &key.str);
  if (k) {
    free(k);
  }
}

PERF(hash);
link_t* build_ihash_key(uint64_t id) {
  link_t* p = malloc(sizeof(link_t) + sizeof(uint64_t));
  *(uint64_t*)(p + 1) = id;
  return p;
}

EXPORT int __ihash_prepare() {
  hm = hash_create(1<<26);
  return 0;
}

EXPORT void __ihash_insert(uint64_t id) {
  ihash_insert(hm, build_ihash_key(id));
}

EXPORT void __ihash_delete(uint64_t id) {
  link_t* k = ihash_del(hm, id);
  if (k) {
    free(k);
  }
}

PERF(ihash);

queue_t global_q;
EXPORT int __queue_prepare() {
  queue_init(&global_q);
  return 0;
}

EXPORT void __queue_insert(uint64_t id) {
  unused(id);
  link_t* n = malloc(sizeof(*n));
  n->next = NULL;
  queue_push(&global_q, n);
}

EXPORT void __queue_delete(uint64_t id) {
  unused(id);
  link_t* n = queue_pop(&global_q);
  if (n) {
    free(n);
  }
}
PERF(queue);

sc_queue_t global_sc_q;
EXPORT int __sc_queue_prepare() {
  sc_queue_init(&global_sc_q);
  return 0;
}

EXPORT void __sc_queue_insert(uint64_t id) {
  unused(id);
  link_t* n = malloc(sizeof(*n) + sizeof(uint64_t));
  n->next = NULL;
  *(uint64_t*)(n + 1) = id;
  sc_queue_push(&global_sc_q, n);
}

EXPORT void __sc_queue_delete(uint64_t id) {
  unused(id);
  link_t* n = NULL;
  while(NULL == (n = sc_queue_pop(&global_sc_q)))
    ;
  if (*(uint64_t*)(n + 1) != id) abort();
  free(n);
}
PERF(sc_queue);

fixed_queue_t global_fixed_q;
static char fixed_qbuf[1<<20];
EXPORT int __fixed_queue_prepare() {
  fixed_queue_init(&global_fixed_q, fixed_qbuf, sizeof(fixed_qbuf));
  return 0;
}

EXPORT void __fixed_queue_insert(uint64_t id) {
  while(0 != fixed_queue_push(&global_fixed_q, (void*)(id + 1)));
}

EXPORT void __fixed_queue_delete(uint64_t id) {
  unused(id);
  void* n = NULL;
  while(NULL == (n = fixed_queue_pop(&global_fixed_q)))
    ;
}
PERF(fixed_queue);

cond_queue_t global_cond_q;
static char cond_qbuf[1<<20];
EXPORT int __cond_queue_prepare() {
  cond_queue_init(&global_cond_q, cond_qbuf, sizeof(cond_qbuf));
  return 0;
}

EXPORT void __cond_queue_insert(uint64_t id) {
  static __thread int lock_result = 0;
  static int cond_queue_push_lock = 0;
  if (lock_result || (lock_result = !TAS(&cond_queue_push_lock, 1))) {
    while(0 != cond_queue_push(&global_cond_q, (void*)(id + 1)));
  } else {
    while(1)
      pause();
  }
}

EXPORT void __cond_queue_delete(uint64_t id) {
  unused(id);
  void* n = NULL;
  while(NULL == (n = cond_queue_pop(&global_cond_q)))
    ;
}
PERF(cond_queue);

rbuffer_t g_rb;
EXPORT int __rbuffer_prepare() {
  rb_init(&g_rb);
  return 0;
}

EXPORT int __rbuffer_insert(uint64_t id) {
  int sz = sizeof(msg_t) + id % 128;
  msg_t* msg = rb_alloc(&g_rb, 65536);
  if (NULL != msg) {
    msg->s = sz;
    memset(msg->b, 0, sz - sizeof(msg));
    rb_ready(&g_rb, (char*)msg, sz);
    return 0;
  } else {
    return EAGAIN;
  }
}

EXPORT int __rbuffer_delete(uint64_t id) {
  msg_t* msg = NULL;
  unused(id);
  msg = rb_read(&g_rb, sizeof(msg_t));
  if (NULL != msg) {
    if (NULL != rb_read(&g_rb, msg->s)) {
      rb_consumed(&g_rb, msg->s);
      return 0;
    }
  }
  return EAGAIN;
}

PERF(rbuffer) {
  uint64_t i = 0, j = 0;
  while(1) {
    i++;
    COUNTER_ADD(rbuffer, 1);
    if (__rbuffer_insert(i)) {
      while(1) {
        j++;
        if(__rbuffer_delete(j)) break;
      }
      if (i !=j ) {
        abort();
      }
    }
  }
}
