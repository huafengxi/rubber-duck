extern uint64_t tls_co(void* addr);
extern void* tls_get(uint64_t off);
extern void* tls_o(uint64_t offset, int idx);
extern void* tls_a(void* addr, int idx);
