__thread char* __rb_read_tbuffer;
__thread char* __rb_write_tbuffer;

static int64_t __align(int64_t x, int64_t size) { return x & ~(size - 1); }
static int64_t __padding(int64_t x, int64_t size) { return (-x) & (size - 1); }
static int64_t __mask(int64_t x, int64_t size) { return x & (size - 1); } 
// end > 0
static bool __rb_is_wrap(int64_t start, int64_t end) { return __align(end - 1, RBUFFER_SIZE) > start; }
static int64_t __rb_pos(int64_t x) { return __mask(x, RBUFFER_SIZE); }
// must be wrap
static char* __rb_copy_to(const char* rb, int64_t start, int64_t end, char* dest) {
  int64_t s0 = __padding(start, RBUFFER_SIZE);
  memcpy(dest, rb + __mask(start, RBUFFER_SIZE), s0);
  memcpy(dest + s0, rb, __mask(end, RBUFFER_SIZE));
  return dest;
}

// must be wrap
static char* __rb_copy_from(char* rb, int64_t start, int64_t end, char* src) {
  int64_t s0 = __padding(start, RBUFFER_SIZE);
  memcpy(rb + __mask(start, RBUFFER_SIZE), src, s0);
  memcpy(rb, src + s0, __mask(end, RBUFFER_SIZE));
  return rb;
}

static char* rb_get_read_tbuffer() {
  return __rb_read_tbuffer?: (__rb_read_tbuffer = (char*)malloc(RBUFFER_SIZE));
}

static char* rb_get_write_tbuffer() {
  return __rb_write_tbuffer?: (__rb_write_tbuffer = (char*)malloc(RBUFFER_SIZE));
}

void rb_init(rbuffer_t* rb) {
  rb->push = 0;
  rb->pop = 0;
}

int64_t rb_size(rbuffer_t* rb) {
  return rb->push - rb->pop;
}

void* rb_alloc(rbuffer_t* rb, int64_t size) {
  int64_t pop = rb->pop;
  int64_t push = rb->push;
  assert(size > 0);
  if (push + size <= pop + RBUFFER_SIZE) {
    return __rb_is_wrap(push, push + size)? rb_get_write_tbuffer(): rb->buf + __rb_pos(push);
  }
  return NULL;
}

void rb_ready(rbuffer_t* rb, char* buf, int64_t size) {
  if (size <= 0) return;
  int64_t push = rb->push;
  assert(size > 0);
  if (rb->buf + __rb_pos(push) != buf) {
    if (__rb_is_wrap(push, push + size)) __rb_copy_from(rb->buf, push, push + size, buf);
    else memcpy(rb->buf + __rb_pos(push), buf, size);
  }
  rb->push = push + size;
}

void* rb_read(rbuffer_t* rb, int64_t size) {
  int64_t push = rb->push;
  int64_t pop = rb->pop;
  assert(size > 0);
  if (pop + size <= push) {
    return __rb_is_wrap(pop, pop + size)? __rb_copy_to(rb->buf, pop, pop + size, rb_get_read_tbuffer()) : rb->buf + __rb_pos(pop);
  }
  return NULL;
}

char* rb_read_for_io(rbuffer_t* rb, int64_t* size) {
  int64_t push = rb->push;
  int64_t pop = rb->pop;
  if (pop >= push) return NULL;
  int64_t limit = __align(push, RBUFFER_SIZE);
  if (limit > pop) {
    *size = limit - pop;
  } else {
    *size = push - pop;
  }
  return rb->buf + __rb_pos(pop);
}

void rb_consumed(rbuffer_t* rb, int64_t size) { rb->pop += size; }

static int rb_fill_iov(struct iovec* iov, char* buf, int64_t start, int64_t end) {
  int iov_cnt = 0;
  int64_t limit0 = __align(end, RBUFFER_SIZE);
  if (limit0 > start) {
    iov[iov_cnt++] = (struct iovec) {buf + __rb_pos(start), (uint64_t)(limit0 - start)};
    if (end > limit0) {
      iov[iov_cnt++] = (struct iovec) {buf + __rb_pos(limit0), (uint64_t)(end - limit0)};
    }
  } else {
    if (end > start) {
      iov[iov_cnt++] = (struct iovec) {buf + __rb_pos(start), (uint64_t)(end - start)};
    }
  }
  return iov_cnt;
}

int rb_iov_alloc(rbuffer_t* rb, struct iovec* iov) {
  return rb_fill_iov(iov, rb->buf, rb->push, rb->pop + RBUFFER_SIZE);
}

void rb_iov_ready(rbuffer_t* rb, int64_t size) {
  rb->push += size;
}

int rb_iov_read(rbuffer_t* rb, struct iovec* iov) {
  return rb_fill_iov(iov, rb->buf, rb->pop, rb->push);
}
