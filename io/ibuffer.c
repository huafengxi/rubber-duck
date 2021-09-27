static int64_t MIN_IBUFFER_SIZE = (1<<16) - 1024;
static void* ib_alloc(int64_t sz) {
  return ref_alloc(sz, MOD_INBUF);
}

void* ib_ref(ibuffer_t* ib) {ib->cur_ref_++;
  return ib->b;
}

static void ib_retire(ibuffer_t* ib) {
  int64_t* ref = (int64_t*)ib->b - 1;
  if (0 == AAF(ref, ib->cur_ref_)) {
    mod_free(ref);
  }
}

static void ib_reset(ibuffer_t* ib) {
  ib->cur_ref_ = 0;
  ib->limit = ib->b = ib->s = ib->e = NULL;
}

void ib_init(ibuffer_t* ib) {
  ib_reset(ib);
}

static void ib_set(ibuffer_t* ib, char* b, int64_t limit, int64_t sz) {
  ib->b = b;
  ib->s = b;
  ib->e = b + sz;
  ib->limit = b + limit;
}

static int ib_create(ibuffer_t* ib, int64_t sz) {
  char* nb = (char*)ib_alloc(sz);
  if (nb) {
    ib_set(ib, nb, sz, 0);
    return 0;
  }
  return ENOMEM;
}

static int ib_replace(ibuffer_t* ib, int64_t sz) {
  int64_t remain = ib->e - ib->s;
  char* nb = (char*)ib_alloc(sz);
  if (nb) {
    memcpy(nb, ib->s, remain);
    ib_retire(ib);
    ib_set(ib, nb, sz, remain);
    return 0;
  }
  return ENOMEM;
}

static int ib_prepare_buffer(ibuffer_t* ib, int64_t sz) {
  int err = 0;
  if (NULL == ib->b) {
    err = ib_create(ib, max(sz, MIN_IBUFFER_SIZE));
  } else if (sz > ib->limit - ib->s) {
    err = ib_replace(ib, sz);
  }
  return err;
}

static char* ib_read(ibuffer_t* ib, int64_t sz) {
  if (ib->e >= ib->s + sz) {
    return ib->s;
  }
  return NULL;
}

void ib_consumed(ibuffer_t* ib, int64_t sz) {
  ib->s += sz;
  if (ib->limit <= ib->s) {
    ib_retire(ib);
    ib_reset(ib);
  }
}

int sk_read_with_ib(void** ret, sock_t* s, ibuffer_t* ib, int64_t sz) {
  int err = 0;
  int64_t rbytes = 0;
  ef(*ret = ib_read(ib, sz));
  ef(err = ib_prepare_buffer(ib, sz));
  ef(err = sk_read(s, ib->e, ib->limit - ib->e, &rbytes));
  ib->e += rbytes;
  if(NULL == (*ret = ib_read(ib, sz))) {
    err = EAGAIN;
  }
  ef(err);
  el();
  return err;
}
