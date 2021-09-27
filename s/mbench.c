CMD(version, "show version") {
  printf("version: 1.0\n");
  return 0;
}

PERF(nop) {}

int64_t gx = 0;
PERF(faa) {
  FAA(&gx, 1);
}

PERF(cas) {
  int64_t v = LOAD(&gx);
  int64_t tmp = 0;
  while(v != (tmp = VCAS(&gx, v, v+1))) {
    v = tmp;
  }
}

PERF(get_us) {
  get_us();
}

PERF(get_cpu) {
  sched_getcpu();
}

static char src[100<<20];
static char dest[100<<20];
PERF(memcpy1M) {
  memcpy(dest, src, 1<<20);
}

PERF(memcpy100M) {
  memcpy(dest, src, sizeof(src));
}

PERF(memcpy100M_fast) {
  memcpy(dest, src, sizeof(src));
}


void prefault(char* buf, int64_t size) {
  info("prefault");
  for(char* p = buf; p < buf + size; p += 1<<12) {
    *p = 0;
  }
}
TIMEIT(pagefault1G) {
  int64_t size = 1LL<<30;
  char* buf = malloc(size);
  prefault(buf, size);
}

TIMEIT(free1G) {
  int64_t size = 1LL<<30;
  char* buf = malloc(size);
  prefault(buf, size);
  free(buf);
}

pthread_mutex_t mutex = PTHREAD_MUTEX_INITIALIZER;
PERF(mutex) {
  pthread_mutex_lock(&mutex);
  pthread_mutex_unlock(&mutex);
}

int32_t lock_var;
PERF(lock) {
  while(!TAS(&lock_var, 1)) {
    SPIN_PAUSE();
  }
  STORE(&lock_var, 0);
}
PERF(futex) {
  struct timespec ts = {0, 10000000};
  while(LOAD(&lock_var) == 1 || TAS(&lock_var, 1)) {
    futex_wait(&lock_var, 1, &ts);
  }
  STORE(&lock_var, 0);
  futex_wake(&lock_var, 1);
}

PERF(cpuload) {
  for(int i = 0; i < (1<<20); i++) {
    BARRIER();
  }
}

#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
int g_fd;
PAGE_ALIGNED char iob[PAGE_SIZE];
EXPORT int __pread_prepare() {
  g_fd = open("./io.test", O_CREAT|O_RDWR|O_DIRECT);
  if (g_fd < 0) return errno;
  if (pwrite(g_fd, iob, PAGE_SIZE, 0) < 0) return errno;
  return 0;
}

PERF(pread) {
  pread(g_fd, iob, PAGE_SIZE, 0);
}
