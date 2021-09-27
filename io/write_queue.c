extern void wq_push(write_queue_t* wq, link_t* l);
static str_t* sfl(link_t* l) { return (str_t*)(l+1); }
static int iov_from_blist(struct iovec* iov, int64_t limit, link_t* h) {
  int cnt = 0;
  for(; cnt < limit && h; h = h->next, cnt++) {
    iov_set_from_str(iov + cnt, sfl(h));
  }
  return cnt;
}

static int sk_flush_blist(sock_t* s, link_t* h, int64_t last_pos, int64_t* wbytes) {
  int err = 0;
  struct iovec iov[64];
  int cnt = iov_from_blist(iov, arrlen(iov), h);
  if (cnt > 0) {
    iov_consume_one(iov, last_pos);
    err = sk_writev(s, iov, cnt, wbytes);
  }
  return err;
}


static link_t* wq_consume(write_queue_t* wq, int64_t bytes) {
  int64_t s = 0;
  link_t* top = queue_top(&wq->queue);
  link_t* h = top;
  if((s = sfl(h)->s - wq->pos) <= bytes) {
    bytes -= s;
    h = h->next;
    while(bytes > 0 && (s = sfl(h)->s) <= bytes) {
      bytes -= s;
      h = h->next;
    }
  }
  wq->pos = bytes;
  queue_set(&wq->queue, h);
  return top;
}

void wq_init(write_queue_t* wq) {
  queue_init(&wq->queue);
  wq->pos = 0;
}

int wq_flush(sock_t* s, write_queue_t* wq, link_t** old_head) {
  int err = 0;
  link_t* h = queue_top(&wq->queue);
  if (NULL == h) {
    return err;;
  }
  int64_t wbytes = 0;
  err = sk_flush_blist((sock_t*)s, h, wq->pos, &wbytes);
  if (0 == err) {
    *old_head = wq_consume(wq, wbytes);
  }
  return err;
}
