typedef struct alloc_head_t {
  int mod;
  int64_t sz;
} alloc_head_t;

int64_t mod_stat[MOD_MAX_COUNT + 1];
const char* mod_name[MOD_MAX_COUNT + 1] = {
#define MOD_DEF(name) #name, //keep
#include "mod_define.h"
#undef MOD_DEF
};

void mod_update(int mod, int64_t sz) {
  FAA(&mod_stat[mod], sz);
}

void mod_report(format_t* f) {
  for(int i = 0; i < MOD_MAX_COUNT; i++) {
    if (mod_stat[i] != 0) {
      format_append(f, "%s:%'8ld ", mod_name[i], mod_stat[i]);
    }
  }
}

void* mod_alloc(int64_t sz, int mod) {
  alloc_head_t* h = (typeof(h))malloc(sizeof(*h) + sz);
  if (h) {
    h->mod = mod;
    h->sz = sz;
    mod_update(mod, sz);
  }
  return (void*)(h + 1);
}

void mod_free(void* p) {
  if (p) {
    alloc_head_t* h = (typeof(h))p - 1;
    mod_update(h->mod, -h->sz);
    free(h);
  }
}
