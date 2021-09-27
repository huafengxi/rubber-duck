void* salloc(int64_t sz) {
  return dalloc(sz);
}

void sfree(void* p) {
  dfree(p);
}

void* dalloc(int64_t sz) {
  return calloc(1, sz);
}

void dfree(void* p) {
  free(p);
}

#include "mod_alloc.c"
#include "ref_alloc.c"
#include "pool.c"
