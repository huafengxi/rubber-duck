#include "atomic_msg.h"
#include "addr.h"
#include "inet.h"
#include "listenfd.h"
#include "nio_opt.h"
#include "s2rpc.h"

#if Require(STREAM_IO)
#include "notify_server.h"
#include "stream_server.h"
#endif

#if Require(MSG_IO)
#include "simple_msg_server.h"
#include "simple_msg_client.h"
#endif

#if Require(PACKET_IO)
#include "packet_client.h"
#include "packet_client_wait.h"
#include "packet_server.h"
#endif

#include "msg_decode.h"
