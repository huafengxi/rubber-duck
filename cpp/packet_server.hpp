void pkts_flush_cb_cpp(pkts_req_t* req) {
  IReqHandleCtx* ctx = (typeof(ctx))req->udata;
  ctx->destroy();
}

int pkts_handle_func_cpp(void* udata, void* req_ref, const char* b, int64_t s, uint64_t chid) {
  int err = 0;
  IReqHandler* h = (typeof(h))udata;
  uint64_t pkt_id = msg_get_id(b);
  uint64_t header_sz = sizeof(msg_t) + sizeof(pkt_id);
  IReqHandleCtx* ctx = h->create_ctx(req_ref, chid, pkt_id);
  if (NULL == ctx) {
    err = -ENOMEM;
    ref_free(req_ref);
  } else if (0 != (err = h->handle_req(ctx, b + header_sz, s - header_sz))) {
    ctx->destroy();
  }
  return err;
}

class PacketServer
{
public:
  PacketServer(): pkts_(NULL) {}
  ~PacketServer() {}
  int init(int n_thread, addr_t addr, IReqHandler* handler) {
    int err = 0;
    pkts_cfg_t cfg = { handler, addr, pkts_flush_cb_cpp, pkts_handle_func_cpp };
    if (NULL == (pkts_ = pkts_create(n_thread, &cfg))) {
      error("pkts create fail");
      err = -ENOMEM;
    }
    info("pkts init: err=%d n_thread=%d addr=%s", err, n_thread, T2S(addr, addr));
    return err;
  }
  void do_work(int idx) {
    pkts_thread_work(pkts_, idx);
  }
  int resp(IReqHandleCtx* ctx, const char* req, int64_t req_size) {
    int err = 0;
    int io_idx = 0;
    pkts_req_t* r = create_req(ctx, req, req_size);
    if (NULL != r) {
      err = pkts_post(pkts_, r, io_idx);
    } else {
      err = -ENOMEM;
    }
    return err;
  }
private:
  void build_msg(msg_t* m, uint64_t id, const char* b, int64_t sz) {
    *(uint64_t*)(m->b) = id;
    memcpy(m->b + sizeof(id), b, sz);
    m->s = sz + sizeof(*m) + sizeof(id);
  }
  pkts_req_t* create_req(IReqHandleCtx* ctx, const char* b, int64_t s) {
    msg_t* m = NULL;
    pkts_req_t* r = (typeof(r))ctx->alloc(sizeof(*r) + sizeof(*m) + sizeof(r->chid) + s);
    if (NULL != r) {
      m = (msg_t*)(r + 1);
      r->udata = ctx;
      r->chid = ctx->get_chid();
      build_msg(m, ctx->get_pkt_id(), b, s);
      r->msg.s = m->s;
    }
    return r;
  }
private:
  pkts_g_t* pkts_;
};
