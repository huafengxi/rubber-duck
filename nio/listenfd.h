#include <sys/socket.h>
typedef struct listenfd_t {
  SOCK_COMMON;
  eloop_t* ep;
  sf_t* sf;
} listenfd_t;

extern int listenfd_init(eloop_t* ep, listenfd_t* s, sf_t* sf, addr_t addr);
