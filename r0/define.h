// #global: __release__
#ifndef _GNU_SOURCE
#define _GNU_SOURCE
#endif
#include <stdint.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <stddef.h>
#define  MAX_PATH_SIZE  1024
#define  MAX_SYM_SIZE  256
#define  MAX_THREAD_NUM  1024
#define  MAX_RPC_BUFFER_SIZE  (1<<21)

#define PAGE_SIZE 4096
#define PAGE_ALIGNED __attribute__((aligned(PAGE_SIZE)))
#define CACHE_ALIGN_SIZE 64
#define CACHE_ALIGNED __attribute__((aligned(CACHE_ALIGN_SIZE)))
#define CONSTRUCTOR __attribute__((constructor))

inline void __unused(void* p, ...) { (void)p; }
#define unused(args...) __unused(NULL, args)
#define structof(p, T, m) (T*)((char*)p - offsetof(T, m))
#define arrlen(x) (sizeof(x)/sizeof(x[0]))
#define ef(x) if ((x)) goto el
#define el() el:

#define STR(x) XSTR(x)
#define XSTR(x) #x
#define WEAK __attribute__((weak))
