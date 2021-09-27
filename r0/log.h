#include <stdio.h>
#include <unistd.h>
#include <sys/syscall.h>

typedef void (*log_func_t)(int level, const char *file, int line, const char *function, const char *fmt, va_list ap);
extern void do_log(int level, const char* file, int line, const char* func, const char* format, ...) __attribute__((format(printf, 5, 6)));

extern log_func_t g_log_func;
extern int g_log_level;
enum { LOG_LEVEL_ERROR = 0, LOG_LEVEL_USER_LEVEL = 1, LOG_LEVEL_WARN = 2, LOG_LEVEL_INFO = 3, LOG_LEVEL_TRACE = 4, LOG_LEVEL_DEBUG = 5 };

#define log_macro(level, ...) if (LOG_LEVEL_ ## level <= g_log_level)  do_log(LOG_LEVEL_ ## level, __FILE__, __LINE__, __func__, ##__VA_ARGS__)
#define error(...) log_macro(ERROR, ##__VA_ARGS__)
#define info(...) log_macro(INFO, ##__VA_ARGS__)
#define fatal(...) { error(__VA_ARGS__); exit(1); }
