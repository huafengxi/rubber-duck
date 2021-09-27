#include <sys/time.h>
int64_t get_us() {
  struct timeval tv;
  gettimeofday(&tv, NULL);
  return tv.tv_sec * 1000000 + tv.tv_usec;
}

extern int64_t get_corse_us();
