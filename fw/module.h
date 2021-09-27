#include <dlfcn.h>

#define MODULE(t, n) USECTION(module) const char __ ## n ## _module_desc[] = #n "\0" #t;

extern int __start_module(const char* m);
extern int __start_modules();
