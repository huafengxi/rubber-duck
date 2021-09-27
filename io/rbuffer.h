#include <sys/uio.h>
enum { RBUFFER_SIZE = 1<<22 };
typedef struct rbuffer_t
{
  int64_t push;
  int64_t pop;
  char buf[RBUFFER_SIZE];
} rbuffer_t;
extern __thread char* __rb_read_tbuffer;
extern __thread char* __rb_write_tbuffer;

extern void rb_init(rbuffer_t* rb);
extern int64_t rb_size(rbuffer_t* rb);
extern void* rb_alloc(rbuffer_t* rb, int64_t size);
extern void rb_ready(rbuffer_t* rb, char* buf, int64_t size);
extern void* rb_read(rbuffer_t* rb, int64_t size);
extern char* rb_read_for_io(rbuffer_t* rb, int64_t* size);
extern void rb_consumed(rbuffer_t* rb, int64_t size);

extern int rb_iov_alloc(rbuffer_t* rb, struct iovec* iov);
extern void rb_iov_ready(rbuffer_t* rb, int64_t size);
extern int rb_iov_read(rbuffer_t* rb, struct iovec* iov);
