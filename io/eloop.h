typedef struct eloop_t {
  int fd;
  dlink_t ready_link;
} eloop_t;

extern int eloop_init(eloop_t* ep);
extern int eloop_thread_run(eloop_t** ep);
extern int eloop_run(eloop_t* ep);
extern int eloop_regist(eloop_t* ep, sock_t* s, uint32_t eflag);
extern void eloop_fire(eloop_t* ep, sock_t* s);

#define __ELOOP_CMD(name) CMD(name, "eloop " #name) { __start_module(#name); return 0; }
#define __ELOOP_MODULE(name) EXPORT eloop_t __ ## name ## _eloop; MODULE(eloop, name)
#define __ELOOP_INIT_FUNC(name) EXPORT int __ ## name ## _eloop_init(eloop_t* ep)
#define EVLOOP(name) __ELOOP_CMD(name); __ELOOP_MODULE(name); __ELOOP_INIT_FUNC(name)
