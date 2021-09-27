#include "atomic_msg.c"
#include "addr.c"
#include "inet.c"
#include "listenfd.c"

#include "s2rpc.c"
#if Require(STREAM_IO)
#include "notify_server.c"
#include "stream_server.c"
#endif

#if Require(MSG_IO)
#include "simple_msg_server.c"
#include "simple_msg_client.c"
#endif

#if Require(PACKET_IO)
#include "packet_client.c"
#include "packet_client_wait.c"
#include "packet_server.c"
#endif

#include "msg_decode.c"
