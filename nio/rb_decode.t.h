static __thread my_msg_t my_cur_resp;
static int my_sk_do_decode(my_sk_t* s, my_msg_t** msg) {
  int err = 0;
  my_t* io = structof(s->fty, my_t, sf);
  void* b = NULL;
  int64_t sz = io->min_msg_size;
  int64_t req_sz = sz;
  while(0 == (err = sk_read_with_rb(&b, (sock_t*)s, &s->ib, sz))
        && (req_sz = io->decode(b, sz)) > sz) {
    sz = req_sz;
  }
  if (req_sz <= 0) {
    err = EINVAL;
  }
  if (0 == err) {
    my_cur_resp = (my_msg_t) { .sz = req_sz, .payload = b };
    *msg = &my_cur_resp;
  }
  return err;
}

