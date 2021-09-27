static msg_t* mock_msg_init(msg_t* m, uint64_t id, uint64_t s) {
  assert(s >= 8);
  m->s = s + sizeof(msg_t);
  memset(m->b, id, s);
  *(int64_t*)m->b = id;
  return m;
}

static msg_t* mock_msg_create(char* buf, uint64_t id) {
  return mock_msg_init((msg_t*)buf, id, (rand64(id) % 128) + 16);
}

msg_t* mock_msg_new(uint64_t header_size, uint64_t id, int mod) {
  const int min_payload_size = 16;
  uint64_t r = rand64(id);
  int64_t s = (r % 128) + min_payload_size;
  msg_t* m = (msg_t*)(header_size + (char*)mod_alloc(header_size + sizeof(msg_t) + s, mod));
  return mock_msg_init(m, id, s);
}

static void msg_check_fail() {
  while(1)
    ;
}

void mock_msg_check(mock_msg_check_t* chk, const msg_t* msg) {
  msg_t* m = mock_msg_create((char*)alloca(1024), chk->cur_id);
  if (memcmp(m, msg, m->s)) {
    msg_check_fail();
  }
  chk->cur_id++;
}

static int64_t mock_msg_check_buf_one(mock_msg_check_t* chk, const char* buf, int64_t len) {
  assert(len < 512);
  msg_t* m = mock_msg_create((char*)alloca(1024), chk->cur_id);
  int64_t remain = m->s - chk->cur_pos;
  if (memcmp((char*)m + chk->cur_pos, buf, min(remain, len))) {
    msg_check_fail();
  }
  if (remain <= len) {
    chk->cur_id++;
    chk->cur_pos = 0;
    return remain;
  } else {
    chk->cur_pos += len;
    return len;
  }
}

void mock_msg_check_buf(mock_msg_check_t* chk, const char* buf, int64_t len) {
  int64_t pos = 0;
  while(pos < len) {
    pos += mock_msg_check_buf_one(chk, buf + pos, len - pos);
  }
}

void mock_msg_check_iov(mock_msg_check_t* chk, struct iovec* iov, int cnt, int64_t bytes) {
  int i = 0;
  while(i < cnt && bytes > 0) {
    if (bytes > (int64_t)iov[i].iov_len) {
      mock_msg_check_buf(chk, (const char*)iov[i].iov_base, iov[i].iov_len);
      bytes -= iov[i].iov_len;
      i++;
    } else {
      mock_msg_check_buf(chk, (const char*)iov[i].iov_base, bytes);
      bytes = 0;
    }
  }
}

#if __release__ > 2
STAT_DEF(io_eagain, 1);
STAT_DEF(read_check, 1);
STAT_DEF(write_check, 1);
void sk_check_io(sock_debug_check_t* check, const char* buf, ssize_t bytes, uint32_t flag) {
  if (bytes <= 0) {
    COUNTER_ADD(io_eagain, 1);
  } else if (flag == EPOLLIN) {
    mock_msg_check_buf(&check->read_check, buf, bytes);
    COUNTER_ADD(read_check, 1);
  } else {
    mock_msg_check_buf(&check->write_check, buf, bytes);
    COUNTER_ADD(write_check, 1);
  }
}

void sk_check_iov(sock_debug_check_t* check, struct iovec* iov, int cnt, ssize_t bytes, uint32_t flag) {
  if (bytes <= 0) {
    COUNTER_ADD(io_eagain, 1);
  } else if (flag == EPOLLIN) {
    mock_msg_check_iov(&check->read_check, iov, cnt, bytes);
    COUNTER_ADD(read_check, 1);
  } else {
    mock_msg_check_iov(&check->write_check, iov, cnt, bytes);
    COUNTER_ADD(write_check, 1);
  }
}
#else
extern void sk_check_io(sock_debug_check_t* check, const char* buf, ssize_t bytes, uint32_t flag);
extern void sk_check_iov(sock_debug_check_t* check, struct iovec* iov, int cnt, ssize_t bytes, uint32_t flag);
#endif
