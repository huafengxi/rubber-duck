extern void* salloc(int64_t sz) WEAK;
extern void sfree(void* p) WEAK;
extern void* dalloc(int64_t sz) WEAK;
extern void dfree(void* p) WEAK;
#include "mod_alloc.h"
#include "ref_alloc.h"
#include "pool.h"
