/* errors
1. 0: yield, file is writable, and there is remain data to send.
2. EAGAIN: wait wakeup, 3 cases:
   1. file is not writable, wait epoll to wakeup
   2. no remain data to send, wait poster to wakeup
   3. wait for memory or bandwidth...
3. Exception: should destroy sock.
*/
//int xxx_sk_do_flush(xxx_sk_t* s, int64_t* remain);

/* errors
1. 0: decode success
2. EAGAIN: wait wakeup, 2 cases:
   1. file is not readable to complete a msg.
   2. wait for memory or bandwidth...
3. Exception: should destroy sock.
 */
//int xxx_sk_do_decode(xxx_sk_t* s, xxx_msg_t** msg);
/* errors
1. 0: handle success
2. EAGAIN: wait wakeup, wait for memory or bandwidth.
3. Exception: should destroy sock.
 */
//int xxx_handle_msg(xxx_sk_t* s, xxx_msg_t* msg);

static int my_sk_flush(my_sk_t* s, int64_t time_limit) {
  int err = 0;
  int64_t remain = INT64_MAX;
  while(0 == err && remain > 0 && get_corse_us() < time_limit && 0 == (err = my_sk_do_flush(s, &remain)))
    ;
  return remain <= 0 && 0 == err? EAGAIN: err;
}

static int my_sk_consume(my_sk_t* s, int64_t time_limit) {
  int err = 0;
  my_msg_t* msg = NULL;
  while(0 == err && get_corse_us() < time_limit && 0 == (err = my_sk_do_decode(s, &msg))) {
    err = my_sk_handle_msg(s, msg);
  }
  return err;
}

static int my_sk_handle_event_ready(my_sk_t* s) {
  int64_t time_slice = 10000;
  int64_t cur_us = get_corse_us();
  int consume_ret = my_sk_consume(s, cur_us += time_slice);
  int flush_ret = my_sk_flush(s, cur_us += time_slice);
  return EAGAIN == consume_ret? flush_ret: consume_ret;
}

#if nio_test(CONNECT)
static int my_sk_check_connect(my_sk_t* s) {
  int err = 0;
  if (s->conn_ok) {
  } else if (!skt(s, OUT)) {
    err = EAGAIN;
  } else if (0 != check_connect_result(s->fd)) {
    err = EIO;
  } else {
    s->conn_ok = 1;
    info("sock connect OK: %p %s", s, T2S(sock_fd, s->fd));
  }
  return err;
}

static int my_sk_handle_event(my_sk_t* s) {
  return my_sk_check_connect(s)?: my_sk_handle_event_ready(s);
}
#else
static int my_sk_handle_event(my_sk_t* s) {
  return my_sk_handle_event_ready(s);
}
#endif
