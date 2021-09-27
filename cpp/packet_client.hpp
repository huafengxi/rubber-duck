void pktc_flush_cb_func_dummy(pktc_req_t* req) { unused(req); }

void pktc_resp_cb_cpp(const char* b, int64_t s, void* arg) {
  IRespHandler* handler = (IRespHandler*)arg;
  int io_err = 0;
  if (NULL == b || s <= 0) {
    handler->handle_resp(io_err, NULL, 0);
  } else {
    uint64_t header_sz = sizeof(msg_t) + sizeof(uint64_t);
    handler->handle_resp(io_err, b + header_sz, s - header_sz);
  }
}

class PacketClient
{
public:
  PacketClient(): pktc_(NULL) {}
  ~PacketClient() {}
  int init(int n_thread) {
    int err = 0;
    pktc_cfg_t cfg = { pktc_flush_cb_func_dummy };
    if (NULL == (pktc_ = pktc_create(n_thread, &cfg))) {
      error("packet client init fail");
      err = -ENOMEM;
    }
    info("packet client init: err=%d n_thread=%d", err, n_thread);
    return err;
  }
  void do_work(int idx) {
    pktc_thread_work(pktc_, idx);
  }
  int post(addr_t addr, const char* req, int64_t req_size, IRespHandler* resp_handler, int64_t timeout_us) {
    int err = 0;
    int io_idx = 0;
    pktc_cb_t* cb = create_cb(resp_handler, timeout_us);
    pktc_req_t* r = create_req(resp_handler, addr, req, req_size, cb);
    if (NULL != r) {
      err = pktc_post(pktc_, r, io_idx);
    }
    return err;
  }
private:
  static uint64_t generate_chid() { return gen_seq_id(); }
  pktc_cb_t* create_cb(IRespHandler* resp, int64_t timeout_us) {
    pktc_cb_t* cb = (typeof(cb))resp->alloc(sizeof(*cb));
    cb->expire_us = get_corse_us() + timeout_us;
    cb->id = generate_chid();
    cb->resp_cb = pktc_resp_cb_cpp;
    cb->arg = resp;
    return cb;
  }
  void build_msg(msg_t* m, uint64_t id, const char* b, int64_t sz) {
    *(uint64_t*)(m->b) = id;
    memcpy(m->b + sizeof(id), b, sz);
    m->s = sz + sizeof(*m) + sizeof(id);
  }
  pktc_req_t* create_req(IRespHandler* resp, addr_t addr, const char* req, int64_t req_size, rk_pktc_cb_t* cb) {
    pktc_req_t* r = (typeof(r))resp->alloc(sizeof(*r) + sizeof(msg_t) + sizeof(uint64_t) + req_size);
    msg_t* m = (msg_t*)(r + 1);
    build_msg(m, cb->id, req, req_size);
    r->msg.s = m->s;
    r->cb = cb;
    r->dest = addr;
    return r;
  }
private:
  pktc_g_t* pktc_;
};
