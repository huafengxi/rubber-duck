#define NIO_OPT_LISTEN 1
#define NIO_OPT_CONNECT 2
#define NIO_OPT_POST 4
#define NIO_OPT_RESP_CB 8
#define NIO_OPT_DECODE 16
#define NIO_OPT_WRITE_QUEUE 32
#ifndef nio_test
#define nio_test(xxx) (__tns_nio_opt__ & NIO_OPT_ ## xxx)
#endif
