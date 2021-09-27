static my_sk_t* my_do_connect(my_t* cl, addr_t dest) {
  my_sk_t* sk = NULL;
  ef(!(sk = my_sk_new(&cl->sf)));
  sk->dest = dest;
  ef((sk->fd = async_connect(dest)) < 0);
  ef(eloop_regist(&cl->ep, (sock_t*)sk, EPOLLIN|EPOLLOUT));
  return sk;
  el();
  if (!sk) {
    my_sk_delete(&cl->sf, sk);
  }
  return NULL;
}

static my_sk_t* my_try_connect(my_t* cl, addr_t dest) {
  my_sk_t* sk = NULL;
  link_t* sk_link = ihash_get(&cl->sk_map, *(uint64_t*)&dest);
  if (sk_link) {
    sk = structof(sk_link, my_sk_t, hash);
  } else {
    ef(!(sk = my_do_connect(cl, dest)));
    ihash_insert(&cl->sk_map, &sk->hash);
  }
  return sk;
  el();
  error("sk create fail: %s sk=%p", T2S(addr, dest), sk);
  if (!sk) {
    my_sk_destroy(&cl->sf, sk);
  }
  return NULL;
}

static my_sk_t* my_get_sk(my_t* io, my_req_t* r) {
  return my_try_connect(io, r->dest);
}
