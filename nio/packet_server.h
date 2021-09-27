typedef struct pkts_sk_t pkts_sk_t;
typedef struct pkts_req_t pkts_req_t;
typedef int (*pkts_handle_func_t)(void* udata, void* req_handle, const char* b, int64_t s, uint64_t chid);
typedef void (*pkts_flush_cb_func_t)(pkts_req_t* req);

typedef struct pkts_g_t pkts_g_t;
typedef struct pkts_cfg_t {
  void* udata;
  addr_t addr;
  pkts_flush_cb_func_t flush_cb;
  pkts_handle_func_t handle_func;
} pkts_cfg_t;

typedef struct pkts_req_t {
  void* udata;
  uint64_t chid;
  link_t link;
  str_t msg;
} pkts_req_t;

extern pkts_g_t* pkts_create(int n_thread, pkts_cfg_t* cfg);
extern void pkts_thread_work(pkts_g_t* pkts, int idx);
extern pkts_g_t* pkts_start(int n_thread, pkts_cfg_t* cfg);
extern int pkts_post(pkts_g_t* pkts, pkts_req_t* req, int io_index);

#define __PKTS_HANDLE_FUNC_DEF(name) EXPORT int __ ## name ## _handle_func(void* udata, void* req_handle, const char* b, int64_t s, uint64_t chid)
#define PKTS(name) EXPORT pkts_g_t* __ ## name ## _g; CMD(name, "packet server"){ return pkts_minit(#name); } __PKTS_HANDLE_FUNC_DEF(name)
