typedef int64_t (*strms_read_func_t)(char* buf, int64_t size, int64_t pos);

typedef struct strms_sk_t {
  SOCK_COMMON;
  dlink_t dlink;
  strms_read_func_t read;
  int64_t cursor;
  rbuffer_t rb;
} strms_sk_t;

typedef struct strms_sf_t {
  SOCK_FACTORY_COMMON;
  dlink_t sl;
  strms_read_func_t read;
} strms_sf_t;

typedef struct strms_t {
  eloop_t ep;
  evfd_t evfd;
  listenfd_t listenfd;
  strms_sf_t sf;
} strms_t;

extern int strms_init(strms_t* svr, addr_t addr, strms_read_func_t read);
extern void strms_signal(strms_t* svr);

#define __STRMS_SIGNAL_FUNC(name) void name ## _signal() { return strms_signal(&__ ## name ## _strms_svr); }
#define __STRMS_READ_FUNC_DEF(name) EXPORT int64_t __ ## name ## _read_func(char* buf, int64_t size, int64_t pos)
#define STRMS(name) EXPORT strms_t __ ## name ## _strms_svr; __STRMS_SIGNAL_FUNC(name); CMD(name, "stream server") { return strms_svr_minit(#name); } __STRMS_READ_FUNC_DEF(name)
