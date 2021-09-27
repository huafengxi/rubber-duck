#include <sys/uio.h>
typedef struct mock_msg_check_t {
  int64_t cur_id;
  int64_t cur_pos;
} mock_msg_check_t;

extern msg_t* mock_msg_new(uint64_t header_size, uint64_t id, int mod);
extern void mock_msg_check(mock_msg_check_t* chk, const msg_t* msg);
extern void mock_msg_check_buf(mock_msg_check_t* chk, const char* buf, int64_t len);
extern void mock_msg_check_iov(mock_msg_check_t* chk, struct iovec* iov, int cnt, int64_t bytes);

#if __release__ > 2
typedef struct sock_debug_check_t {
  mock_msg_check_t read_check;
  mock_msg_check_t write_check;
} sock_debug_check_t;
extern void sk_check_io(sock_debug_check_t* check, const char* buf, ssize_t bytes, uint32_t flag);
extern void sk_check_iov(sock_debug_check_t* check, struct iovec* iov, int cnt, ssize_t bytes, uint32_t flag);
#else
typedef struct sock_debug_check_t {
} sock_debug_check_t;
inline void sk_check_io(sock_debug_check_t* check, const char* buf, ssize_t bytes, uint32_t flag) {
  unused(check, buf, bytes, flag);
}
inline void sk_check_iov(sock_debug_check_t* check, struct iovec* iov, int cnt, ssize_t bytes, uint32_t flag) {
  unused(check, iov, cnt, bytes, flag);
}
#endif
