#define STREAM_IO 1
#define MSG_IO 2
#define PACKET_IO 4

#ifndef __FEATURE__
#define __FEATURE__ 0 //keep
#endif

#define Require(f)  (__FEATURE__ & f) //keep
