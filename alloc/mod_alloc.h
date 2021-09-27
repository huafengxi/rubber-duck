extern void mod_report(format_t* f);
extern void* mod_alloc(int64_t sz, int mod);
extern void mod_free(void* p);

enum {
#define MOD_DEF(name) MOD_ ## name, //keep
#include "mod_define.h"
#undef MOD_DEF
};
