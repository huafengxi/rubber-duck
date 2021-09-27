extern int futex(int *uaddr, int op, int val, const struct timespec *timeout,
                    int *uaddr2, int val3);
extern int futex_wake(int *p, int val);
extern int futex_wait(int *p, int val, const struct timespec *timeout);
