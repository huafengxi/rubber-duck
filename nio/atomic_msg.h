typedef struct atomic_msg_t {
  int64_t seq;
  int64_t size;
  char buf[4096];
} atomic_msg_t;

extern void atomic_msg_init(atomic_msg_t* m);
extern int64_t atomic_msg_read(atomic_msg_t* m, char* buf, int64_t* seq);
extern void atomic_msg_write(atomic_msg_t* m, const char* buf, int64_t size);
