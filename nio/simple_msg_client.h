typedef msg_t smc_msg_t;
typedef struct smc_req_t
{
  addr_t dest;
  link_t link;
  str_t msg;
} smc_req_t;
typedef int (*smc_handle_func_t)(const smc_msg_t* resp);
typedef struct smc_g_t smc_g_t;
typedef struct smc_cfg_t {
  smc_handle_func_t handle_func;
} smc_cfg_t;


extern smc_g_t* smc_start(int n_thread, smc_cfg_t* arg);
extern int smc_post(smc_g_t* cl, smc_req_t* req, int io_index);

#define __SMC_HANDLE_FUNC_DEF(name) EXPORT int __ ## name ## _handle_func(const smc_msg_t* resp)
#define SMC(name) EXPORT smc_g_t* __ ## name ## _g; CMD(name, "packet client"){ return smc_minit(#name); } __SMC_HANDLE_FUNC_DEF(name)
