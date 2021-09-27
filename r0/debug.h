#include <assert.h>
#if __release__ > 2
#define DEBUG(...) __VA_ARGS__
#else
#define DEBUG(...)
#endif
#define debug_pause(x) DEBUG(usleep(x))
#define debug(...) DEBUG(info(__VA_ARGS__))

#define check(expr, format, ...) if (!(expr)) fatal(format, ##__VA_ARGS__)
