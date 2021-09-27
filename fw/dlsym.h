#include <dlfcn.h>

#define EXPORT __attribute__((visibility ("default")))
extern void* sym(const char *f, ...);
extern void* sym_vital(const char *f, ...);
extern const char* addr2sym(void* addr);
