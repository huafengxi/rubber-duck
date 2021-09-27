inline uint64_t tls_co(void* addr) { return (uint64_t)addr - thread_base(); }
inline void* tls_get(uint64_t off) { return (void*)((uint64_t)off + thread_base()); }
inline void* tls_o(uint64_t offset, int idx) { return (void*)(offset + (uint64_t)g_thread_array[idx].pd); }
inline void* tls_a(void* addr, int idx) { return tls_o(tls_co(addr), idx); }
