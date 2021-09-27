#include <pthread.h>
typedef int (*thread_func_t)(void*);
typedef struct thread_t {
  pthread_t pd;
  int32_t id;
  thread_func_t func;
  char udata[512];
} thread_t;

typedef struct cur_thread_t {
  int32_t id;
  int32_t alloc_end;
  char alloc_buf[0];
} cur_thread_t;

extern thread_t g_thread_array[MAX_THREAD_NUM];
extern int32_t g_thread_count;
extern __thread cur_thread_t cth;

extern thread_t* prepare_therad(thread_func_t func, void* arg, int sz);
extern int __start_thread(thread_func_t func, void* arg, int sz);
extern int __start_thread_group(int n_thread, thread_func_t func, void* arg);
extern void __wait_threads();
inline uint64_t thread_base() { return pthread_self(); }
extern void* thread_calloc(int32_t size);
#define THREAD_ALLOC(o) (o = thread_calloc(sizeof(*o)))

#define THREAD(func) MODULE(threads, func); int func ## _thread_func(void* arg)
