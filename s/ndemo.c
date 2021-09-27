CMD(ADOC, "s/ndemo start stat sms_io smc_perf") { return 0; }
NTFS(clock);
EXPORT int __clock_perf_prepare() {
  return __do_cmd("clock");
}

PERF(clock_perf) {
  char msg[128];
  strf(msg, sizeof(msg), "%ld\n", get_us());
  clock_notify(msg, strlen(msg));
  usleep(1000 * 1000);
}

int g_fd = -1;

STRMS(seq) {
  int rbytes = 0;
  while((rbytes = pread(g_fd, buf, size, pos)) < 0 && EINTR == errno)
    ;
  return rbytes;
}

EXPORT int __seq_perf_prepare() {
  const char* path = "/tmp/seq.txt";
  g_fd = open(path, O_CREAT|O_RDWR|O_TRUNC, S_IRUSR|S_IWUSR|S_IRGRP|S_IROTH);
  __do_cmd("seq");
  return 0;
}

PERF(seq_perf) {
  char buf[1024];
  strf(buf, sizeof(buf), "%ld\n", get_us());
  write(g_fd, buf, strlen(buf));
  seq_signal();
  usleep(1000 * 1000);
}

mock_msg_check_t server_chk;
STAT_DEF(handle, 1);
SMS(sms_io) {
  COUNTER_ADD(handle, 1);
  //mock_msg_check(&server_chk, req);
  memcpy(resp, req, req->s);
  return req->s;
}

EXPORT void __pkts_io_flush_cb_func(pkts_req_t* req) {
  mod_free(req);
}

PKTS(pkts_io) {
  unused(udata);
  COUNTER_ADD(handle, 1);
  pkts_req_t* req = mod_alloc(s + sizeof(pkts_req_t), MOD_PKTS_RESP);
  req->chid = chid;
  req->msg.s = s;
  memcpy(&req->msg.b, b, s);
  ref_free(req_handle);
  pkts_post(__pkts_io_g, req, 0);
  return 0;
}

addr_t g_addr;
CONSTRUCTOR void cfg_addr() {
  addr_init(&g_addr, "127.0.0.1", cfgi("sms_io", "8042"));
}

__thread uint64_t g_post_id = 0;
smc_req_t* build_smc_req() {
  msg_t* m = mock_msg_new(sizeof(smc_req_t), g_post_id++, MOD_PKTC_REQ);
  smc_req_t* r = (smc_req_t*)m - 1;
  r->msg.s = m->s;
  r->dest = g_addr;
  return r;
}

PERF(s2rpc_perf) {
  const int64_t resp_limit = 1<<16;
  str_t* resp = alloca(resp_limit);
  resp->s = resp_limit - sizeof(*resp);
  msg_t* m = mock_msg_new(sizeof(str_t), g_post_id++, MOD_PKTC_REQ);
  str_t* req = (str_t*)m - 1;
  req->s = m->s;
  if (!s2rpc(g_addr, req, resp)) {
    error("s2rpc fail:");
  }
  free(req);
  debug_pause(1000 * 1000);
}

STAT_DEF(resp, 1);
SMC(smc_io) {
  unused(resp);
  COUNTER_ADD(resp, 1);
  return 0;
}

EXPORT int __smc_perf_prepare() {
  return __do_cmd("smc_io");
}

PERF(smc_perf) {
  smc_post(__smc_io_g, build_smc_req(), 0);
  debug_pause(1000 * 1000);
}

PKTC(pktc_io) {
  mod_free(req);
}

void pktc_cb_func(const char* b, int64_t s, void* arg) {
  unused(b, s, arg);
  mod_free(arg);
  COUNTER_ADD(resp, 1);
}

pktc_cb_t* build_pktc_cb(uint64_t id) {
  pktc_cb_t* cb = mod_alloc(sizeof(*cb), MOD_PKTC_CB);
  cb->expire_us = get_corse_us() + 1000000;
  cb->id = id;
  cb->resp_cb = pktc_cb_func;
  cb->arg = cb;
  return cb;
}

pktc_req_t* build_pktc_req(uint64_t id, pktc_cb_t* cb) {
  msg_t* m = mock_msg_new(sizeof(pktc_req_t), id, MOD_PKTC_REQ);
  pktc_req_t* r = (pktc_req_t*)m - 1;
  r->msg.s = m->s;
  r->cb = cb;
  r->dest = g_addr;
  return r;
}

EXPORT int __pktc_perf_prepare() {
  return __do_cmd("pktc_io");
}

PERF(pktc_perf) {
  uint64_t id = gen_id();
  pktc_post(__pktc_io_g, build_pktc_req(id, build_pktc_cb(id)), 0);
  debug_pause(1000 * 1000);
}

EXPORT int __pktc_sync_perf_prepare() {
  return __pktc_perf_prepare();
}

pktc_cb_t* build_pktc_sync_cb(pktc_cb_t* cb, uint64_t id, pktc_wait_t* w) {
  cb->expire_us = get_corse_us() + 1000000;
  cb->id = id;
  cb->resp_cb = pktc_wait_cb;
  cb->arg = w;
  return cb;
}

PERF(pktc_sync_perf) {
  int64_t max_alloc_size = 1<<12;
  pktc_cb_t* cb = alloca(max_alloc_size);
  pktc_wait_t* w = (pktc_wait_t*)(cb + 1);
  uint64_t id = gen_id();
  memset(cb, 0, max_alloc_size);
  pktc_post(__pktc_io_g, build_pktc_req(id, build_pktc_sync_cb(cb, id, w)), 0);
  pktc_wait(w, NULL);
  debug_pause(1000 * 1000);
}
