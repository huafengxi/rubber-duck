#include "../cpp/rk-cpp.h"
#include "../cpp/rpc_mem_pool.hpp"

extern "C" {
  STAT_DEF(handle, 1);
  STAT_DEF(resp, 1);
  STAT_DEF(send, 1);
  STAT_DEF(server_flush, 1);
};

addr_t g_addr;
CONSTRUCTOR void cfg_addr() {
  addr_init(&g_addr, "127.0.0.1", cfgi("port", "8042"));
}

class RespHandler: public IRespHandler {
public:
  RespHandler(RpcMemPool& pool): pool_(pool) {}
  virtual ~RespHandler() {}
  static RespHandler* create(RpcMemPool* pool) {
    RespHandler* h = (typeof(h))pool->alloc(sizeof(RespHandler));
    return new(h)RespHandler(*pool);
  }
  virtual void* alloc(int64_t sz) { return pool_.alloc(sz); }
  virtual int handle_resp(int io_err, const char* buf, int64_t sz)  {
    unused(io_err, buf, sz);
    COUNTER_ADD(resp, 1);
    //pool_.destroy();
    return 0;
  }
private:
  RpcMemPool& pool_;
};

class ReqHandleCtx: public IReqHandleCtx {
public:
  ReqHandleCtx(RpcMemPool& pool, void* req_ref, uint64_t chid, uint64_t pkt_id): IReqHandleCtx(req_ref, chid, pkt_id), pool_(pool) {}
  virtual ~ReqHandleCtx() {}
  static ReqHandleCtx* create(RpcMemPool* pool, void* req_ref, uint64_t resp_id, uint64_t pkt_id) {
    ReqHandleCtx* ctx = (typeof(ctx))pool->alloc(sizeof(*ctx));
    return new(ctx)ReqHandleCtx(*pool, req_ref, resp_id, pkt_id);
  }
  virtual void* alloc(int64_t sz) { return pool_.alloc(sz); }
  virtual void destroy() {
    COUNTER_ADD(server_flush, 1);
    release_req_ref();
    pool_.destroy();
  }
private:
  RpcMemPool& pool_;
};

class ReqHandler: public IReqHandler {
public:
  ReqHandler(PacketServer& server): server_(server) {}
  virtual ~ReqHandler() {}
  virtual IReqHandleCtx* create_ctx(void* req_ref, uint64_t chid, uint64_t pkt_id) {
    RpcMemPool* pool = RpcMemPool::create(0);
    return ReqHandleCtx::create(pool, req_ref, chid, pkt_id);
  }
  virtual int handle_req(IReqHandleCtx* ctx, const char* buf, int64_t sz)  {
    COUNTER_ADD(handle, 1);
    return server_.resp(ctx, buf, sz);
  }
private:
  PacketServer& server_;
};

PacketServer pkt_server;
PacketClient pkt_client;
ReqHandler req_handler(pkt_server);

void do_send() {
  char msg[48] = "hello";
  RpcMemPool* pool = RpcMemPool::create(0);
  RespHandler* resp_handler = RespHandler::create(pool);
  COUNTER_ADD(send, 1);
  pkt_client.post(g_addr, msg, sizeof(msg), resp_handler, 10 * 1000000);
}

int thread_func(void* arg) {
  int64_t i = *(int64_t*)arg;
  if (i == 0) {
    check(0 == pkt_server.init(1, g_addr, &req_handler), "server init fail");
    pkt_server.do_work(0);
  } else if (i == 1) {
    check(0 == pkt_client.init(1), "client init fail");
    pkt_client.do_work(0);
  } else if (i == 2) {
    usleep(100 * 1000);
    while(1) {
      do_send();
      //usleep(100 * 1000);
    }
  } else{
    while(1) {
      COUNTER_ADD(handle, 1);
    }
  }
  return 0;
}

void start_thread(int64_t i) {
  __start_thread(thread_func, &i, sizeof(i));
}

extern "C" {
  CMD(start, "start multiple cmd") {
    for(int i = 1; i < __argc; i++) {
      __do_cmd(__argv[i]);
    }
    return 0;
  }

  CMD(stat, "start stat reporter") {
    start_stat_report();
    return 0;
  }

  CMD(spin, "test counter") {
    start_thread(3);
    return 0;
  }

  CMD(perf, "start perf") {
    start_thread(1);
    start_thread(2);
    return 0;
  }

  CMD(pkts, "start pkts") {
    start_thread(0);
    return 0;
  }
};

int main(int argc, const char** argv) {
  int err = __handle_cmd(argc, argv);
  __wait_threads();
  return err;
}
