str_t* s2rpc(addr_t addr, str_t* req, str_t* resp) {
  struct sockaddr_in sin;
  int fd = socket(AF_INET, SOCK_STREAM, 0);
  int64_t cnt = 0;
  ef(fd < 0);
  ef(connect(fd, (const struct sockaddr*)make_sockaddr(&sin, addr), sizeof(sin)) < 0);
  ef(write(fd, req->b, req->s) != req->s);
  ef ((cnt = read(fd, resp->b, resp->s)) < 0);
  resp->s = cnt;
  return resp;
  el();
  if (fd >= 0) {
    close(fd);
  }
  return NULL;
}
