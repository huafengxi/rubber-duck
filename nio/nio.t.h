typedef struct my_g_t {
  int cnt;
  my_t instance[];
} my_g_t;

#if nio_test(WRITE_QUEUE)
#include "write_queue.t.h"
#endif

#if nio_test(DECODE)
#include "decode.t.h"
#endif

#if nio_test(RESP_CB)
#include "resp_cb.t.h"
#endif

#include "handle_io.t.h"
#include "sk_factory.t.h"

#if nio_test(CONNECT)
#include "connect.t.h"
#endif

#if nio_test(POST)
#include "post.t.h"
#endif

#include "nio_init.t.h"
#undef __tns_nio_opt__
