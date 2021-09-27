typedef int (*sms_handle_func_t)(const msg_t* req, msg_t* resp);
typedef struct sms_g_t sms_g_t;
typedef struct sms_cfg_t {
  addr_t addr;
  sms_handle_func_t handle_func;
} sms_cfg_t;

extern sms_g_t* sms_start(int n_thread, sms_cfg_t* cfg);

#define __SMS_HANDLE_FUNC_DEF(name) EXPORT int __ ## name ## _handle_func(const msg_t* req, msg_t* resp)
#define SMS(name) EXPORT sms_t* __ ## name ## _g; CMD(name, "simple msg server"){ return sms_minit(#name); } __SMS_HANDLE_FUNC_DEF(name)
