void atomic_msg_init(atomic_msg_t* m) {
  m->seq = 0;
  m->size = 0;
}

int64_t atomic_msg_read(atomic_msg_t* m, char* buf, int64_t* seq) {
  int64_t size = 0;
  while(true) {
    int64_t s = LOAD(&m->seq);
    if (s & 1) continue;
    size = LOAD(&m->size);
    memcpy(buf, m->buf, size);
    if (LOAD(&m->seq) == s) {
      *seq = s;
      break;
    }
  }
  return size;
}

void atomic_msg_write(atomic_msg_t* m, const char* buf, int64_t size) {
  int64_t s = 0;
  do {
    s = LOAD(&m->seq);
  } while((s & 1) || !BCAS(&m->seq, s, s+1));
  memcpy(m->buf, buf, size);
  STORE(&m->size, size);
  STORE(&m->seq, s+2);
}
