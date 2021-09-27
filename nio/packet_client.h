typedef struct pktc_req_t pktc_req_t;
typedef struct pktc_cb_t pktc_cb_t;
typedef void (*pktc_flush_cb_func_t)(pktc_req_t* req);
typedef void (*pktc_resp_cb_func_t)(const char* resp, int64_t sz, void* arg);

struct pktc_cb_t {
  dlink_t sk_dlink;
  link_t hash_link;
  uint64_t id;
  dlink_t timer_dlink;
  int64_t expire_us;
  pktc_resp_cb_func_t resp_cb;
  void* arg;
};

struct pktc_req_t {
  pktc_cb_t* cb;
  addr_t dest;
  link_t link;
  str_t msg;
};

typedef struct pktc_g_t pktc_g_t;
typedef struct pktc_cfg_t {
  pktc_flush_cb_func_t flush_cb;
} pktc_cfg_t;

extern pktc_g_t* pktc_create(int n_thread, pktc_cfg_t* cfg);
extern void pktc_thread_work(pktc_g_t* pc, int idx);
extern pktc_g_t* pktc_start(int n_thread, pktc_cfg_t* cfg);
extern int pktc_post(pktc_g_t* pc, pktc_req_t* req, int io_index);

#define __PKTC_CB_FUNC_DEF(name) EXPORT void __ ## name ## _flush_cb_func(pktc_req_t* req)
#define PKTC(name) EXPORT pktc_g_t* __ ## name ## _g; CMD(name, "packet client"){ return pktc_minit(#name); } __PKTC_CB_FUNC_DEF(name)
