#define cfg(k, v) (getenv(k)?: v)
#define cfgi(k, v) atoll(cfg(k, v))
#define cfg2(k1, k2, v) cfg(k1, cfg(k2, v))
#define cfg2i(k1, k2, v) atoll(cfg2(k1, k2, v))

#define max(a,b) ({ typeof (a) _a = (a), _b = (b); _a > _b ? _a : _b; })
#define min(a,b) ({ typeof (a) _a = (a), _b = (b); _a < _b ? _a : _b; })

#include <signal.h>
