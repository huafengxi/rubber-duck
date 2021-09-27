#include <linux/futex.h>

int futex(int *uaddr, int op, int val, const struct timespec *timeout, int *uaddr2, int val3) {
  return (int)syscall(SYS_futex, uaddr, op, val, timeout, uaddr2, val3);
}

int futex_wake(int *p, int val) {
  int err = 0;
  if (0 != futex((int *)p, FUTEX_WAKE_PRIVATE, val, NULL, NULL, 0)) {
    err = errno;
  }
  return err;
}

int futex_wait(int *p, int val, const struct timespec *timeout) {
  int err = 0;
  if (0 != futex((int *)p, FUTEX_WAIT_PRIVATE, val, timeout, NULL, 0)) {
    err = errno;
  }
  return err;
}
