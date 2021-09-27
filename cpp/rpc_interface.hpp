class IReqHandleCtx
{
public:
  IReqHandleCtx(void* req_ref, uint64_t chid, uint64_t pkt_id): req_ref_(req_ref), chid_(chid), pkt_id_(pkt_id) {}
  virtual ~IReqHandleCtx() {}
  virtual void* alloc(int64_t sz) = 0;
  virtual void destroy() = 0;
  uint64_t get_chid() { return chid_; }
  uint64_t get_pkt_id() { return pkt_id_; }
  void release_req_ref() {
    if (NULL != req_ref_) {
      ref_free(req_ref_);
      req_ref_ = NULL;
    }
  }
private:
  void* req_ref_;
  uint64_t chid_;
  uint64_t pkt_id_;
};

class IReqHandler
{
public:
  IReqHandler() {}
  virtual ~IReqHandler() {}
  virtual IReqHandleCtx* create_ctx(void* req_ref, uint64_t chid, uint64_t pkt_id) = 0;
  virtual int handle_req(IReqHandleCtx* ctx, const char* buf, int64_t sz) = 0;
};

class IRespHandler
{
public:
  IRespHandler() {}
  virtual ~IRespHandler() {}
  virtual void* alloc(int64_t sz) = 0;
  virtual int handle_resp(int io_err, const char* buf, int64_t sz) = 0;
};
