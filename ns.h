#if !defined(__NS_PREFIX__)
#define __NS_PREFIX__ RK_
#define __ns_prefix__ rk_
#pragma push_macro("counter_add")
#undef counter_add
#pragma push_macro("counter_fetch")
#undef counter_fetch
#pragma push_macro("__counter_report")
#undef __counter_report
#pragma push_macro("page_t")
#undef page_t
#pragma push_macro("pool_direct_alloc")
#undef pool_direct_alloc
#pragma push_macro("pool_direct_free")
#undef pool_direct_free
#pragma push_macro("POOL_PAGE_SIZE")
#undef POOL_PAGE_SIZE
#pragma push_macro("page_create")
#undef page_create
#pragma push_macro("page_alloc")
#undef page_alloc
#pragma push_macro("pool_create")
#undef pool_create
#pragma push_macro("pool_destroy")
#undef pool_destroy
#pragma push_macro("pool_tail_page")
#undef pool_tail_page
#pragma push_macro("pool_alloc")
#undef pool_alloc
#pragma push_macro("cfg")
#undef cfg
#pragma push_macro("cfgi")
#undef cfgi
#pragma push_macro("cfg2")
#undef cfg2
#pragma push_macro("cfg2i")
#undef cfg2i
#pragma push_macro("max")
#undef max
#pragma push_macro("min")
#undef min
#pragma push_macro("pool_t")
#undef pool_t
#pragma push_macro("str_next")
#undef str_next
#pragma push_macro("skset")
#undef skset
#pragma push_macro("skclear")
#undef skclear
#pragma push_macro("sktest")
#undef sktest
#pragma push_macro("sf_init")
#undef sf_init
#pragma push_macro("sk_init")
#undef sk_init
#pragma push_macro("pktc_wait_cb")
#undef pktc_wait_cb
#pragma push_macro("pktc_wait")
#undef pktc_wait
#pragma push_macro("strms_sk_t")
#undef strms_sk_t
#pragma push_macro("strms_sf_t")
#undef strms_sf_t
#pragma push_macro("strms_t")
#undef strms_t
#pragma push_macro("strms_init")
#undef strms_init
#pragma push_macro("strms_signal")
#undef strms_signal
#pragma push_macro("__STRMS_SIGNAL_FUNC")
#undef __STRMS_SIGNAL_FUNC
#pragma push_macro("__STRMS_READ_FUNC_DEF")
#undef __STRMS_READ_FUNC_DEF
#pragma push_macro("STRMS")
#undef STRMS
#pragma push_macro("pktc_sk_t")
#undef pktc_sk_t
#pragma push_macro("pktc_sf_t")
#undef pktc_sf_t
#pragma push_macro("pktc_t")
#undef pktc_t
#pragma push_macro("pktc_msg_t")
#undef pktc_msg_t
#pragma push_macro("pktc_decode")
#undef pktc_decode
#pragma push_macro("pktc_get_id")
#undef pktc_get_id
#pragma push_macro("pktc_sk_read")
#undef pktc_sk_read
#pragma push_macro("pktc_flush_cb")
#undef pktc_flush_cb
#pragma push_macro("pktc_do_cb")
#undef pktc_do_cb
#pragma push_macro("pktc_do_cb_exception")
#undef pktc_do_cb_exception
#pragma push_macro("pktc_sk_msg_done")
#undef pktc_sk_msg_done
#pragma push_macro("pktc_sk_init")
#undef pktc_sk_init
#pragma push_macro("pktc_sk_destroy")
#undef pktc_sk_destroy
#pragma push_macro("pktc_sf_do_init")
#undef pktc_sf_do_init
#pragma push_macro("pktc_req_dispatch")
#undef pktc_req_dispatch
#pragma push_macro("pktc_minit_cfg")
#undef pktc_minit_cfg
#pragma push_macro("pktc_do_init")
#undef pktc_do_init
#pragma push_macro("__tns_nio_opt__")
#undef __tns_nio_opt__
#pragma push_macro("tns")
#undef tns
#pragma push_macro("pktc_cb_t")
#undef pktc_cb_t
#pragma push_macro("pktc_cfg_t")
#undef pktc_cfg_t
#pragma push_macro("pktc_create")
#undef pktc_create
#pragma push_macro("pktc_cur_resp")
#undef pktc_cur_resp
#pragma push_macro("pktc_do_connect")
#undef pktc_do_connect
#pragma push_macro("pktc_do_post")
#undef pktc_do_post
#pragma push_macro("pktc_evfd_cb")
#undef pktc_evfd_cb
#pragma push_macro("pktc_flush_cb_after_flush")
#undef pktc_flush_cb_after_flush
#pragma push_macro("pktc_flush_cb_exception")
#undef pktc_flush_cb_exception
#pragma push_macro("pktc_flush_cb_on_post_fail")
#undef pktc_flush_cb_on_post_fail
#pragma push_macro("pktc_g_t")
#undef pktc_g_t
#pragma push_macro("pktc_get_sk")
#undef pktc_get_sk
#pragma push_macro("pktc_handle_one_req")
#undef pktc_handle_one_req
#pragma push_macro("pktc_handle_req_queue")
#undef pktc_handle_req_queue
#pragma push_macro("pktc_init")
#undef pktc_init
#pragma push_macro("pktc_minit")
#undef pktc_minit
#pragma push_macro("pktc_post")
#undef pktc_post
#pragma push_macro("pktc_post_async")
#undef pktc_post_async
#pragma push_macro("pktc_post_io")
#undef pktc_post_io
#pragma push_macro("pktc_req_t")
#undef pktc_req_t
#pragma push_macro("pktc_resp_cb_on_msg")
#undef pktc_resp_cb_on_msg
#pragma push_macro("pktc_resp_cb_on_post_fail")
#undef pktc_resp_cb_on_post_fail
#pragma push_macro("pktc_resp_cb_on_sk_destroy")
#undef pktc_resp_cb_on_sk_destroy
#pragma push_macro("pktc_resp_cb_on_timeout")
#undef pktc_resp_cb_on_timeout
#pragma push_macro("pktc_select_thread")
#undef pktc_select_thread
#pragma push_macro("pktc_sf_init")
#undef pktc_sf_init
#pragma push_macro("pktc_sk_alloc")
#undef pktc_sk_alloc
#pragma push_macro("pktc_sk_check_connect")
#undef pktc_sk_check_connect
#pragma push_macro("pktc_sk_consume")
#undef pktc_sk_consume
#pragma push_macro("pktc_sk_delete")
#undef pktc_sk_delete
#pragma push_macro("pktc_sk_do_decode")
#undef pktc_sk_do_decode
#pragma push_macro("pktc_sk_do_flush")
#undef pktc_sk_do_flush
#pragma push_macro("pktc_sk_flush")
#undef pktc_sk_flush
#pragma push_macro("pktc_sk_free")
#undef pktc_sk_free
#pragma push_macro("pktc_sk_handle_event")
#undef pktc_sk_handle_event
#pragma push_macro("pktc_sk_handle_event_ready")
#undef pktc_sk_handle_event_ready
#pragma push_macro("pktc_sk_handle_msg")
#undef pktc_sk_handle_msg
#pragma push_macro("pktc_sk_new")
#undef pktc_sk_new
#pragma push_macro("pktc_start")
#undef pktc_start
#pragma push_macro("pktc_thread_work")
#undef pktc_thread_work
#pragma push_macro("pktc_try_connect")
#undef pktc_try_connect
#pragma push_macro("pktc_write_queue_on_sk_destroy")
#undef pktc_write_queue_on_sk_destroy
#pragma push_macro("pktc_flush_cb_func_t")
#undef pktc_flush_cb_func_t
#pragma push_macro("__PKTC_CB_FUNC_DEF")
#undef __PKTC_CB_FUNC_DEF
#pragma push_macro("PKTC")
#undef PKTC
#pragma push_macro("cur_th_gen_id")
#undef cur_th_gen_id
#pragma push_macro("gen_id")
#undef gen_id
#pragma push_macro("g_seq_id")
#undef g_seq_id
#pragma push_macro("gen_seq_id")
#undef gen_seq_id
#pragma push_macro("msg_init")
#undef msg_init
#pragma push_macro("s2rpc")
#undef s2rpc
#pragma push_macro("ihash_insert")
#undef ihash_insert
#pragma push_macro("ihash_del")
#undef ihash_del
#pragma push_macro("ihash_get")
#undef ihash_get
#pragma push_macro("DEBUG")
#undef DEBUG
#pragma push_macro("debug_pause")
#undef debug_pause
#pragma push_macro("debug")
#undef debug
#pragma push_macro("check")
#undef check
#pragma push_macro("link_t")
#undef link_t
#pragma push_macro("link_init")
#undef link_init
#pragma push_macro("link_is_empty")
#undef link_is_empty
#pragma push_macro("link_insert")
#undef link_insert
#pragma push_macro("link_delete")
#undef link_delete
#pragma push_macro("link_pop")
#undef link_pop
#pragma push_macro("link_for_each")
#undef link_for_each
#pragma push_macro("COUNTER")
#undef COUNTER
#pragma push_macro("COUNTER_DEF")
#undef COUNTER_DEF
#pragma push_macro("COUNTER_ADD")
#undef COUNTER_ADD
#pragma push_macro("stat_reg_t")
#undef stat_reg_t
#pragma push_macro("STAT_DEF")
#undef STAT_DEF
#pragma push_macro("get_pc")
#undef get_pc
#pragma push_macro("start_stat_report")
#undef start_stat_report
#pragma push_macro("stat_count")
#undef stat_count
#pragma push_macro("stat_get")
#undef stat_get
#pragma push_macro("stat_format")
#undef stat_format
#pragma push_macro("stat_format_all")
#undef stat_format_all
#pragma push_macro("mod_report")
#undef mod_report
#pragma push_macro("__stat_thread_func")
#undef __stat_thread_func
#pragma push_macro("timerfd_set_interval")
#undef timerfd_set_interval
#pragma push_macro("timerfd_init")
#undef timerfd_init
#pragma push_macro("thread_channel_t")
#undef thread_channel_t
#pragma push_macro("tch_handle_queue_def")
#undef tch_handle_queue_def
#pragma push_macro("tch_evfd_cb_def")
#undef tch_evfd_cb_def
#pragma push_macro("tch_init")
#undef tch_init
#pragma push_macro("tch_post")
#undef tch_post
#pragma push_macro("N_COND")
#undef N_COND
#pragma push_macro("multi_cond_t")
#undef multi_cond_t
#pragma push_macro("multi_cond_init")
#undef multi_cond_init
#pragma push_macro("multi_cond_alloc")
#undef multi_cond_alloc
#pragma push_macro("multi_cond_signal")
#undef multi_cond_signal
#pragma push_macro("BARRIER")
#undef BARRIER
#pragma push_macro("MBARRIER")
#undef MBARRIER
#pragma push_macro("SPIN_PAUSE")
#undef SPIN_PAUSE
#pragma push_macro("LOAD")
#undef LOAD
#pragma push_macro("STORE")
#undef STORE
#pragma push_macro("FAA")
#undef FAA
#pragma push_macro("AAF")
#undef AAF
#pragma push_macro("TAS")
#undef TAS
#pragma push_macro("VCAS")
#undef VCAS
#pragma push_macro("BCAS")
#undef BCAS
#pragma push_macro("__ihash_calc")
#undef __ihash_calc
#pragma push_macro("__ihash_locate")
#undef __ihash_locate
#pragma push_macro("__ihash_key")
#undef __ihash_key
#pragma push_macro("__ihash_list_search")
#undef __ihash_list_search
#pragma push_macro("tls_i64")
#undef tls_i64
#pragma push_macro("tls_add")
#undef tls_add
#pragma push_macro("tls_sumo")
#undef tls_sumo
#pragma push_macro("tls_suma")
#undef tls_suma
#pragma push_macro("pkts_sk_t")
#undef pkts_sk_t
#pragma push_macro("pkts_sf_t")
#undef pkts_sf_t
#pragma push_macro("pkts_t")
#undef pkts_t
#pragma push_macro("pkts_msg_t")
#undef pkts_msg_t
#pragma push_macro("pkts_decode")
#undef pkts_decode
#pragma push_macro("pkts_flush_cb")
#undef pkts_flush_cb
#pragma push_macro("pkts_sk_read")
#undef pkts_sk_read
#pragma push_macro("pkts_sk_handle_msg")
#undef pkts_sk_handle_msg
#pragma push_macro("pkts_sk_init")
#undef pkts_sk_init
#pragma push_macro("pkts_sk_destroy")
#undef pkts_sk_destroy
#pragma push_macro("pkts_sf_do_init")
#undef pkts_sf_do_init
#pragma push_macro("pkts_do_init")
#undef pkts_do_init
#pragma push_macro("pkts_get_sk")
#undef pkts_get_sk
#pragma push_macro("pkts_do_post")
#undef pkts_do_post
#pragma push_macro("pkts_minit_cfg")
#undef pkts_minit_cfg
#pragma push_macro("pkts_cb_t")
#undef pkts_cb_t
#pragma push_macro("pkts_cfg_t")
#undef pkts_cfg_t
#pragma push_macro("pkts_create")
#undef pkts_create
#pragma push_macro("pkts_cur_resp")
#undef pkts_cur_resp
#pragma push_macro("pkts_do_cb")
#undef pkts_do_cb
#pragma push_macro("pkts_do_cb_exception")
#undef pkts_do_cb_exception
#pragma push_macro("pkts_do_connect")
#undef pkts_do_connect
#pragma push_macro("pkts_evfd_cb")
#undef pkts_evfd_cb
#pragma push_macro("pkts_flush_cb_after_flush")
#undef pkts_flush_cb_after_flush
#pragma push_macro("pkts_flush_cb_exception")
#undef pkts_flush_cb_exception
#pragma push_macro("pkts_flush_cb_on_post_fail")
#undef pkts_flush_cb_on_post_fail
#pragma push_macro("pkts_g_t")
#undef pkts_g_t
#pragma push_macro("pkts_get_id")
#undef pkts_get_id
#pragma push_macro("pkts_handle_one_req")
#undef pkts_handle_one_req
#pragma push_macro("pkts_handle_req_queue")
#undef pkts_handle_req_queue
#pragma push_macro("pkts_init")
#undef pkts_init
#pragma push_macro("pkts_minit")
#undef pkts_minit
#pragma push_macro("pkts_post")
#undef pkts_post
#pragma push_macro("pkts_post_async")
#undef pkts_post_async
#pragma push_macro("pkts_post_io")
#undef pkts_post_io
#pragma push_macro("pkts_req_dispatch")
#undef pkts_req_dispatch
#pragma push_macro("pkts_req_t")
#undef pkts_req_t
#pragma push_macro("pkts_resp_cb_on_msg")
#undef pkts_resp_cb_on_msg
#pragma push_macro("pkts_resp_cb_on_post_fail")
#undef pkts_resp_cb_on_post_fail
#pragma push_macro("pkts_resp_cb_on_sk_destroy")
#undef pkts_resp_cb_on_sk_destroy
#pragma push_macro("pkts_resp_cb_on_timeout")
#undef pkts_resp_cb_on_timeout
#pragma push_macro("pkts_select_thread")
#undef pkts_select_thread
#pragma push_macro("pkts_sf_init")
#undef pkts_sf_init
#pragma push_macro("pkts_sk_alloc")
#undef pkts_sk_alloc
#pragma push_macro("pkts_sk_check_connect")
#undef pkts_sk_check_connect
#pragma push_macro("pkts_sk_consume")
#undef pkts_sk_consume
#pragma push_macro("pkts_sk_delete")
#undef pkts_sk_delete
#pragma push_macro("pkts_sk_do_decode")
#undef pkts_sk_do_decode
#pragma push_macro("pkts_sk_do_flush")
#undef pkts_sk_do_flush
#pragma push_macro("pkts_sk_flush")
#undef pkts_sk_flush
#pragma push_macro("pkts_sk_free")
#undef pkts_sk_free
#pragma push_macro("pkts_sk_handle_event")
#undef pkts_sk_handle_event
#pragma push_macro("pkts_sk_handle_event_ready")
#undef pkts_sk_handle_event_ready
#pragma push_macro("pkts_sk_msg_done")
#undef pkts_sk_msg_done
#pragma push_macro("pkts_sk_new")
#undef pkts_sk_new
#pragma push_macro("pkts_start")
#undef pkts_start
#pragma push_macro("pkts_thread_work")
#undef pkts_thread_work
#pragma push_macro("pkts_try_connect")
#undef pkts_try_connect
#pragma push_macro("pkts_write_queue_on_sk_destroy")
#undef pkts_write_queue_on_sk_destroy
#pragma push_macro("pkts_flush_cb_func_t")
#undef pkts_flush_cb_func_t
#pragma push_macro("__PKTS_HANDLE_FUNC_DEF")
#undef __PKTS_HANDLE_FUNC_DEF
#pragma push_macro("PKTS")
#undef PKTS
#pragma push_macro("sms_g_t")
#undef sms_g_t
#pragma push_macro("sms_cfg_t")
#undef sms_cfg_t
#pragma push_macro("sms_start")
#undef sms_start
#pragma push_macro("__SMS_HANDLE_FUNC_DEF")
#undef __SMS_HANDLE_FUNC_DEF
#pragma push_macro("SMS")
#undef SMS
#pragma push_macro("make_fd_nonblocking")
#undef make_fd_nonblocking
#pragma push_macro("is_pipe")
#undef is_pipe
#pragma push_macro("uintr_pread")
#undef uintr_pread
#pragma push_macro("uintr_pwrite")
#undef uintr_pwrite
#pragma push_macro("fsize")
#undef fsize
#pragma push_macro("fmap")
#undef fmap
#pragma push_macro("uintr_read")
#undef uintr_read
#pragma push_macro("uintr_readv")
#undef uintr_readv
#pragma push_macro("uintr_write")
#undef uintr_write
#pragma push_macro("uintr_writev")
#undef uintr_writev
#pragma push_macro("sk_read")
#undef sk_read
#pragma push_macro("sk_readv")
#undef sk_readv
#pragma push_macro("sk_write")
#undef sk_write
#pragma push_macro("sk_writev")
#undef sk_writev
#pragma push_macro("sk_try_read_rb")
#undef sk_try_read_rb
#pragma push_macro("sk_try_write_rb")
#undef sk_try_write_rb
#pragma push_macro("sk_write_rb")
#undef sk_write_rb
#pragma push_macro("sk_read_with_rb")
#undef sk_read_with_rb
#pragma push_macro("sk_alloc_with_rb")
#undef sk_alloc_with_rb
#pragma push_macro("sk_translate_io_error")
#undef sk_translate_io_error
#pragma push_macro("sk_after_io")
#undef sk_after_io
#pragma push_macro("sk_after_iov")
#undef sk_after_iov
#pragma push_macro("sk_after_read")
#undef sk_after_read
#pragma push_macro("sk_after_write")
#undef sk_after_write
#pragma push_macro("sk_after_readv")
#undef sk_after_readv
#pragma push_macro("sk_after_writev")
#undef sk_after_writev
#pragma push_macro("sms_msg_t")
#undef sms_msg_t
#pragma push_macro("sms_sk_t")
#undef sms_sk_t
#pragma push_macro("sms_sf_t")
#undef sms_sf_t
#pragma push_macro("sms_t")
#undef sms_t
#pragma push_macro("sms_sk_do_flush")
#undef sms_sk_do_flush
#pragma push_macro("sms_sk_do_decode")
#undef sms_sk_do_decode
#pragma push_macro("sms_sk_handle_msg")
#undef sms_sk_handle_msg
#pragma push_macro("sms_sk_init")
#undef sms_sk_init
#pragma push_macro("sms_sk_destroy")
#undef sms_sk_destroy
#pragma push_macro("sms_minit_cfg")
#undef sms_minit_cfg
#pragma push_macro("sms_sf_do_init")
#undef sms_sf_do_init
#pragma push_macro("sms_do_init")
#undef sms_do_init
#pragma push_macro("sms_cb_t")
#undef sms_cb_t
#pragma push_macro("sms_create")
#undef sms_create
#pragma push_macro("sms_cur_resp")
#undef sms_cur_resp
#pragma push_macro("sms_decode")
#undef sms_decode
#pragma push_macro("sms_do_cb")
#undef sms_do_cb
#pragma push_macro("sms_do_cb_exception")
#undef sms_do_cb_exception
#pragma push_macro("sms_do_connect")
#undef sms_do_connect
#pragma push_macro("sms_do_post")
#undef sms_do_post
#pragma push_macro("sms_evfd_cb")
#undef sms_evfd_cb
#pragma push_macro("sms_flush_cb")
#undef sms_flush_cb
#pragma push_macro("sms_flush_cb_after_flush")
#undef sms_flush_cb_after_flush
#pragma push_macro("sms_flush_cb_exception")
#undef sms_flush_cb_exception
#pragma push_macro("sms_flush_cb_on_post_fail")
#undef sms_flush_cb_on_post_fail
#pragma push_macro("sms_get_id")
#undef sms_get_id
#pragma push_macro("sms_get_sk")
#undef sms_get_sk
#pragma push_macro("sms_handle_one_req")
#undef sms_handle_one_req
#pragma push_macro("sms_handle_req_queue")
#undef sms_handle_req_queue
#pragma push_macro("sms_init")
#undef sms_init
#pragma push_macro("sms_minit")
#undef sms_minit
#pragma push_macro("sms_post")
#undef sms_post
#pragma push_macro("sms_post_async")
#undef sms_post_async
#pragma push_macro("sms_post_io")
#undef sms_post_io
#pragma push_macro("sms_req_dispatch")
#undef sms_req_dispatch
#pragma push_macro("sms_req_t")
#undef sms_req_t
#pragma push_macro("sms_resp_cb_on_msg")
#undef sms_resp_cb_on_msg
#pragma push_macro("sms_resp_cb_on_post_fail")
#undef sms_resp_cb_on_post_fail
#pragma push_macro("sms_resp_cb_on_sk_destroy")
#undef sms_resp_cb_on_sk_destroy
#pragma push_macro("sms_resp_cb_on_timeout")
#undef sms_resp_cb_on_timeout
#pragma push_macro("sms_select_thread")
#undef sms_select_thread
#pragma push_macro("sms_sf_init")
#undef sms_sf_init
#pragma push_macro("sms_sk_alloc")
#undef sms_sk_alloc
#pragma push_macro("sms_sk_check_connect")
#undef sms_sk_check_connect
#pragma push_macro("sms_sk_consume")
#undef sms_sk_consume
#pragma push_macro("sms_sk_delete")
#undef sms_sk_delete
#pragma push_macro("sms_sk_flush")
#undef sms_sk_flush
#pragma push_macro("sms_sk_free")
#undef sms_sk_free
#pragma push_macro("sms_sk_handle_event")
#undef sms_sk_handle_event
#pragma push_macro("sms_sk_handle_event_ready")
#undef sms_sk_handle_event_ready
#pragma push_macro("sms_sk_msg_done")
#undef sms_sk_msg_done
#pragma push_macro("sms_sk_new")
#undef sms_sk_new
#pragma push_macro("sms_sk_read")
#undef sms_sk_read
#pragma push_macro("sms_thread_work")
#undef sms_thread_work
#pragma push_macro("sms_try_connect")
#undef sms_try_connect
#pragma push_macro("sms_write_queue_on_sk_destroy")
#undef sms_write_queue_on_sk_destroy
#pragma push_macro("pktc_wait_t")
#undef pktc_wait_t
#pragma push_macro("MODULE")
#undef MODULE
#pragma push_macro("__start_module")
#undef __start_module
#pragma push_macro("__start_modules")
#undef __start_modules
#pragma push_macro("tls_co")
#undef tls_co
#pragma push_macro("tls_get")
#undef tls_get
#pragma push_macro("tls_o")
#undef tls_o
#pragma push_macro("tls_a")
#undef tls_a
#pragma push_macro("for_each_module")
#undef for_each_module
#pragma push_macro("__do_start_module")
#undef __do_start_module
#pragma push_macro("__start_all_modules")
#undef __start_all_modules
#pragma push_macro("ref_alloc")
#undef ref_alloc
#pragma push_macro("ref_free")
#undef ref_free
#pragma push_macro("addr_str")
#undef addr_str
#pragma push_macro("addr_build")
#undef addr_build
#pragma push_macro("addr_init")
#undef addr_init
#pragma push_macro("addr_set")
#undef addr_set
#pragma push_macro("get_remote_addr")
#undef get_remote_addr
#pragma push_macro("get_local_addr")
#undef get_local_addr
#pragma push_macro("make_unix_sockaddr")
#undef make_unix_sockaddr
#pragma push_macro("make_sockaddr")
#undef make_sockaddr
#pragma push_macro("evfd_signal")
#undef evfd_signal
#pragma push_macro("evfd_drain")
#undef evfd_drain
#pragma push_macro("evfd_init")
#undef evfd_init
#pragma push_macro("sock_t")
#undef sock_t
#pragma push_macro("SOCK_FACTORY_COMMON")
#undef SOCK_FACTORY_COMMON
#pragma push_macro("sf_t")
#undef sf_t
#pragma push_macro("handle_event_t")
#undef handle_event_t
#pragma push_macro("SOCK_COMMON")
#undef SOCK_COMMON
#pragma push_macro("EPOLLPENDING")
#undef EPOLLPENDING
#pragma push_macro("sks")
#undef sks
#pragma push_macro("skt")
#undef skt
#pragma push_macro("skc")
#undef skc
#pragma push_macro("evfd_t")
#undef evfd_t
#pragma push_macro("g_thread_array")
#undef g_thread_array
#pragma push_macro("g_thread_count")
#undef g_thread_count
#pragma push_macro("cth")
#undef cth
#pragma push_macro("thread_base")
#undef thread_base
#pragma push_macro("__thread_setup")
#undef __thread_setup
#pragma push_macro("__thread_work")
#undef __thread_work
#pragma push_macro("prepare_thread")
#undef prepare_thread
#pragma push_macro("__start_thread0")
#undef __start_thread0
#pragma push_macro("__start_thread")
#undef __start_thread
#pragma push_macro("__start_thread_group")
#undef __start_thread_group
#pragma push_macro("__wait_threads")
#undef __wait_threads
#pragma push_macro("thread_calloc")
#undef thread_calloc
#pragma push_macro("threads_minit")
#undef threads_minit
#pragma push_macro("ntfs_sk_t")
#undef ntfs_sk_t
#pragma push_macro("ntfs_sf_t")
#undef ntfs_sf_t
#pragma push_macro("ntfs_t")
#undef ntfs_t
#pragma push_macro("ntfs_init")
#undef ntfs_init
#pragma push_macro("ntfs_start")
#undef ntfs_start
#pragma push_macro("ntfs_update")
#undef ntfs_update
#pragma push_macro("__NOTIFY_FUNC")
#undef __NOTIFY_FUNC
#pragma push_macro("NTFS")
#undef NTFS
#pragma push_macro("alloc_head_t")
#undef alloc_head_t
#pragma push_macro("mod_update")
#undef mod_update
#pragma push_macro("mod_alloc")
#undef mod_alloc
#pragma push_macro("mod_free")
#undef mod_free
#pragma push_macro("salloc")
#undef salloc
#pragma push_macro("sfree")
#undef sfree
#pragma push_macro("dalloc")
#undef dalloc
#pragma push_macro("dfree")
#undef dfree
#pragma push_macro("TIME_WHEEL_SLOT_NUM")
#undef TIME_WHEEL_SLOT_NUM
#pragma push_macro("TIME_WHEEL_SLOT_INTERVAL")
#undef TIME_WHEEL_SLOT_INTERVAL
#pragma push_macro("time_wheel_t")
#undef time_wheel_t
#pragma push_macro("tw_init")
#undef tw_init
#pragma push_macro("tw_regist")
#undef tw_regist
#pragma push_macro("tw_check")
#undef tw_check
#pragma push_macro("timerfd_init_tw")
#undef timerfd_init_tw
#pragma push_macro("ntfs_sk_handle_event")
#undef ntfs_sk_handle_event
#pragma push_macro("ntfs_sk_init")
#undef ntfs_sk_init
#pragma push_macro("ntfs_sk_destroy")
#undef ntfs_sk_destroy
#pragma push_macro("ntfs_sf_do_init")
#undef ntfs_sf_do_init
#pragma push_macro("ntfs_cfg_t")
#undef ntfs_cfg_t
#pragma push_macro("ntfs_resp_cb_on_sk_destroy")
#undef ntfs_resp_cb_on_sk_destroy
#pragma push_macro("ntfs_sf_init")
#undef ntfs_sf_init
#pragma push_macro("ntfs_sk_alloc")
#undef ntfs_sk_alloc
#pragma push_macro("ntfs_sk_delete")
#undef ntfs_sk_delete
#pragma push_macro("ntfs_sk_free")
#undef ntfs_sk_free
#pragma push_macro("ntfs_sk_new")
#undef ntfs_sk_new
#pragma push_macro("ntfs_write_queue_on_sk_destroy")
#undef ntfs_write_queue_on_sk_destroy
#pragma push_macro("__ntfs_broadcast")
#undef __ntfs_broadcast
#pragma push_macro("ntfs_evfd_cb")
#undef ntfs_evfd_cb
#pragma push_macro("ntfs_svr_minit")
#undef ntfs_svr_minit
#pragma push_macro("tw_align_time")
#undef tw_align_time
#pragma push_macro("tw_get_slot")
#undef tw_get_slot
#pragma push_macro("tw_get_expire_us")
#undef tw_get_expire_us
#pragma push_macro("tw_fire")
#undef tw_fire
#pragma push_macro("tw_check_node")
#undef tw_check_node
#pragma push_macro("tw_sweep_slot")
#undef tw_sweep_slot
#pragma push_macro("timerfd_handle_tw")
#undef timerfd_handle_tw
#pragma push_macro("__fhmix")
#undef __fhmix
#pragma push_macro("fasthash64")
#undef fasthash64
#pragma push_macro("futex")
#undef futex
#pragma push_macro("futex_wake")
#undef futex_wake
#pragma push_macro("futex_wait")
#undef futex_wait
#pragma push_macro("THREAD_SETUP")
#undef THREAD_SETUP
#pragma push_macro("cond_queue_init")
#undef cond_queue_init
#pragma push_macro("cond_queue_push")
#undef cond_queue_push
#pragma push_macro("cond_queue_pop")
#undef cond_queue_pop
#pragma push_macro("__unused")
#undef __unused
#pragma push_macro("__release__")
#undef __release__
#pragma push_macro("MAX_PATH_SIZE")
#undef MAX_PATH_SIZE
#pragma push_macro("MAX_SYM_SIZE")
#undef MAX_SYM_SIZE
#pragma push_macro("MAX_THREAD_NUM")
#undef MAX_THREAD_NUM
#pragma push_macro("MAX_RPC_BUFFER_SIZE")
#undef MAX_RPC_BUFFER_SIZE
#pragma push_macro("PAGE_SIZE")
#undef PAGE_SIZE
#pragma push_macro("PAGE_ALIGNED")
#undef PAGE_ALIGNED
#pragma push_macro("CACHE_ALIGN_SIZE")
#undef CACHE_ALIGN_SIZE
#pragma push_macro("CACHE_ALIGNED")
#undef CACHE_ALIGNED
#pragma push_macro("CONSTRUCTOR")
#undef CONSTRUCTOR
#pragma push_macro("unused")
#undef unused
#pragma push_macro("structof")
#undef structof
#pragma push_macro("arrlen")
#undef arrlen
#pragma push_macro("ef")
#undef ef
#pragma push_macro("el")
#undef el
#pragma push_macro("STR")
#undef STR
#pragma push_macro("XSTR")
#undef XSTR
#pragma push_macro("WEAK")
#undef WEAK
#pragma push_macro("cond_queue_t")
#undef cond_queue_t
#pragma push_macro("CMD")
#undef CMD
#pragma push_macro("__argc")
#undef __argc
#pragma push_macro("__argv")
#undef __argv
#pragma push_macro("__do_cmd")
#undef __do_cmd
#pragma push_macro("__handle_cmd")
#undef __handle_cmd
#pragma push_macro("NIO_OPT_LISTEN")
#undef NIO_OPT_LISTEN
#pragma push_macro("NIO_OPT_CONNECT")
#undef NIO_OPT_CONNECT
#pragma push_macro("NIO_OPT_POST")
#undef NIO_OPT_POST
#pragma push_macro("NIO_OPT_RESP_CB")
#undef NIO_OPT_RESP_CB
#pragma push_macro("NIO_OPT_DECODE")
#undef NIO_OPT_DECODE
#pragma push_macro("NIO_OPT_WRITE_QUEUE")
#undef NIO_OPT_WRITE_QUEUE
#pragma push_macro("nio_test")
#undef nio_test
#pragma push_macro("for_each_cmd")
#undef for_each_cmd
#pragma push_macro("__find_cmd")
#undef __find_cmd
#pragma push_macro("__help")
#undef __help
#pragma push_macro("__try_do_cmd")
#undef __try_do_cmd
#pragma push_macro("write_queue_t")
#undef write_queue_t
#pragma push_macro("wq_init")
#undef wq_init
#pragma push_macro("wq_push")
#undef wq_push
#pragma push_macro("wq_flush")
#undef wq_flush
#pragma push_macro("str_match")
#undef str_match
#pragma push_macro("str_t")
#undef str_t
#pragma push_macro("str_hash")
#undef str_hash
#pragma push_macro("str_cmp")
#undef str_cmp
#pragma push_macro("strms_sk_handle_event")
#undef strms_sk_handle_event
#pragma push_macro("strms_sk_init")
#undef strms_sk_init
#pragma push_macro("strms_sk_destroy")
#undef strms_sk_destroy
#pragma push_macro("strms_cfg_t")
#undef strms_cfg_t
#pragma push_macro("strms_sf_do_init")
#undef strms_sf_do_init
#pragma push_macro("strms_resp_cb_on_sk_destroy")
#undef strms_resp_cb_on_sk_destroy
#pragma push_macro("strms_sf_init")
#undef strms_sf_init
#pragma push_macro("strms_sk_alloc")
#undef strms_sk_alloc
#pragma push_macro("strms_sk_delete")
#undef strms_sk_delete
#pragma push_macro("strms_sk_free")
#undef strms_sk_free
#pragma push_macro("strms_sk_new")
#undef strms_sk_new
#pragma push_macro("strms_write_queue_on_sk_destroy")
#undef strms_write_queue_on_sk_destroy
#pragma push_macro("__strms_broadcast")
#undef __strms_broadcast
#pragma push_macro("strms_evfd_cb")
#undef strms_evfd_cb
#pragma push_macro("strms_svr_minit")
#undef strms_svr_minit
#pragma push_macro("sfl")
#undef sfl
#pragma push_macro("iov_from_blist")
#undef iov_from_blist
#pragma push_macro("sk_flush_blist")
#undef sk_flush_blist
#pragma push_macro("wq_consume")
#undef wq_consume
#pragma push_macro("USECTION_NAME")
#undef USECTION_NAME
#pragma push_macro("USECTION_BEGIN")
#undef USECTION_BEGIN
#pragma push_macro("USECTION_END")
#undef USECTION_END
#pragma push_macro("USECTION_DEF")
#undef USECTION_DEF
#pragma push_macro("USECTION")
#undef USECTION
#pragma push_macro("USECTION_SIZE")
#undef USECTION_SIZE
#pragma push_macro("for_each_str_in_section")
#undef for_each_str_in_section
#pragma push_macro("iov_set")
#undef iov_set
#pragma push_macro("iov_set_from_str")
#undef iov_set_from_str
#pragma push_macro("iov_consume_one")
#undef iov_consume_one
#pragma push_macro("EXPORT")
#undef EXPORT
#pragma push_macro("sym")
#undef sym
#pragma push_macro("sym_vital")
#undef sym_vital
#pragma push_macro("addr2sym")
#undef addr2sym
#pragma push_macro("rand64")
#undef rand64
#pragma push_macro("PERF")
#undef PERF
#pragma push_macro("__timeit")
#undef __timeit
#pragma push_macro("TIMEIT")
#undef TIMEIT
#pragma push_macro("self_handle")
#undef self_handle
#pragma push_macro("__open_self_dlhandle")
#undef __open_self_dlhandle
#pragma push_macro("dlink_is_empty")
#undef dlink_is_empty
#pragma push_macro("dlink_init")
#undef dlink_init
#pragma push_macro("__dlink_insert")
#undef __dlink_insert
#pragma push_macro("__dlink_delete")
#undef __dlink_delete
#pragma push_macro("dlink_insert")
#undef dlink_insert
#pragma push_macro("dlink_delete")
#undef dlink_delete
#pragma push_macro("ibuffer_t")
#undef ibuffer_t
#pragma push_macro("ib_init")
#undef ib_init
#pragma push_macro("ib_consumed")
#undef ib_consumed
#pragma push_macro("sk_read_with_ib")
#undef sk_read_with_ib
#pragma push_macro("ib_ref")
#undef ib_ref
#pragma push_macro("eloop_init")
#undef eloop_init
#pragma push_macro("eloop_regist")
#undef eloop_regist
#pragma push_macro("eloop_fire")
#undef eloop_fire
#pragma push_macro("eloop_refire")
#undef eloop_refire
#pragma push_macro("sock_destroy")
#undef sock_destroy
#pragma push_macro("eloop_handle_sock_event")
#undef eloop_handle_sock_event
#pragma push_macro("eloop_thread_run")
#undef eloop_thread_run
#pragma push_macro("eloop_run")
#undef eloop_run
#pragma push_macro("eloop_minit")
#undef eloop_minit
#pragma push_macro("format_init")
#undef format_init
#pragma push_macro("format_reset")
#undef format_reset
#pragma push_macro("format_gets")
#undef format_gets
#pragma push_macro("format_vsf")
#undef format_vsf
#pragma push_macro("format_append")
#undef format_append
#pragma push_macro("format_sf")
#undef format_sf
#pragma push_macro("format_overwrite")
#undef format_overwrite
#pragma push_macro("ib_alloc")
#undef ib_alloc
#pragma push_macro("ib_retire")
#undef ib_retire
#pragma push_macro("ib_reset")
#undef ib_reset
#pragma push_macro("ib_set")
#undef ib_set
#pragma push_macro("ib_create")
#undef ib_create
#pragma push_macro("ib_replace")
#undef ib_replace
#pragma push_macro("ib_prepare_buffer")
#undef ib_prepare_buffer
#pragma push_macro("ib_read")
#undef ib_read
#pragma push_macro("dlink_t")
#undef dlink_t
#pragma push_macro("dlink_for")
#undef dlink_for
#pragma push_macro("format_t")
#undef format_t
#pragma push_macro("strf")
#undef strf
#pragma push_macro("g_format")
#undef g_format
#pragma push_macro("T2S")
#undef T2S
#pragma push_macro("eloop_t")
#undef eloop_t
#pragma push_macro("__ELOOP_CMD")
#undef __ELOOP_CMD
#pragma push_macro("__ELOOP_MODULE")
#undef __ELOOP_MODULE
#pragma push_macro("__ELOOP_INIT_FUNC")
#undef __ELOOP_INIT_FUNC
#pragma push_macro("EVLOOP")
#undef EVLOOP
#pragma push_macro("msg_decode")
#undef msg_decode
#pragma push_macro("msg_get_id")
#undef msg_get_id
#pragma push_macro("thread_func_t")
#undef thread_func_t
#pragma push_macro("thread_t")
#undef thread_t
#pragma push_macro("cur_thread_t")
#undef cur_thread_t
#pragma push_macro("prepare_therad")
#undef prepare_therad
#pragma push_macro("THREAD_ALLOC")
#undef THREAD_ALLOC
#pragma push_macro("THREAD")
#undef THREAD
#pragma push_macro("make_seq")
#undef make_seq
#pragma push_macro("gen_rand")
#undef gen_rand
#pragma push_macro("perf_thread_ctx_t")
#undef perf_thread_ctx_t
#pragma push_macro("__perf_loop_thread_func")
#undef __perf_loop_thread_func
#pragma push_macro("__prepare_hook")
#undef __prepare_hook
#pragma push_macro("perf_minit")
#undef perf_minit
#pragma push_macro("str_head")
#undef str_head
#pragma push_macro("get_us")
#undef get_us
#pragma push_macro("get_corse_us")
#undef get_corse_us
#pragma push_macro("mock_msg_check_t")
#undef mock_msg_check_t
#pragma push_macro("mock_msg_new")
#undef mock_msg_new
#pragma push_macro("mock_msg_check")
#undef mock_msg_check
#pragma push_macro("mock_msg_check_buf")
#undef mock_msg_check_buf
#pragma push_macro("mock_msg_check_iov")
#undef mock_msg_check_iov
#pragma push_macro("sock_debug_check_t")
#undef sock_debug_check_t
#pragma push_macro("sk_check_io")
#undef sk_check_io
#pragma push_macro("sk_check_iov")
#undef sk_check_iov
#pragma push_macro("smc_msg_t")
#undef smc_msg_t
#pragma push_macro("smc_handle_func_t")
#undef smc_handle_func_t
#pragma push_macro("smc_g_t")
#undef smc_g_t
#pragma push_macro("smc_cfg_t")
#undef smc_cfg_t
#pragma push_macro("smc_start")
#undef smc_start
#pragma push_macro("smc_post")
#undef smc_post
#pragma push_macro("__SMC_HANDLE_FUNC_DEF")
#undef __SMC_HANDLE_FUNC_DEF
#pragma push_macro("SMC")
#undef SMC
#pragma push_macro("listenfd_t")
#undef listenfd_t
#pragma push_macro("listenfd_init")
#undef listenfd_init
#pragma push_macro("mock_msg_init")
#undef mock_msg_init
#pragma push_macro("mock_msg_create")
#undef mock_msg_create
#pragma push_macro("msg_check_fail")
#undef msg_check_fail
#pragma push_macro("mock_msg_check_buf_one")
#undef mock_msg_check_buf_one
#pragma push_macro("smc_sk_t")
#undef smc_sk_t
#pragma push_macro("smc_sf_t")
#undef smc_sf_t
#pragma push_macro("smc_t")
#undef smc_t
#pragma push_macro("smc_flush_cb")
#undef smc_flush_cb
#pragma push_macro("smc_sk_do_decode")
#undef smc_sk_do_decode
#pragma push_macro("smc_sk_handle_msg")
#undef smc_sk_handle_msg
#pragma push_macro("smc_sk_init")
#undef smc_sk_init
#pragma push_macro("smc_sk_destroy")
#undef smc_sk_destroy
#pragma push_macro("smc_sf_do_init")
#undef smc_sf_do_init
#pragma push_macro("smc_do_post")
#undef smc_do_post
#pragma push_macro("smc_minit_cfg")
#undef smc_minit_cfg
#pragma push_macro("smc_do_init")
#undef smc_do_init
#pragma push_macro("smc_init_arg_t")
#undef smc_init_arg_t
#pragma push_macro("smc_cb_t")
#undef smc_cb_t
#pragma push_macro("smc_create")
#undef smc_create
#pragma push_macro("smc_cur_resp")
#undef smc_cur_resp
#pragma push_macro("smc_decode")
#undef smc_decode
#pragma push_macro("smc_do_cb")
#undef smc_do_cb
#pragma push_macro("smc_do_cb_exception")
#undef smc_do_cb_exception
#pragma push_macro("smc_do_connect")
#undef smc_do_connect
#pragma push_macro("smc_evfd_cb")
#undef smc_evfd_cb
#pragma push_macro("smc_flush_cb_after_flush")
#undef smc_flush_cb_after_flush
#pragma push_macro("smc_flush_cb_exception")
#undef smc_flush_cb_exception
#pragma push_macro("smc_flush_cb_on_post_fail")
#undef smc_flush_cb_on_post_fail
#pragma push_macro("smc_get_id")
#undef smc_get_id
#pragma push_macro("smc_get_sk")
#undef smc_get_sk
#pragma push_macro("smc_handle_one_req")
#undef smc_handle_one_req
#pragma push_macro("smc_handle_req_queue")
#undef smc_handle_req_queue
#pragma push_macro("smc_init")
#undef smc_init
#pragma push_macro("smc_minit")
#undef smc_minit
#pragma push_macro("smc_post_async")
#undef smc_post_async
#pragma push_macro("smc_post_io")
#undef smc_post_io
#pragma push_macro("smc_req_dispatch")
#undef smc_req_dispatch
#pragma push_macro("smc_req_t")
#undef smc_req_t
#pragma push_macro("smc_resp_cb_on_msg")
#undef smc_resp_cb_on_msg
#pragma push_macro("smc_resp_cb_on_post_fail")
#undef smc_resp_cb_on_post_fail
#pragma push_macro("smc_resp_cb_on_sk_destroy")
#undef smc_resp_cb_on_sk_destroy
#pragma push_macro("smc_resp_cb_on_timeout")
#undef smc_resp_cb_on_timeout
#pragma push_macro("smc_select_thread")
#undef smc_select_thread
#pragma push_macro("smc_sf_init")
#undef smc_sf_init
#pragma push_macro("smc_sk_alloc")
#undef smc_sk_alloc
#pragma push_macro("smc_sk_check_connect")
#undef smc_sk_check_connect
#pragma push_macro("smc_sk_consume")
#undef smc_sk_consume
#pragma push_macro("smc_sk_delete")
#undef smc_sk_delete
#pragma push_macro("smc_sk_do_flush")
#undef smc_sk_do_flush
#pragma push_macro("smc_sk_flush")
#undef smc_sk_flush
#pragma push_macro("smc_sk_free")
#undef smc_sk_free
#pragma push_macro("smc_sk_handle_event")
#undef smc_sk_handle_event
#pragma push_macro("smc_sk_handle_event_ready")
#undef smc_sk_handle_event_ready
#pragma push_macro("smc_sk_msg_done")
#undef smc_sk_msg_done
#pragma push_macro("smc_sk_new")
#undef smc_sk_new
#pragma push_macro("smc_sk_read")
#undef smc_sk_read
#pragma push_macro("smc_thread_work")
#undef smc_thread_work
#pragma push_macro("smc_try_connect")
#undef smc_try_connect
#pragma push_macro("smc_write_queue_on_sk_destroy")
#undef smc_write_queue_on_sk_destroy
#pragma push_macro("queue_init")
#undef queue_init
#pragma push_macro("queue_push")
#undef queue_push
#pragma push_macro("queue_pop")
#undef queue_pop
#pragma push_macro("queue_top")
#undef queue_top
#pragma push_macro("queue_empty")
#undef queue_empty
#pragma push_macro("queue_set")
#undef queue_set
#pragma push_macro("__rb_read_tbuffer")
#undef __rb_read_tbuffer
#pragma push_macro("__rb_write_tbuffer")
#undef __rb_write_tbuffer
#pragma push_macro("rb_init")
#undef rb_init
#pragma push_macro("rb_size")
#undef rb_size
#pragma push_macro("rb_alloc")
#undef rb_alloc
#pragma push_macro("rb_ready")
#undef rb_ready
#pragma push_macro("rb_read")
#undef rb_read
#pragma push_macro("rb_read_for_io")
#undef rb_read_for_io
#pragma push_macro("rb_consumed")
#undef rb_consumed
#pragma push_macro("rb_iov_alloc")
#undef rb_iov_alloc
#pragma push_macro("rb_iov_ready")
#undef rb_iov_ready
#pragma push_macro("rb_iov_read")
#undef rb_iov_read
#pragma push_macro("queue_t")
#undef queue_t
#pragma push_macro("STREAM_IO")
#undef STREAM_IO
#pragma push_macro("MSG_IO")
#undef MSG_IO
#pragma push_macro("PACKET_IO")
#undef PACKET_IO
#pragma push_macro("__align")
#undef __align
#pragma push_macro("__padding")
#undef __padding
#pragma push_macro("__mask")
#undef __mask
#pragma push_macro("__rb_is_wrap")
#undef __rb_is_wrap
#pragma push_macro("__rb_pos")
#undef __rb_pos
#pragma push_macro("__rb_copy_to")
#undef __rb_copy_to
#pragma push_macro("__rb_copy_from")
#undef __rb_copy_from
#pragma push_macro("rb_get_read_tbuffer")
#undef rb_get_read_tbuffer
#pragma push_macro("rb_get_write_tbuffer")
#undef rb_get_write_tbuffer
#pragma push_macro("rb_fill_iov")
#undef rb_fill_iov
#pragma push_macro("addr_t")
#undef addr_t
#pragma push_macro("check_connect_result")
#undef check_connect_result
#pragma push_macro("async_connect")
#undef async_connect
#pragma push_macro("listen_create")
#undef listen_create
#pragma push_macro("tcp_accept")
#undef tcp_accept
#pragma push_macro("set_tcp_reuse_addr")
#undef set_tcp_reuse_addr
#pragma push_macro("set_tcp_linger_on")
#undef set_tcp_linger_on
#pragma push_macro("set_tcp_nodelay")
#undef set_tcp_nodelay
#pragma push_macro("set_tcp_recv_buf")
#undef set_tcp_recv_buf
#pragma push_macro("set_tcp_send_buf")
#undef set_tcp_send_buf
#pragma push_macro("sock_fd_str")
#undef sock_fd_str
#pragma push_macro("idm_item_t")
#undef idm_item_t
#pragma push_macro("idm_t")
#undef idm_t
#pragma push_macro("idm_init")
#undef idm_init
#pragma push_macro("idm_get")
#undef idm_get
#pragma push_macro("idm_set")
#undef idm_set
#pragma push_macro("idm_del")
#undef idm_del
#pragma push_macro("fixed_queue_t")
#undef fixed_queue_t
#pragma push_macro("fixed_queue_init")
#undef fixed_queue_init
#pragma push_macro("fixed_queue_push")
#undef fixed_queue_push
#pragma push_macro("fixed_queue_pop")
#undef fixed_queue_pop
#pragma push_macro("hash_t")
#undef hash_t
#pragma push_macro("hash_create")
#undef hash_create
#pragma push_macro("hash_init")
#undef hash_init
#pragma push_macro("hash_insert")
#undef hash_insert
#pragma push_macro("hash_del")
#undef hash_del
#pragma push_macro("hash_get")
#undef hash_get
#pragma push_macro("atomic_msg_t")
#undef atomic_msg_t
#pragma push_macro("atomic_msg_init")
#undef atomic_msg_init
#pragma push_macro("atomic_msg_read")
#undef atomic_msg_read
#pragma push_macro("atomic_msg_write")
#undef atomic_msg_write
#pragma push_macro("do_log")
#undef do_log
#pragma push_macro("gettid")
#undef gettid
#pragma push_macro("get_log_level_str")
#undef get_log_level_str
#pragma push_macro("format_ts")
#undef format_ts
#pragma push_macro("log_print")
#undef log_print
#pragma push_macro("default_log_func")
#undef default_log_func
#pragma push_macro("g_log_level")
#undef g_log_level
#pragma push_macro("g_log_func")
#undef g_log_func
#pragma push_macro("__hash_calc")
#undef __hash_calc
#pragma push_macro("__hash_locate")
#undef __hash_locate
#pragma push_macro("__hash_cmp")
#undef __hash_cmp
#pragma push_macro("__hash_list_search")
#undef __hash_list_search
#pragma push_macro("log_macro")
#undef log_macro
#pragma push_macro("error")
#undef error
#pragma push_macro("info")
#undef info
#pragma push_macro("fatal")
#undef fatal
#pragma push_macro("lbt")
#undef lbt
#pragma push_macro("idm_locate")
#undef idm_locate
#pragma push_macro("idm_item_recycle")
#undef idm_item_recycle
#pragma push_macro("sc_queue_init")
#undef sc_queue_init
#pragma push_macro("sc_queue_top")
#undef sc_queue_top
#pragma push_macro("sc_queue_push")
#undef sc_queue_push
#pragma push_macro("sc_queue_pop")
#undef sc_queue_pop
#pragma push_macro("timerfd_t")
#undef timerfd_t
#pragma push_macro("listenfd_handle_event")
#undef listenfd_handle_event
#pragma push_macro("parray")
#undef parray
#pragma push_macro("sc_queue_t")
#undef sc_queue_t
#define counter_add rk_counter_add // counter_add ./fw/count.h:6 inline void counter_add(counter_t* counter, int64_t x) { counter->count[cth.id][0] += x; }
#define counter_fetch rk_counter_fetch // counter_fetch ./fw/count.h:7 inline int64_t counter_fetch(counter_t* counter) {
#define __counter_report __rk_counter_report // __counter_report ./fw/count.h:16 inline void __counter_report(const char* msg, counter_t* cnt) {
#define page_t rk_page_t // page_t ./alloc/pool.c:1 typedef struct page_t {
#define pool_direct_alloc rk_pool_direct_alloc // pool_direct_alloc ./alloc/pool.c:7 static void* pool_direct_alloc(int64_t sz) {
#define pool_direct_free rk_pool_direct_free // pool_direct_free ./alloc/pool.c:11 static void pool_direct_free(void* p) {
#define page_create rk_page_create // page_create ./alloc/pool.c:16 page_t* page_create(int64_t sz) {
#define page_alloc rk_page_alloc // page_alloc ./alloc/pool.c:25 void* page_alloc(page_t* p, int64_t sz) {
#define pool_create rk_pool_create // pool_create ./alloc/pool.c:34 pool_t* pool_create(int64_t sz) {
#define pool_destroy rk_pool_destroy // pool_destroy ./alloc/pool.c:45 void pool_destroy(pool_t* pool) {
#define pool_tail_page rk_pool_tail_page // pool_tail_page ./alloc/pool.c:52 static page_t* pool_tail_page(pool_t* pool) {
#define pool_alloc rk_pool_alloc // pool_alloc ./alloc/pool.c:56 void* pool_alloc(pool_t* pool, int64_t sz) {
#define pool_t rk_pool_t // pool_t ./alloc/pool.h:1 typedef struct pool_t {
#define str_next rk_str_next // str_next ./str/str_next.h:1 extern const char* str_next(const char* s);
#define skset rk_skset // skset ./io/sock.c:1 extern inline void skset(sock_t* s, uint32_t m);
#define skclear rk_skclear // skclear ./io/sock.c:2 extern inline void skclear(sock_t* s, uint32_t m);
#define sktest rk_sktest // sktest ./io/sock.c:3 extern inline bool sktest(sock_t* s, uint32_t m);
#define sf_init rk_sf_init // sf_init ./io/sock.c:5 void sf_init(sf_t* sf, void* create, void* destroy) {
#define sk_init rk_sk_init // sk_init ./io/sock.c:10 void sk_init(sock_t* s, sf_t* sf, void* handle_event, int fd) {
#define pktc_wait_cb rk_pktc_wait_cb // pktc_wait_cb ./nio/packet_client_wait.c:1 extern void pktc_wait_cb(const char* b, int64_t s, void* arg);
#define pktc_wait rk_pktc_wait // pktc_wait ./nio/packet_client_wait.c:2 extern char* pktc_wait(pktc_wait_t* w, int64_t* sz);
#define strms_sk_t rk_strms_sk_t // strms_sk_t ./nio/stream_server.h:3 typedef struct strms_sk_t {
#define strms_sf_t rk_strms_sf_t // strms_sf_t ./nio/stream_server.h:11 typedef struct strms_sf_t {
#define strms_t rk_strms_t // strms_t ./nio/stream_server.h:17 typedef struct strms_t {
#define strms_init rk_strms_init // strms_init ./nio/stream_server.h:24 extern int strms_init(strms_t* svr, addr_t addr, strms_read_func_t read);
#define strms_signal rk_strms_signal // strms_signal ./nio/stream_server.h:25 extern void strms_signal(strms_t* svr);
#define pktc_sk_t rk_pktc_sk_t // pktc_sk_t ./nio/packet_client.c:1 typedef struct pktc_sk_t {
#define pktc_sf_t rk_pktc_sf_t // pktc_sf_t ./nio/packet_client.c:10 typedef struct pktc_sf_t {
#define pktc_t rk_pktc_t // pktc_t ./nio/packet_client.c:14 typedef struct pktc_t {
#define pktc_msg_t rk_pktc_msg_t // pktc_msg_t ./nio/packet_client.c:29 typedef struct pktc_msg_t {
#define pktc_decode rk_pktc_decode // pktc_decode ./nio/packet_client.c:34 static int64_t pktc_decode(char* b, int64_t s) { return msg_decode(b, s);}
#define pktc_get_id rk_pktc_get_id // pktc_get_id ./nio/packet_client.c:35 static uint64_t pktc_get_id(pktc_msg_t* m) { return msg_get_id(m->payload); }
#define pktc_sk_read rk_pktc_sk_read // pktc_sk_read ./nio/packet_client.c:37 static int pktc_sk_read(void** b, pktc_sk_t* s, int64_t sz) {
#define pktc_flush_cb rk_pktc_flush_cb // pktc_flush_cb ./nio/packet_client.c:41 static void pktc_flush_cb(pktc_t* io, pktc_req_t* req) {
#define pktc_do_cb rk_pktc_do_cb // pktc_do_cb ./nio/packet_client.c:45 static void pktc_do_cb(pktc_cb_t* cb, pktc_msg_t* m) {
#define pktc_do_cb_exception rk_pktc_do_cb_exception // pktc_do_cb_exception ./nio/packet_client.c:49 static void pktc_do_cb_exception(pktc_cb_t* cb) {
#define pktc_sk_msg_done rk_pktc_sk_msg_done // pktc_sk_msg_done ./nio/packet_client.c:53 static void pktc_sk_msg_done(pktc_sk_t* s, pktc_msg_t* m) {
#define pktc_sk_init rk_pktc_sk_init // pktc_sk_init ./nio/packet_client.c:57 static int pktc_sk_init(pktc_sf_t* sf, pktc_sk_t* s) {
#define pktc_sk_destroy rk_pktc_sk_destroy // pktc_sk_destroy ./nio/packet_client.c:65 static void pktc_sk_destroy(pktc_sf_t* sf, pktc_sk_t* s) {
#define pktc_sf_do_init rk_pktc_sf_do_init // pktc_sf_do_init ./nio/packet_client.c:70 static int pktc_sf_do_init(pktc_sf_t* sf, void* arg) {
#define pktc_req_dispatch rk_pktc_req_dispatch // pktc_req_dispatch ./nio/packet_client.c:75 static void pktc_req_dispatch(pktc_sk_t* sk, pktc_req_t* r) {
#define pktc_minit_cfg rk_pktc_minit_cfg // pktc_minit_cfg ./nio/packet_client.c:79 static int pktc_minit_cfg(pktc_cfg_t* cfg, const char* name) {
#define pktc_do_init rk_pktc_do_init // pktc_do_init ./nio/packet_client.c:84 static int pktc_do_init(pktc_t* cl, pktc_cfg_t* cfg) {
#define pktc_cb_t rk_pktc_cb_t // pktc_cb_t ./nio/packet_client.c:97 #include "nio.t.h.gen" // #global: pktc_cb_t pktc_cfg_t pktc_create pktc_cur_resp pktc_decode pktc_do_cb pktc_do_cb_exception pktc_do_connect pktc_do_init pktc_do_post pktc_evfd_cb pktc_flush_cb pktc_flush_cb_after_flush pktc_flush_cb_exception pktc_flush_cb_on_post_fail pktc_g_t pktc_get_id pktc_get_sk pktc_handle_one_req pktc_handle_req_queue pktc_init pktc_minit pktc_minit_cfg pktc_msg_t pktc_post pktc_post_async pktc_post_io pktc_req_dispatch pktc_req_t pktc_resp_cb_on_msg pktc_resp_cb_on_post_fail pktc_resp_cb_on_sk_destroy pktc_resp_cb_on_timeout pktc_select_thread pktc_sf_do_init pktc_sf_init pktc_sf_t pktc_sk_alloc pktc_sk_check_connect pktc_sk_consume pktc_sk_delete pktc_sk_destroy pktc_sk_do_decode pktc_sk_do_flush pktc_sk_flush pktc_sk_free pktc_sk_handle_event pktc_sk_handle_event_ready pktc_sk_handle_msg pktc_sk_init pktc_sk_msg_done pktc_sk_new pktc_sk_read pktc_sk_t pktc_start pktc_t pktc_thread_work pktc_try_connect pktc_write_queue_on_sk_destroy
#define pktc_cfg_t rk_pktc_cfg_t // pktc_cfg_t ./nio/packet_client.c:97 #include "nio.t.h.gen" // #global: pktc_cb_t pktc_cfg_t pktc_create pktc_cur_resp pktc_decode pktc_do_cb pktc_do_cb_exception pktc_do_connect pktc_do_init pktc_do_post pktc_evfd_cb pktc_flush_cb pktc_flush_cb_after_flush pktc_flush_cb_exception pktc_flush_cb_on_post_fail pktc_g_t pktc_get_id pktc_get_sk pktc_handle_one_req pktc_handle_req_queue pktc_init pktc_minit pktc_minit_cfg pktc_msg_t pktc_post pktc_post_async pktc_post_io pktc_req_dispatch pktc_req_t pktc_resp_cb_on_msg pktc_resp_cb_on_post_fail pktc_resp_cb_on_sk_destroy pktc_resp_cb_on_timeout pktc_select_thread pktc_sf_do_init pktc_sf_init pktc_sf_t pktc_sk_alloc pktc_sk_check_connect pktc_sk_consume pktc_sk_delete pktc_sk_destroy pktc_sk_do_decode pktc_sk_do_flush pktc_sk_flush pktc_sk_free pktc_sk_handle_event pktc_sk_handle_event_ready pktc_sk_handle_msg pktc_sk_init pktc_sk_msg_done pktc_sk_new pktc_sk_read pktc_sk_t pktc_start pktc_t pktc_thread_work pktc_try_connect pktc_write_queue_on_sk_destroy
#define pktc_create rk_pktc_create // pktc_create ./nio/packet_client.c:97 #include "nio.t.h.gen" // #global: pktc_cb_t pktc_cfg_t pktc_create pktc_cur_resp pktc_decode pktc_do_cb pktc_do_cb_exception pktc_do_connect pktc_do_init pktc_do_post pktc_evfd_cb pktc_flush_cb pktc_flush_cb_after_flush pktc_flush_cb_exception pktc_flush_cb_on_post_fail pktc_g_t pktc_get_id pktc_get_sk pktc_handle_one_req pktc_handle_req_queue pktc_init pktc_minit pktc_minit_cfg pktc_msg_t pktc_post pktc_post_async pktc_post_io pktc_req_dispatch pktc_req_t pktc_resp_cb_on_msg pktc_resp_cb_on_post_fail pktc_resp_cb_on_sk_destroy pktc_resp_cb_on_timeout pktc_select_thread pktc_sf_do_init pktc_sf_init pktc_sf_t pktc_sk_alloc pktc_sk_check_connect pktc_sk_consume pktc_sk_delete pktc_sk_destroy pktc_sk_do_decode pktc_sk_do_flush pktc_sk_flush pktc_sk_free pktc_sk_handle_event pktc_sk_handle_event_ready pktc_sk_handle_msg pktc_sk_init pktc_sk_msg_done pktc_sk_new pktc_sk_read pktc_sk_t pktc_start pktc_t pktc_thread_work pktc_try_connect pktc_write_queue_on_sk_destroy
#define pktc_cur_resp rk_pktc_cur_resp // pktc_cur_resp ./nio/packet_client.c:97 #include "nio.t.h.gen" // #global: pktc_cb_t pktc_cfg_t pktc_create pktc_cur_resp pktc_decode pktc_do_cb pktc_do_cb_exception pktc_do_connect pktc_do_init pktc_do_post pktc_evfd_cb pktc_flush_cb pktc_flush_cb_after_flush pktc_flush_cb_exception pktc_flush_cb_on_post_fail pktc_g_t pktc_get_id pktc_get_sk pktc_handle_one_req pktc_handle_req_queue pktc_init pktc_minit pktc_minit_cfg pktc_msg_t pktc_post pktc_post_async pktc_post_io pktc_req_dispatch pktc_req_t pktc_resp_cb_on_msg pktc_resp_cb_on_post_fail pktc_resp_cb_on_sk_destroy pktc_resp_cb_on_timeout pktc_select_thread pktc_sf_do_init pktc_sf_init pktc_sf_t pktc_sk_alloc pktc_sk_check_connect pktc_sk_consume pktc_sk_delete pktc_sk_destroy pktc_sk_do_decode pktc_sk_do_flush pktc_sk_flush pktc_sk_free pktc_sk_handle_event pktc_sk_handle_event_ready pktc_sk_handle_msg pktc_sk_init pktc_sk_msg_done pktc_sk_new pktc_sk_read pktc_sk_t pktc_start pktc_t pktc_thread_work pktc_try_connect pktc_write_queue_on_sk_destroy
#define pktc_do_connect rk_pktc_do_connect // pktc_do_connect ./nio/packet_client.c:97 #include "nio.t.h.gen" // #global: pktc_cb_t pktc_cfg_t pktc_create pktc_cur_resp pktc_decode pktc_do_cb pktc_do_cb_exception pktc_do_connect pktc_do_init pktc_do_post pktc_evfd_cb pktc_flush_cb pktc_flush_cb_after_flush pktc_flush_cb_exception pktc_flush_cb_on_post_fail pktc_g_t pktc_get_id pktc_get_sk pktc_handle_one_req pktc_handle_req_queue pktc_init pktc_minit pktc_minit_cfg pktc_msg_t pktc_post pktc_post_async pktc_post_io pktc_req_dispatch pktc_req_t pktc_resp_cb_on_msg pktc_resp_cb_on_post_fail pktc_resp_cb_on_sk_destroy pktc_resp_cb_on_timeout pktc_select_thread pktc_sf_do_init pktc_sf_init pktc_sf_t pktc_sk_alloc pktc_sk_check_connect pktc_sk_consume pktc_sk_delete pktc_sk_destroy pktc_sk_do_decode pktc_sk_do_flush pktc_sk_flush pktc_sk_free pktc_sk_handle_event pktc_sk_handle_event_ready pktc_sk_handle_msg pktc_sk_init pktc_sk_msg_done pktc_sk_new pktc_sk_read pktc_sk_t pktc_start pktc_t pktc_thread_work pktc_try_connect pktc_write_queue_on_sk_destroy
#define pktc_do_post rk_pktc_do_post // pktc_do_post ./nio/packet_client.c:97 #include "nio.t.h.gen" // #global: pktc_cb_t pktc_cfg_t pktc_create pktc_cur_resp pktc_decode pktc_do_cb pktc_do_cb_exception pktc_do_connect pktc_do_init pktc_do_post pktc_evfd_cb pktc_flush_cb pktc_flush_cb_after_flush pktc_flush_cb_exception pktc_flush_cb_on_post_fail pktc_g_t pktc_get_id pktc_get_sk pktc_handle_one_req pktc_handle_req_queue pktc_init pktc_minit pktc_minit_cfg pktc_msg_t pktc_post pktc_post_async pktc_post_io pktc_req_dispatch pktc_req_t pktc_resp_cb_on_msg pktc_resp_cb_on_post_fail pktc_resp_cb_on_sk_destroy pktc_resp_cb_on_timeout pktc_select_thread pktc_sf_do_init pktc_sf_init pktc_sf_t pktc_sk_alloc pktc_sk_check_connect pktc_sk_consume pktc_sk_delete pktc_sk_destroy pktc_sk_do_decode pktc_sk_do_flush pktc_sk_flush pktc_sk_free pktc_sk_handle_event pktc_sk_handle_event_ready pktc_sk_handle_msg pktc_sk_init pktc_sk_msg_done pktc_sk_new pktc_sk_read pktc_sk_t pktc_start pktc_t pktc_thread_work pktc_try_connect pktc_write_queue_on_sk_destroy
#define pktc_evfd_cb rk_pktc_evfd_cb // pktc_evfd_cb ./nio/packet_client.c:97 #include "nio.t.h.gen" // #global: pktc_cb_t pktc_cfg_t pktc_create pktc_cur_resp pktc_decode pktc_do_cb pktc_do_cb_exception pktc_do_connect pktc_do_init pktc_do_post pktc_evfd_cb pktc_flush_cb pktc_flush_cb_after_flush pktc_flush_cb_exception pktc_flush_cb_on_post_fail pktc_g_t pktc_get_id pktc_get_sk pktc_handle_one_req pktc_handle_req_queue pktc_init pktc_minit pktc_minit_cfg pktc_msg_t pktc_post pktc_post_async pktc_post_io pktc_req_dispatch pktc_req_t pktc_resp_cb_on_msg pktc_resp_cb_on_post_fail pktc_resp_cb_on_sk_destroy pktc_resp_cb_on_timeout pktc_select_thread pktc_sf_do_init pktc_sf_init pktc_sf_t pktc_sk_alloc pktc_sk_check_connect pktc_sk_consume pktc_sk_delete pktc_sk_destroy pktc_sk_do_decode pktc_sk_do_flush pktc_sk_flush pktc_sk_free pktc_sk_handle_event pktc_sk_handle_event_ready pktc_sk_handle_msg pktc_sk_init pktc_sk_msg_done pktc_sk_new pktc_sk_read pktc_sk_t pktc_start pktc_t pktc_thread_work pktc_try_connect pktc_write_queue_on_sk_destroy
#define pktc_flush_cb_after_flush rk_pktc_flush_cb_after_flush // pktc_flush_cb_after_flush ./nio/packet_client.c:97 #include "nio.t.h.gen" // #global: pktc_cb_t pktc_cfg_t pktc_create pktc_cur_resp pktc_decode pktc_do_cb pktc_do_cb_exception pktc_do_connect pktc_do_init pktc_do_post pktc_evfd_cb pktc_flush_cb pktc_flush_cb_after_flush pktc_flush_cb_exception pktc_flush_cb_on_post_fail pktc_g_t pktc_get_id pktc_get_sk pktc_handle_one_req pktc_handle_req_queue pktc_init pktc_minit pktc_minit_cfg pktc_msg_t pktc_post pktc_post_async pktc_post_io pktc_req_dispatch pktc_req_t pktc_resp_cb_on_msg pktc_resp_cb_on_post_fail pktc_resp_cb_on_sk_destroy pktc_resp_cb_on_timeout pktc_select_thread pktc_sf_do_init pktc_sf_init pktc_sf_t pktc_sk_alloc pktc_sk_check_connect pktc_sk_consume pktc_sk_delete pktc_sk_destroy pktc_sk_do_decode pktc_sk_do_flush pktc_sk_flush pktc_sk_free pktc_sk_handle_event pktc_sk_handle_event_ready pktc_sk_handle_msg pktc_sk_init pktc_sk_msg_done pktc_sk_new pktc_sk_read pktc_sk_t pktc_start pktc_t pktc_thread_work pktc_try_connect pktc_write_queue_on_sk_destroy
#define pktc_flush_cb_exception rk_pktc_flush_cb_exception // pktc_flush_cb_exception ./nio/packet_client.c:97 #include "nio.t.h.gen" // #global: pktc_cb_t pktc_cfg_t pktc_create pktc_cur_resp pktc_decode pktc_do_cb pktc_do_cb_exception pktc_do_connect pktc_do_init pktc_do_post pktc_evfd_cb pktc_flush_cb pktc_flush_cb_after_flush pktc_flush_cb_exception pktc_flush_cb_on_post_fail pktc_g_t pktc_get_id pktc_get_sk pktc_handle_one_req pktc_handle_req_queue pktc_init pktc_minit pktc_minit_cfg pktc_msg_t pktc_post pktc_post_async pktc_post_io pktc_req_dispatch pktc_req_t pktc_resp_cb_on_msg pktc_resp_cb_on_post_fail pktc_resp_cb_on_sk_destroy pktc_resp_cb_on_timeout pktc_select_thread pktc_sf_do_init pktc_sf_init pktc_sf_t pktc_sk_alloc pktc_sk_check_connect pktc_sk_consume pktc_sk_delete pktc_sk_destroy pktc_sk_do_decode pktc_sk_do_flush pktc_sk_flush pktc_sk_free pktc_sk_handle_event pktc_sk_handle_event_ready pktc_sk_handle_msg pktc_sk_init pktc_sk_msg_done pktc_sk_new pktc_sk_read pktc_sk_t pktc_start pktc_t pktc_thread_work pktc_try_connect pktc_write_queue_on_sk_destroy
#define pktc_flush_cb_on_post_fail rk_pktc_flush_cb_on_post_fail // pktc_flush_cb_on_post_fail ./nio/packet_client.c:97 #include "nio.t.h.gen" // #global: pktc_cb_t pktc_cfg_t pktc_create pktc_cur_resp pktc_decode pktc_do_cb pktc_do_cb_exception pktc_do_connect pktc_do_init pktc_do_post pktc_evfd_cb pktc_flush_cb pktc_flush_cb_after_flush pktc_flush_cb_exception pktc_flush_cb_on_post_fail pktc_g_t pktc_get_id pktc_get_sk pktc_handle_one_req pktc_handle_req_queue pktc_init pktc_minit pktc_minit_cfg pktc_msg_t pktc_post pktc_post_async pktc_post_io pktc_req_dispatch pktc_req_t pktc_resp_cb_on_msg pktc_resp_cb_on_post_fail pktc_resp_cb_on_sk_destroy pktc_resp_cb_on_timeout pktc_select_thread pktc_sf_do_init pktc_sf_init pktc_sf_t pktc_sk_alloc pktc_sk_check_connect pktc_sk_consume pktc_sk_delete pktc_sk_destroy pktc_sk_do_decode pktc_sk_do_flush pktc_sk_flush pktc_sk_free pktc_sk_handle_event pktc_sk_handle_event_ready pktc_sk_handle_msg pktc_sk_init pktc_sk_msg_done pktc_sk_new pktc_sk_read pktc_sk_t pktc_start pktc_t pktc_thread_work pktc_try_connect pktc_write_queue_on_sk_destroy
#define pktc_g_t rk_pktc_g_t // pktc_g_t ./nio/packet_client.c:97 #include "nio.t.h.gen" // #global: pktc_cb_t pktc_cfg_t pktc_create pktc_cur_resp pktc_decode pktc_do_cb pktc_do_cb_exception pktc_do_connect pktc_do_init pktc_do_post pktc_evfd_cb pktc_flush_cb pktc_flush_cb_after_flush pktc_flush_cb_exception pktc_flush_cb_on_post_fail pktc_g_t pktc_get_id pktc_get_sk pktc_handle_one_req pktc_handle_req_queue pktc_init pktc_minit pktc_minit_cfg pktc_msg_t pktc_post pktc_post_async pktc_post_io pktc_req_dispatch pktc_req_t pktc_resp_cb_on_msg pktc_resp_cb_on_post_fail pktc_resp_cb_on_sk_destroy pktc_resp_cb_on_timeout pktc_select_thread pktc_sf_do_init pktc_sf_init pktc_sf_t pktc_sk_alloc pktc_sk_check_connect pktc_sk_consume pktc_sk_delete pktc_sk_destroy pktc_sk_do_decode pktc_sk_do_flush pktc_sk_flush pktc_sk_free pktc_sk_handle_event pktc_sk_handle_event_ready pktc_sk_handle_msg pktc_sk_init pktc_sk_msg_done pktc_sk_new pktc_sk_read pktc_sk_t pktc_start pktc_t pktc_thread_work pktc_try_connect pktc_write_queue_on_sk_destroy
#define pktc_get_sk rk_pktc_get_sk // pktc_get_sk ./nio/packet_client.c:97 #include "nio.t.h.gen" // #global: pktc_cb_t pktc_cfg_t pktc_create pktc_cur_resp pktc_decode pktc_do_cb pktc_do_cb_exception pktc_do_connect pktc_do_init pktc_do_post pktc_evfd_cb pktc_flush_cb pktc_flush_cb_after_flush pktc_flush_cb_exception pktc_flush_cb_on_post_fail pktc_g_t pktc_get_id pktc_get_sk pktc_handle_one_req pktc_handle_req_queue pktc_init pktc_minit pktc_minit_cfg pktc_msg_t pktc_post pktc_post_async pktc_post_io pktc_req_dispatch pktc_req_t pktc_resp_cb_on_msg pktc_resp_cb_on_post_fail pktc_resp_cb_on_sk_destroy pktc_resp_cb_on_timeout pktc_select_thread pktc_sf_do_init pktc_sf_init pktc_sf_t pktc_sk_alloc pktc_sk_check_connect pktc_sk_consume pktc_sk_delete pktc_sk_destroy pktc_sk_do_decode pktc_sk_do_flush pktc_sk_flush pktc_sk_free pktc_sk_handle_event pktc_sk_handle_event_ready pktc_sk_handle_msg pktc_sk_init pktc_sk_msg_done pktc_sk_new pktc_sk_read pktc_sk_t pktc_start pktc_t pktc_thread_work pktc_try_connect pktc_write_queue_on_sk_destroy
#define pktc_handle_one_req rk_pktc_handle_one_req // pktc_handle_one_req ./nio/packet_client.c:97 #include "nio.t.h.gen" // #global: pktc_cb_t pktc_cfg_t pktc_create pktc_cur_resp pktc_decode pktc_do_cb pktc_do_cb_exception pktc_do_connect pktc_do_init pktc_do_post pktc_evfd_cb pktc_flush_cb pktc_flush_cb_after_flush pktc_flush_cb_exception pktc_flush_cb_on_post_fail pktc_g_t pktc_get_id pktc_get_sk pktc_handle_one_req pktc_handle_req_queue pktc_init pktc_minit pktc_minit_cfg pktc_msg_t pktc_post pktc_post_async pktc_post_io pktc_req_dispatch pktc_req_t pktc_resp_cb_on_msg pktc_resp_cb_on_post_fail pktc_resp_cb_on_sk_destroy pktc_resp_cb_on_timeout pktc_select_thread pktc_sf_do_init pktc_sf_init pktc_sf_t pktc_sk_alloc pktc_sk_check_connect pktc_sk_consume pktc_sk_delete pktc_sk_destroy pktc_sk_do_decode pktc_sk_do_flush pktc_sk_flush pktc_sk_free pktc_sk_handle_event pktc_sk_handle_event_ready pktc_sk_handle_msg pktc_sk_init pktc_sk_msg_done pktc_sk_new pktc_sk_read pktc_sk_t pktc_start pktc_t pktc_thread_work pktc_try_connect pktc_write_queue_on_sk_destroy
#define pktc_handle_req_queue rk_pktc_handle_req_queue // pktc_handle_req_queue ./nio/packet_client.c:97 #include "nio.t.h.gen" // #global: pktc_cb_t pktc_cfg_t pktc_create pktc_cur_resp pktc_decode pktc_do_cb pktc_do_cb_exception pktc_do_connect pktc_do_init pktc_do_post pktc_evfd_cb pktc_flush_cb pktc_flush_cb_after_flush pktc_flush_cb_exception pktc_flush_cb_on_post_fail pktc_g_t pktc_get_id pktc_get_sk pktc_handle_one_req pktc_handle_req_queue pktc_init pktc_minit pktc_minit_cfg pktc_msg_t pktc_post pktc_post_async pktc_post_io pktc_req_dispatch pktc_req_t pktc_resp_cb_on_msg pktc_resp_cb_on_post_fail pktc_resp_cb_on_sk_destroy pktc_resp_cb_on_timeout pktc_select_thread pktc_sf_do_init pktc_sf_init pktc_sf_t pktc_sk_alloc pktc_sk_check_connect pktc_sk_consume pktc_sk_delete pktc_sk_destroy pktc_sk_do_decode pktc_sk_do_flush pktc_sk_flush pktc_sk_free pktc_sk_handle_event pktc_sk_handle_event_ready pktc_sk_handle_msg pktc_sk_init pktc_sk_msg_done pktc_sk_new pktc_sk_read pktc_sk_t pktc_start pktc_t pktc_thread_work pktc_try_connect pktc_write_queue_on_sk_destroy
#define pktc_init rk_pktc_init // pktc_init ./nio/packet_client.c:97 #include "nio.t.h.gen" // #global: pktc_cb_t pktc_cfg_t pktc_create pktc_cur_resp pktc_decode pktc_do_cb pktc_do_cb_exception pktc_do_connect pktc_do_init pktc_do_post pktc_evfd_cb pktc_flush_cb pktc_flush_cb_after_flush pktc_flush_cb_exception pktc_flush_cb_on_post_fail pktc_g_t pktc_get_id pktc_get_sk pktc_handle_one_req pktc_handle_req_queue pktc_init pktc_minit pktc_minit_cfg pktc_msg_t pktc_post pktc_post_async pktc_post_io pktc_req_dispatch pktc_req_t pktc_resp_cb_on_msg pktc_resp_cb_on_post_fail pktc_resp_cb_on_sk_destroy pktc_resp_cb_on_timeout pktc_select_thread pktc_sf_do_init pktc_sf_init pktc_sf_t pktc_sk_alloc pktc_sk_check_connect pktc_sk_consume pktc_sk_delete pktc_sk_destroy pktc_sk_do_decode pktc_sk_do_flush pktc_sk_flush pktc_sk_free pktc_sk_handle_event pktc_sk_handle_event_ready pktc_sk_handle_msg pktc_sk_init pktc_sk_msg_done pktc_sk_new pktc_sk_read pktc_sk_t pktc_start pktc_t pktc_thread_work pktc_try_connect pktc_write_queue_on_sk_destroy
#define pktc_minit rk_pktc_minit // pktc_minit ./nio/packet_client.c:97 #include "nio.t.h.gen" // #global: pktc_cb_t pktc_cfg_t pktc_create pktc_cur_resp pktc_decode pktc_do_cb pktc_do_cb_exception pktc_do_connect pktc_do_init pktc_do_post pktc_evfd_cb pktc_flush_cb pktc_flush_cb_after_flush pktc_flush_cb_exception pktc_flush_cb_on_post_fail pktc_g_t pktc_get_id pktc_get_sk pktc_handle_one_req pktc_handle_req_queue pktc_init pktc_minit pktc_minit_cfg pktc_msg_t pktc_post pktc_post_async pktc_post_io pktc_req_dispatch pktc_req_t pktc_resp_cb_on_msg pktc_resp_cb_on_post_fail pktc_resp_cb_on_sk_destroy pktc_resp_cb_on_timeout pktc_select_thread pktc_sf_do_init pktc_sf_init pktc_sf_t pktc_sk_alloc pktc_sk_check_connect pktc_sk_consume pktc_sk_delete pktc_sk_destroy pktc_sk_do_decode pktc_sk_do_flush pktc_sk_flush pktc_sk_free pktc_sk_handle_event pktc_sk_handle_event_ready pktc_sk_handle_msg pktc_sk_init pktc_sk_msg_done pktc_sk_new pktc_sk_read pktc_sk_t pktc_start pktc_t pktc_thread_work pktc_try_connect pktc_write_queue_on_sk_destroy
#define pktc_post rk_pktc_post // pktc_post ./nio/packet_client.c:97 #include "nio.t.h.gen" // #global: pktc_cb_t pktc_cfg_t pktc_create pktc_cur_resp pktc_decode pktc_do_cb pktc_do_cb_exception pktc_do_connect pktc_do_init pktc_do_post pktc_evfd_cb pktc_flush_cb pktc_flush_cb_after_flush pktc_flush_cb_exception pktc_flush_cb_on_post_fail pktc_g_t pktc_get_id pktc_get_sk pktc_handle_one_req pktc_handle_req_queue pktc_init pktc_minit pktc_minit_cfg pktc_msg_t pktc_post pktc_post_async pktc_post_io pktc_req_dispatch pktc_req_t pktc_resp_cb_on_msg pktc_resp_cb_on_post_fail pktc_resp_cb_on_sk_destroy pktc_resp_cb_on_timeout pktc_select_thread pktc_sf_do_init pktc_sf_init pktc_sf_t pktc_sk_alloc pktc_sk_check_connect pktc_sk_consume pktc_sk_delete pktc_sk_destroy pktc_sk_do_decode pktc_sk_do_flush pktc_sk_flush pktc_sk_free pktc_sk_handle_event pktc_sk_handle_event_ready pktc_sk_handle_msg pktc_sk_init pktc_sk_msg_done pktc_sk_new pktc_sk_read pktc_sk_t pktc_start pktc_t pktc_thread_work pktc_try_connect pktc_write_queue_on_sk_destroy
#define pktc_post_async rk_pktc_post_async // pktc_post_async ./nio/packet_client.c:97 #include "nio.t.h.gen" // #global: pktc_cb_t pktc_cfg_t pktc_create pktc_cur_resp pktc_decode pktc_do_cb pktc_do_cb_exception pktc_do_connect pktc_do_init pktc_do_post pktc_evfd_cb pktc_flush_cb pktc_flush_cb_after_flush pktc_flush_cb_exception pktc_flush_cb_on_post_fail pktc_g_t pktc_get_id pktc_get_sk pktc_handle_one_req pktc_handle_req_queue pktc_init pktc_minit pktc_minit_cfg pktc_msg_t pktc_post pktc_post_async pktc_post_io pktc_req_dispatch pktc_req_t pktc_resp_cb_on_msg pktc_resp_cb_on_post_fail pktc_resp_cb_on_sk_destroy pktc_resp_cb_on_timeout pktc_select_thread pktc_sf_do_init pktc_sf_init pktc_sf_t pktc_sk_alloc pktc_sk_check_connect pktc_sk_consume pktc_sk_delete pktc_sk_destroy pktc_sk_do_decode pktc_sk_do_flush pktc_sk_flush pktc_sk_free pktc_sk_handle_event pktc_sk_handle_event_ready pktc_sk_handle_msg pktc_sk_init pktc_sk_msg_done pktc_sk_new pktc_sk_read pktc_sk_t pktc_start pktc_t pktc_thread_work pktc_try_connect pktc_write_queue_on_sk_destroy
#define pktc_post_io rk_pktc_post_io // pktc_post_io ./nio/packet_client.c:97 #include "nio.t.h.gen" // #global: pktc_cb_t pktc_cfg_t pktc_create pktc_cur_resp pktc_decode pktc_do_cb pktc_do_cb_exception pktc_do_connect pktc_do_init pktc_do_post pktc_evfd_cb pktc_flush_cb pktc_flush_cb_after_flush pktc_flush_cb_exception pktc_flush_cb_on_post_fail pktc_g_t pktc_get_id pktc_get_sk pktc_handle_one_req pktc_handle_req_queue pktc_init pktc_minit pktc_minit_cfg pktc_msg_t pktc_post pktc_post_async pktc_post_io pktc_req_dispatch pktc_req_t pktc_resp_cb_on_msg pktc_resp_cb_on_post_fail pktc_resp_cb_on_sk_destroy pktc_resp_cb_on_timeout pktc_select_thread pktc_sf_do_init pktc_sf_init pktc_sf_t pktc_sk_alloc pktc_sk_check_connect pktc_sk_consume pktc_sk_delete pktc_sk_destroy pktc_sk_do_decode pktc_sk_do_flush pktc_sk_flush pktc_sk_free pktc_sk_handle_event pktc_sk_handle_event_ready pktc_sk_handle_msg pktc_sk_init pktc_sk_msg_done pktc_sk_new pktc_sk_read pktc_sk_t pktc_start pktc_t pktc_thread_work pktc_try_connect pktc_write_queue_on_sk_destroy
#define pktc_req_t rk_pktc_req_t // pktc_req_t ./nio/packet_client.c:97 #include "nio.t.h.gen" // #global: pktc_cb_t pktc_cfg_t pktc_create pktc_cur_resp pktc_decode pktc_do_cb pktc_do_cb_exception pktc_do_connect pktc_do_init pktc_do_post pktc_evfd_cb pktc_flush_cb pktc_flush_cb_after_flush pktc_flush_cb_exception pktc_flush_cb_on_post_fail pktc_g_t pktc_get_id pktc_get_sk pktc_handle_one_req pktc_handle_req_queue pktc_init pktc_minit pktc_minit_cfg pktc_msg_t pktc_post pktc_post_async pktc_post_io pktc_req_dispatch pktc_req_t pktc_resp_cb_on_msg pktc_resp_cb_on_post_fail pktc_resp_cb_on_sk_destroy pktc_resp_cb_on_timeout pktc_select_thread pktc_sf_do_init pktc_sf_init pktc_sf_t pktc_sk_alloc pktc_sk_check_connect pktc_sk_consume pktc_sk_delete pktc_sk_destroy pktc_sk_do_decode pktc_sk_do_flush pktc_sk_flush pktc_sk_free pktc_sk_handle_event pktc_sk_handle_event_ready pktc_sk_handle_msg pktc_sk_init pktc_sk_msg_done pktc_sk_new pktc_sk_read pktc_sk_t pktc_start pktc_t pktc_thread_work pktc_try_connect pktc_write_queue_on_sk_destroy
#define pktc_resp_cb_on_msg rk_pktc_resp_cb_on_msg // pktc_resp_cb_on_msg ./nio/packet_client.c:97 #include "nio.t.h.gen" // #global: pktc_cb_t pktc_cfg_t pktc_create pktc_cur_resp pktc_decode pktc_do_cb pktc_do_cb_exception pktc_do_connect pktc_do_init pktc_do_post pktc_evfd_cb pktc_flush_cb pktc_flush_cb_after_flush pktc_flush_cb_exception pktc_flush_cb_on_post_fail pktc_g_t pktc_get_id pktc_get_sk pktc_handle_one_req pktc_handle_req_queue pktc_init pktc_minit pktc_minit_cfg pktc_msg_t pktc_post pktc_post_async pktc_post_io pktc_req_dispatch pktc_req_t pktc_resp_cb_on_msg pktc_resp_cb_on_post_fail pktc_resp_cb_on_sk_destroy pktc_resp_cb_on_timeout pktc_select_thread pktc_sf_do_init pktc_sf_init pktc_sf_t pktc_sk_alloc pktc_sk_check_connect pktc_sk_consume pktc_sk_delete pktc_sk_destroy pktc_sk_do_decode pktc_sk_do_flush pktc_sk_flush pktc_sk_free pktc_sk_handle_event pktc_sk_handle_event_ready pktc_sk_handle_msg pktc_sk_init pktc_sk_msg_done pktc_sk_new pktc_sk_read pktc_sk_t pktc_start pktc_t pktc_thread_work pktc_try_connect pktc_write_queue_on_sk_destroy
#define pktc_resp_cb_on_post_fail rk_pktc_resp_cb_on_post_fail // pktc_resp_cb_on_post_fail ./nio/packet_client.c:97 #include "nio.t.h.gen" // #global: pktc_cb_t pktc_cfg_t pktc_create pktc_cur_resp pktc_decode pktc_do_cb pktc_do_cb_exception pktc_do_connect pktc_do_init pktc_do_post pktc_evfd_cb pktc_flush_cb pktc_flush_cb_after_flush pktc_flush_cb_exception pktc_flush_cb_on_post_fail pktc_g_t pktc_get_id pktc_get_sk pktc_handle_one_req pktc_handle_req_queue pktc_init pktc_minit pktc_minit_cfg pktc_msg_t pktc_post pktc_post_async pktc_post_io pktc_req_dispatch pktc_req_t pktc_resp_cb_on_msg pktc_resp_cb_on_post_fail pktc_resp_cb_on_sk_destroy pktc_resp_cb_on_timeout pktc_select_thread pktc_sf_do_init pktc_sf_init pktc_sf_t pktc_sk_alloc pktc_sk_check_connect pktc_sk_consume pktc_sk_delete pktc_sk_destroy pktc_sk_do_decode pktc_sk_do_flush pktc_sk_flush pktc_sk_free pktc_sk_handle_event pktc_sk_handle_event_ready pktc_sk_handle_msg pktc_sk_init pktc_sk_msg_done pktc_sk_new pktc_sk_read pktc_sk_t pktc_start pktc_t pktc_thread_work pktc_try_connect pktc_write_queue_on_sk_destroy
#define pktc_resp_cb_on_sk_destroy rk_pktc_resp_cb_on_sk_destroy // pktc_resp_cb_on_sk_destroy ./nio/packet_client.c:97 #include "nio.t.h.gen" // #global: pktc_cb_t pktc_cfg_t pktc_create pktc_cur_resp pktc_decode pktc_do_cb pktc_do_cb_exception pktc_do_connect pktc_do_init pktc_do_post pktc_evfd_cb pktc_flush_cb pktc_flush_cb_after_flush pktc_flush_cb_exception pktc_flush_cb_on_post_fail pktc_g_t pktc_get_id pktc_get_sk pktc_handle_one_req pktc_handle_req_queue pktc_init pktc_minit pktc_minit_cfg pktc_msg_t pktc_post pktc_post_async pktc_post_io pktc_req_dispatch pktc_req_t pktc_resp_cb_on_msg pktc_resp_cb_on_post_fail pktc_resp_cb_on_sk_destroy pktc_resp_cb_on_timeout pktc_select_thread pktc_sf_do_init pktc_sf_init pktc_sf_t pktc_sk_alloc pktc_sk_check_connect pktc_sk_consume pktc_sk_delete pktc_sk_destroy pktc_sk_do_decode pktc_sk_do_flush pktc_sk_flush pktc_sk_free pktc_sk_handle_event pktc_sk_handle_event_ready pktc_sk_handle_msg pktc_sk_init pktc_sk_msg_done pktc_sk_new pktc_sk_read pktc_sk_t pktc_start pktc_t pktc_thread_work pktc_try_connect pktc_write_queue_on_sk_destroy
#define pktc_resp_cb_on_timeout rk_pktc_resp_cb_on_timeout // pktc_resp_cb_on_timeout ./nio/packet_client.c:97 #include "nio.t.h.gen" // #global: pktc_cb_t pktc_cfg_t pktc_create pktc_cur_resp pktc_decode pktc_do_cb pktc_do_cb_exception pktc_do_connect pktc_do_init pktc_do_post pktc_evfd_cb pktc_flush_cb pktc_flush_cb_after_flush pktc_flush_cb_exception pktc_flush_cb_on_post_fail pktc_g_t pktc_get_id pktc_get_sk pktc_handle_one_req pktc_handle_req_queue pktc_init pktc_minit pktc_minit_cfg pktc_msg_t pktc_post pktc_post_async pktc_post_io pktc_req_dispatch pktc_req_t pktc_resp_cb_on_msg pktc_resp_cb_on_post_fail pktc_resp_cb_on_sk_destroy pktc_resp_cb_on_timeout pktc_select_thread pktc_sf_do_init pktc_sf_init pktc_sf_t pktc_sk_alloc pktc_sk_check_connect pktc_sk_consume pktc_sk_delete pktc_sk_destroy pktc_sk_do_decode pktc_sk_do_flush pktc_sk_flush pktc_sk_free pktc_sk_handle_event pktc_sk_handle_event_ready pktc_sk_handle_msg pktc_sk_init pktc_sk_msg_done pktc_sk_new pktc_sk_read pktc_sk_t pktc_start pktc_t pktc_thread_work pktc_try_connect pktc_write_queue_on_sk_destroy
#define pktc_select_thread rk_pktc_select_thread // pktc_select_thread ./nio/packet_client.c:97 #include "nio.t.h.gen" // #global: pktc_cb_t pktc_cfg_t pktc_create pktc_cur_resp pktc_decode pktc_do_cb pktc_do_cb_exception pktc_do_connect pktc_do_init pktc_do_post pktc_evfd_cb pktc_flush_cb pktc_flush_cb_after_flush pktc_flush_cb_exception pktc_flush_cb_on_post_fail pktc_g_t pktc_get_id pktc_get_sk pktc_handle_one_req pktc_handle_req_queue pktc_init pktc_minit pktc_minit_cfg pktc_msg_t pktc_post pktc_post_async pktc_post_io pktc_req_dispatch pktc_req_t pktc_resp_cb_on_msg pktc_resp_cb_on_post_fail pktc_resp_cb_on_sk_destroy pktc_resp_cb_on_timeout pktc_select_thread pktc_sf_do_init pktc_sf_init pktc_sf_t pktc_sk_alloc pktc_sk_check_connect pktc_sk_consume pktc_sk_delete pktc_sk_destroy pktc_sk_do_decode pktc_sk_do_flush pktc_sk_flush pktc_sk_free pktc_sk_handle_event pktc_sk_handle_event_ready pktc_sk_handle_msg pktc_sk_init pktc_sk_msg_done pktc_sk_new pktc_sk_read pktc_sk_t pktc_start pktc_t pktc_thread_work pktc_try_connect pktc_write_queue_on_sk_destroy
#define pktc_sf_init rk_pktc_sf_init // pktc_sf_init ./nio/packet_client.c:97 #include "nio.t.h.gen" // #global: pktc_cb_t pktc_cfg_t pktc_create pktc_cur_resp pktc_decode pktc_do_cb pktc_do_cb_exception pktc_do_connect pktc_do_init pktc_do_post pktc_evfd_cb pktc_flush_cb pktc_flush_cb_after_flush pktc_flush_cb_exception pktc_flush_cb_on_post_fail pktc_g_t pktc_get_id pktc_get_sk pktc_handle_one_req pktc_handle_req_queue pktc_init pktc_minit pktc_minit_cfg pktc_msg_t pktc_post pktc_post_async pktc_post_io pktc_req_dispatch pktc_req_t pktc_resp_cb_on_msg pktc_resp_cb_on_post_fail pktc_resp_cb_on_sk_destroy pktc_resp_cb_on_timeout pktc_select_thread pktc_sf_do_init pktc_sf_init pktc_sf_t pktc_sk_alloc pktc_sk_check_connect pktc_sk_consume pktc_sk_delete pktc_sk_destroy pktc_sk_do_decode pktc_sk_do_flush pktc_sk_flush pktc_sk_free pktc_sk_handle_event pktc_sk_handle_event_ready pktc_sk_handle_msg pktc_sk_init pktc_sk_msg_done pktc_sk_new pktc_sk_read pktc_sk_t pktc_start pktc_t pktc_thread_work pktc_try_connect pktc_write_queue_on_sk_destroy
#define pktc_sk_alloc rk_pktc_sk_alloc // pktc_sk_alloc ./nio/packet_client.c:97 #include "nio.t.h.gen" // #global: pktc_cb_t pktc_cfg_t pktc_create pktc_cur_resp pktc_decode pktc_do_cb pktc_do_cb_exception pktc_do_connect pktc_do_init pktc_do_post pktc_evfd_cb pktc_flush_cb pktc_flush_cb_after_flush pktc_flush_cb_exception pktc_flush_cb_on_post_fail pktc_g_t pktc_get_id pktc_get_sk pktc_handle_one_req pktc_handle_req_queue pktc_init pktc_minit pktc_minit_cfg pktc_msg_t pktc_post pktc_post_async pktc_post_io pktc_req_dispatch pktc_req_t pktc_resp_cb_on_msg pktc_resp_cb_on_post_fail pktc_resp_cb_on_sk_destroy pktc_resp_cb_on_timeout pktc_select_thread pktc_sf_do_init pktc_sf_init pktc_sf_t pktc_sk_alloc pktc_sk_check_connect pktc_sk_consume pktc_sk_delete pktc_sk_destroy pktc_sk_do_decode pktc_sk_do_flush pktc_sk_flush pktc_sk_free pktc_sk_handle_event pktc_sk_handle_event_ready pktc_sk_handle_msg pktc_sk_init pktc_sk_msg_done pktc_sk_new pktc_sk_read pktc_sk_t pktc_start pktc_t pktc_thread_work pktc_try_connect pktc_write_queue_on_sk_destroy
#define pktc_sk_check_connect rk_pktc_sk_check_connect // pktc_sk_check_connect ./nio/packet_client.c:97 #include "nio.t.h.gen" // #global: pktc_cb_t pktc_cfg_t pktc_create pktc_cur_resp pktc_decode pktc_do_cb pktc_do_cb_exception pktc_do_connect pktc_do_init pktc_do_post pktc_evfd_cb pktc_flush_cb pktc_flush_cb_after_flush pktc_flush_cb_exception pktc_flush_cb_on_post_fail pktc_g_t pktc_get_id pktc_get_sk pktc_handle_one_req pktc_handle_req_queue pktc_init pktc_minit pktc_minit_cfg pktc_msg_t pktc_post pktc_post_async pktc_post_io pktc_req_dispatch pktc_req_t pktc_resp_cb_on_msg pktc_resp_cb_on_post_fail pktc_resp_cb_on_sk_destroy pktc_resp_cb_on_timeout pktc_select_thread pktc_sf_do_init pktc_sf_init pktc_sf_t pktc_sk_alloc pktc_sk_check_connect pktc_sk_consume pktc_sk_delete pktc_sk_destroy pktc_sk_do_decode pktc_sk_do_flush pktc_sk_flush pktc_sk_free pktc_sk_handle_event pktc_sk_handle_event_ready pktc_sk_handle_msg pktc_sk_init pktc_sk_msg_done pktc_sk_new pktc_sk_read pktc_sk_t pktc_start pktc_t pktc_thread_work pktc_try_connect pktc_write_queue_on_sk_destroy
#define pktc_sk_consume rk_pktc_sk_consume // pktc_sk_consume ./nio/packet_client.c:97 #include "nio.t.h.gen" // #global: pktc_cb_t pktc_cfg_t pktc_create pktc_cur_resp pktc_decode pktc_do_cb pktc_do_cb_exception pktc_do_connect pktc_do_init pktc_do_post pktc_evfd_cb pktc_flush_cb pktc_flush_cb_after_flush pktc_flush_cb_exception pktc_flush_cb_on_post_fail pktc_g_t pktc_get_id pktc_get_sk pktc_handle_one_req pktc_handle_req_queue pktc_init pktc_minit pktc_minit_cfg pktc_msg_t pktc_post pktc_post_async pktc_post_io pktc_req_dispatch pktc_req_t pktc_resp_cb_on_msg pktc_resp_cb_on_post_fail pktc_resp_cb_on_sk_destroy pktc_resp_cb_on_timeout pktc_select_thread pktc_sf_do_init pktc_sf_init pktc_sf_t pktc_sk_alloc pktc_sk_check_connect pktc_sk_consume pktc_sk_delete pktc_sk_destroy pktc_sk_do_decode pktc_sk_do_flush pktc_sk_flush pktc_sk_free pktc_sk_handle_event pktc_sk_handle_event_ready pktc_sk_handle_msg pktc_sk_init pktc_sk_msg_done pktc_sk_new pktc_sk_read pktc_sk_t pktc_start pktc_t pktc_thread_work pktc_try_connect pktc_write_queue_on_sk_destroy
#define pktc_sk_delete rk_pktc_sk_delete // pktc_sk_delete ./nio/packet_client.c:97 #include "nio.t.h.gen" // #global: pktc_cb_t pktc_cfg_t pktc_create pktc_cur_resp pktc_decode pktc_do_cb pktc_do_cb_exception pktc_do_connect pktc_do_init pktc_do_post pktc_evfd_cb pktc_flush_cb pktc_flush_cb_after_flush pktc_flush_cb_exception pktc_flush_cb_on_post_fail pktc_g_t pktc_get_id pktc_get_sk pktc_handle_one_req pktc_handle_req_queue pktc_init pktc_minit pktc_minit_cfg pktc_msg_t pktc_post pktc_post_async pktc_post_io pktc_req_dispatch pktc_req_t pktc_resp_cb_on_msg pktc_resp_cb_on_post_fail pktc_resp_cb_on_sk_destroy pktc_resp_cb_on_timeout pktc_select_thread pktc_sf_do_init pktc_sf_init pktc_sf_t pktc_sk_alloc pktc_sk_check_connect pktc_sk_consume pktc_sk_delete pktc_sk_destroy pktc_sk_do_decode pktc_sk_do_flush pktc_sk_flush pktc_sk_free pktc_sk_handle_event pktc_sk_handle_event_ready pktc_sk_handle_msg pktc_sk_init pktc_sk_msg_done pktc_sk_new pktc_sk_read pktc_sk_t pktc_start pktc_t pktc_thread_work pktc_try_connect pktc_write_queue_on_sk_destroy
#define pktc_sk_do_decode rk_pktc_sk_do_decode // pktc_sk_do_decode ./nio/packet_client.c:97 #include "nio.t.h.gen" // #global: pktc_cb_t pktc_cfg_t pktc_create pktc_cur_resp pktc_decode pktc_do_cb pktc_do_cb_exception pktc_do_connect pktc_do_init pktc_do_post pktc_evfd_cb pktc_flush_cb pktc_flush_cb_after_flush pktc_flush_cb_exception pktc_flush_cb_on_post_fail pktc_g_t pktc_get_id pktc_get_sk pktc_handle_one_req pktc_handle_req_queue pktc_init pktc_minit pktc_minit_cfg pktc_msg_t pktc_post pktc_post_async pktc_post_io pktc_req_dispatch pktc_req_t pktc_resp_cb_on_msg pktc_resp_cb_on_post_fail pktc_resp_cb_on_sk_destroy pktc_resp_cb_on_timeout pktc_select_thread pktc_sf_do_init pktc_sf_init pktc_sf_t pktc_sk_alloc pktc_sk_check_connect pktc_sk_consume pktc_sk_delete pktc_sk_destroy pktc_sk_do_decode pktc_sk_do_flush pktc_sk_flush pktc_sk_free pktc_sk_handle_event pktc_sk_handle_event_ready pktc_sk_handle_msg pktc_sk_init pktc_sk_msg_done pktc_sk_new pktc_sk_read pktc_sk_t pktc_start pktc_t pktc_thread_work pktc_try_connect pktc_write_queue_on_sk_destroy
#define pktc_sk_do_flush rk_pktc_sk_do_flush // pktc_sk_do_flush ./nio/packet_client.c:97 #include "nio.t.h.gen" // #global: pktc_cb_t pktc_cfg_t pktc_create pktc_cur_resp pktc_decode pktc_do_cb pktc_do_cb_exception pktc_do_connect pktc_do_init pktc_do_post pktc_evfd_cb pktc_flush_cb pktc_flush_cb_after_flush pktc_flush_cb_exception pktc_flush_cb_on_post_fail pktc_g_t pktc_get_id pktc_get_sk pktc_handle_one_req pktc_handle_req_queue pktc_init pktc_minit pktc_minit_cfg pktc_msg_t pktc_post pktc_post_async pktc_post_io pktc_req_dispatch pktc_req_t pktc_resp_cb_on_msg pktc_resp_cb_on_post_fail pktc_resp_cb_on_sk_destroy pktc_resp_cb_on_timeout pktc_select_thread pktc_sf_do_init pktc_sf_init pktc_sf_t pktc_sk_alloc pktc_sk_check_connect pktc_sk_consume pktc_sk_delete pktc_sk_destroy pktc_sk_do_decode pktc_sk_do_flush pktc_sk_flush pktc_sk_free pktc_sk_handle_event pktc_sk_handle_event_ready pktc_sk_handle_msg pktc_sk_init pktc_sk_msg_done pktc_sk_new pktc_sk_read pktc_sk_t pktc_start pktc_t pktc_thread_work pktc_try_connect pktc_write_queue_on_sk_destroy
#define pktc_sk_flush rk_pktc_sk_flush // pktc_sk_flush ./nio/packet_client.c:97 #include "nio.t.h.gen" // #global: pktc_cb_t pktc_cfg_t pktc_create pktc_cur_resp pktc_decode pktc_do_cb pktc_do_cb_exception pktc_do_connect pktc_do_init pktc_do_post pktc_evfd_cb pktc_flush_cb pktc_flush_cb_after_flush pktc_flush_cb_exception pktc_flush_cb_on_post_fail pktc_g_t pktc_get_id pktc_get_sk pktc_handle_one_req pktc_handle_req_queue pktc_init pktc_minit pktc_minit_cfg pktc_msg_t pktc_post pktc_post_async pktc_post_io pktc_req_dispatch pktc_req_t pktc_resp_cb_on_msg pktc_resp_cb_on_post_fail pktc_resp_cb_on_sk_destroy pktc_resp_cb_on_timeout pktc_select_thread pktc_sf_do_init pktc_sf_init pktc_sf_t pktc_sk_alloc pktc_sk_check_connect pktc_sk_consume pktc_sk_delete pktc_sk_destroy pktc_sk_do_decode pktc_sk_do_flush pktc_sk_flush pktc_sk_free pktc_sk_handle_event pktc_sk_handle_event_ready pktc_sk_handle_msg pktc_sk_init pktc_sk_msg_done pktc_sk_new pktc_sk_read pktc_sk_t pktc_start pktc_t pktc_thread_work pktc_try_connect pktc_write_queue_on_sk_destroy
#define pktc_sk_free rk_pktc_sk_free // pktc_sk_free ./nio/packet_client.c:97 #include "nio.t.h.gen" // #global: pktc_cb_t pktc_cfg_t pktc_create pktc_cur_resp pktc_decode pktc_do_cb pktc_do_cb_exception pktc_do_connect pktc_do_init pktc_do_post pktc_evfd_cb pktc_flush_cb pktc_flush_cb_after_flush pktc_flush_cb_exception pktc_flush_cb_on_post_fail pktc_g_t pktc_get_id pktc_get_sk pktc_handle_one_req pktc_handle_req_queue pktc_init pktc_minit pktc_minit_cfg pktc_msg_t pktc_post pktc_post_async pktc_post_io pktc_req_dispatch pktc_req_t pktc_resp_cb_on_msg pktc_resp_cb_on_post_fail pktc_resp_cb_on_sk_destroy pktc_resp_cb_on_timeout pktc_select_thread pktc_sf_do_init pktc_sf_init pktc_sf_t pktc_sk_alloc pktc_sk_check_connect pktc_sk_consume pktc_sk_delete pktc_sk_destroy pktc_sk_do_decode pktc_sk_do_flush pktc_sk_flush pktc_sk_free pktc_sk_handle_event pktc_sk_handle_event_ready pktc_sk_handle_msg pktc_sk_init pktc_sk_msg_done pktc_sk_new pktc_sk_read pktc_sk_t pktc_start pktc_t pktc_thread_work pktc_try_connect pktc_write_queue_on_sk_destroy
#define pktc_sk_handle_event rk_pktc_sk_handle_event // pktc_sk_handle_event ./nio/packet_client.c:97 #include "nio.t.h.gen" // #global: pktc_cb_t pktc_cfg_t pktc_create pktc_cur_resp pktc_decode pktc_do_cb pktc_do_cb_exception pktc_do_connect pktc_do_init pktc_do_post pktc_evfd_cb pktc_flush_cb pktc_flush_cb_after_flush pktc_flush_cb_exception pktc_flush_cb_on_post_fail pktc_g_t pktc_get_id pktc_get_sk pktc_handle_one_req pktc_handle_req_queue pktc_init pktc_minit pktc_minit_cfg pktc_msg_t pktc_post pktc_post_async pktc_post_io pktc_req_dispatch pktc_req_t pktc_resp_cb_on_msg pktc_resp_cb_on_post_fail pktc_resp_cb_on_sk_destroy pktc_resp_cb_on_timeout pktc_select_thread pktc_sf_do_init pktc_sf_init pktc_sf_t pktc_sk_alloc pktc_sk_check_connect pktc_sk_consume pktc_sk_delete pktc_sk_destroy pktc_sk_do_decode pktc_sk_do_flush pktc_sk_flush pktc_sk_free pktc_sk_handle_event pktc_sk_handle_event_ready pktc_sk_handle_msg pktc_sk_init pktc_sk_msg_done pktc_sk_new pktc_sk_read pktc_sk_t pktc_start pktc_t pktc_thread_work pktc_try_connect pktc_write_queue_on_sk_destroy
#define pktc_sk_handle_event_ready rk_pktc_sk_handle_event_ready // pktc_sk_handle_event_ready ./nio/packet_client.c:97 #include "nio.t.h.gen" // #global: pktc_cb_t pktc_cfg_t pktc_create pktc_cur_resp pktc_decode pktc_do_cb pktc_do_cb_exception pktc_do_connect pktc_do_init pktc_do_post pktc_evfd_cb pktc_flush_cb pktc_flush_cb_after_flush pktc_flush_cb_exception pktc_flush_cb_on_post_fail pktc_g_t pktc_get_id pktc_get_sk pktc_handle_one_req pktc_handle_req_queue pktc_init pktc_minit pktc_minit_cfg pktc_msg_t pktc_post pktc_post_async pktc_post_io pktc_req_dispatch pktc_req_t pktc_resp_cb_on_msg pktc_resp_cb_on_post_fail pktc_resp_cb_on_sk_destroy pktc_resp_cb_on_timeout pktc_select_thread pktc_sf_do_init pktc_sf_init pktc_sf_t pktc_sk_alloc pktc_sk_check_connect pktc_sk_consume pktc_sk_delete pktc_sk_destroy pktc_sk_do_decode pktc_sk_do_flush pktc_sk_flush pktc_sk_free pktc_sk_handle_event pktc_sk_handle_event_ready pktc_sk_handle_msg pktc_sk_init pktc_sk_msg_done pktc_sk_new pktc_sk_read pktc_sk_t pktc_start pktc_t pktc_thread_work pktc_try_connect pktc_write_queue_on_sk_destroy
#define pktc_sk_handle_msg rk_pktc_sk_handle_msg // pktc_sk_handle_msg ./nio/packet_client.c:97 #include "nio.t.h.gen" // #global: pktc_cb_t pktc_cfg_t pktc_create pktc_cur_resp pktc_decode pktc_do_cb pktc_do_cb_exception pktc_do_connect pktc_do_init pktc_do_post pktc_evfd_cb pktc_flush_cb pktc_flush_cb_after_flush pktc_flush_cb_exception pktc_flush_cb_on_post_fail pktc_g_t pktc_get_id pktc_get_sk pktc_handle_one_req pktc_handle_req_queue pktc_init pktc_minit pktc_minit_cfg pktc_msg_t pktc_post pktc_post_async pktc_post_io pktc_req_dispatch pktc_req_t pktc_resp_cb_on_msg pktc_resp_cb_on_post_fail pktc_resp_cb_on_sk_destroy pktc_resp_cb_on_timeout pktc_select_thread pktc_sf_do_init pktc_sf_init pktc_sf_t pktc_sk_alloc pktc_sk_check_connect pktc_sk_consume pktc_sk_delete pktc_sk_destroy pktc_sk_do_decode pktc_sk_do_flush pktc_sk_flush pktc_sk_free pktc_sk_handle_event pktc_sk_handle_event_ready pktc_sk_handle_msg pktc_sk_init pktc_sk_msg_done pktc_sk_new pktc_sk_read pktc_sk_t pktc_start pktc_t pktc_thread_work pktc_try_connect pktc_write_queue_on_sk_destroy
#define pktc_sk_new rk_pktc_sk_new // pktc_sk_new ./nio/packet_client.c:97 #include "nio.t.h.gen" // #global: pktc_cb_t pktc_cfg_t pktc_create pktc_cur_resp pktc_decode pktc_do_cb pktc_do_cb_exception pktc_do_connect pktc_do_init pktc_do_post pktc_evfd_cb pktc_flush_cb pktc_flush_cb_after_flush pktc_flush_cb_exception pktc_flush_cb_on_post_fail pktc_g_t pktc_get_id pktc_get_sk pktc_handle_one_req pktc_handle_req_queue pktc_init pktc_minit pktc_minit_cfg pktc_msg_t pktc_post pktc_post_async pktc_post_io pktc_req_dispatch pktc_req_t pktc_resp_cb_on_msg pktc_resp_cb_on_post_fail pktc_resp_cb_on_sk_destroy pktc_resp_cb_on_timeout pktc_select_thread pktc_sf_do_init pktc_sf_init pktc_sf_t pktc_sk_alloc pktc_sk_check_connect pktc_sk_consume pktc_sk_delete pktc_sk_destroy pktc_sk_do_decode pktc_sk_do_flush pktc_sk_flush pktc_sk_free pktc_sk_handle_event pktc_sk_handle_event_ready pktc_sk_handle_msg pktc_sk_init pktc_sk_msg_done pktc_sk_new pktc_sk_read pktc_sk_t pktc_start pktc_t pktc_thread_work pktc_try_connect pktc_write_queue_on_sk_destroy
#define pktc_start rk_pktc_start // pktc_start ./nio/packet_client.c:97 #include "nio.t.h.gen" // #global: pktc_cb_t pktc_cfg_t pktc_create pktc_cur_resp pktc_decode pktc_do_cb pktc_do_cb_exception pktc_do_connect pktc_do_init pktc_do_post pktc_evfd_cb pktc_flush_cb pktc_flush_cb_after_flush pktc_flush_cb_exception pktc_flush_cb_on_post_fail pktc_g_t pktc_get_id pktc_get_sk pktc_handle_one_req pktc_handle_req_queue pktc_init pktc_minit pktc_minit_cfg pktc_msg_t pktc_post pktc_post_async pktc_post_io pktc_req_dispatch pktc_req_t pktc_resp_cb_on_msg pktc_resp_cb_on_post_fail pktc_resp_cb_on_sk_destroy pktc_resp_cb_on_timeout pktc_select_thread pktc_sf_do_init pktc_sf_init pktc_sf_t pktc_sk_alloc pktc_sk_check_connect pktc_sk_consume pktc_sk_delete pktc_sk_destroy pktc_sk_do_decode pktc_sk_do_flush pktc_sk_flush pktc_sk_free pktc_sk_handle_event pktc_sk_handle_event_ready pktc_sk_handle_msg pktc_sk_init pktc_sk_msg_done pktc_sk_new pktc_sk_read pktc_sk_t pktc_start pktc_t pktc_thread_work pktc_try_connect pktc_write_queue_on_sk_destroy
#define pktc_thread_work rk_pktc_thread_work // pktc_thread_work ./nio/packet_client.c:97 #include "nio.t.h.gen" // #global: pktc_cb_t pktc_cfg_t pktc_create pktc_cur_resp pktc_decode pktc_do_cb pktc_do_cb_exception pktc_do_connect pktc_do_init pktc_do_post pktc_evfd_cb pktc_flush_cb pktc_flush_cb_after_flush pktc_flush_cb_exception pktc_flush_cb_on_post_fail pktc_g_t pktc_get_id pktc_get_sk pktc_handle_one_req pktc_handle_req_queue pktc_init pktc_minit pktc_minit_cfg pktc_msg_t pktc_post pktc_post_async pktc_post_io pktc_req_dispatch pktc_req_t pktc_resp_cb_on_msg pktc_resp_cb_on_post_fail pktc_resp_cb_on_sk_destroy pktc_resp_cb_on_timeout pktc_select_thread pktc_sf_do_init pktc_sf_init pktc_sf_t pktc_sk_alloc pktc_sk_check_connect pktc_sk_consume pktc_sk_delete pktc_sk_destroy pktc_sk_do_decode pktc_sk_do_flush pktc_sk_flush pktc_sk_free pktc_sk_handle_event pktc_sk_handle_event_ready pktc_sk_handle_msg pktc_sk_init pktc_sk_msg_done pktc_sk_new pktc_sk_read pktc_sk_t pktc_start pktc_t pktc_thread_work pktc_try_connect pktc_write_queue_on_sk_destroy
#define pktc_try_connect rk_pktc_try_connect // pktc_try_connect ./nio/packet_client.c:97 #include "nio.t.h.gen" // #global: pktc_cb_t pktc_cfg_t pktc_create pktc_cur_resp pktc_decode pktc_do_cb pktc_do_cb_exception pktc_do_connect pktc_do_init pktc_do_post pktc_evfd_cb pktc_flush_cb pktc_flush_cb_after_flush pktc_flush_cb_exception pktc_flush_cb_on_post_fail pktc_g_t pktc_get_id pktc_get_sk pktc_handle_one_req pktc_handle_req_queue pktc_init pktc_minit pktc_minit_cfg pktc_msg_t pktc_post pktc_post_async pktc_post_io pktc_req_dispatch pktc_req_t pktc_resp_cb_on_msg pktc_resp_cb_on_post_fail pktc_resp_cb_on_sk_destroy pktc_resp_cb_on_timeout pktc_select_thread pktc_sf_do_init pktc_sf_init pktc_sf_t pktc_sk_alloc pktc_sk_check_connect pktc_sk_consume pktc_sk_delete pktc_sk_destroy pktc_sk_do_decode pktc_sk_do_flush pktc_sk_flush pktc_sk_free pktc_sk_handle_event pktc_sk_handle_event_ready pktc_sk_handle_msg pktc_sk_init pktc_sk_msg_done pktc_sk_new pktc_sk_read pktc_sk_t pktc_start pktc_t pktc_thread_work pktc_try_connect pktc_write_queue_on_sk_destroy
#define pktc_write_queue_on_sk_destroy rk_pktc_write_queue_on_sk_destroy // pktc_write_queue_on_sk_destroy ./nio/packet_client.c:97 #include "nio.t.h.gen" // #global: pktc_cb_t pktc_cfg_t pktc_create pktc_cur_resp pktc_decode pktc_do_cb pktc_do_cb_exception pktc_do_connect pktc_do_init pktc_do_post pktc_evfd_cb pktc_flush_cb pktc_flush_cb_after_flush pktc_flush_cb_exception pktc_flush_cb_on_post_fail pktc_g_t pktc_get_id pktc_get_sk pktc_handle_one_req pktc_handle_req_queue pktc_init pktc_minit pktc_minit_cfg pktc_msg_t pktc_post pktc_post_async pktc_post_io pktc_req_dispatch pktc_req_t pktc_resp_cb_on_msg pktc_resp_cb_on_post_fail pktc_resp_cb_on_sk_destroy pktc_resp_cb_on_timeout pktc_select_thread pktc_sf_do_init pktc_sf_init pktc_sf_t pktc_sk_alloc pktc_sk_check_connect pktc_sk_consume pktc_sk_delete pktc_sk_destroy pktc_sk_do_decode pktc_sk_do_flush pktc_sk_flush pktc_sk_free pktc_sk_handle_event pktc_sk_handle_event_ready pktc_sk_handle_msg pktc_sk_init pktc_sk_msg_done pktc_sk_new pktc_sk_read pktc_sk_t pktc_start pktc_t pktc_thread_work pktc_try_connect pktc_write_queue_on_sk_destroy
#define pktc_flush_cb_func_t rk_pktc_flush_cb_func_t // pktc_flush_cb_func_t ./nio/packet_client.h:3 typedef void (*pktc_flush_cb_func_t)(pktc_req_t* req);
#define cur_th_gen_id rk_cur_th_gen_id // cur_th_gen_id ./fw/id_gen.c:1 __thread uint64_t cur_th_gen_id;
#define gen_id rk_gen_id // gen_id ./fw/id_gen.c:6 extern uint64_t gen_id();
#define g_seq_id rk_g_seq_id // g_seq_id ./fw/id_gen.c:8 uint64_t g_seq_id;
#define gen_seq_id rk_gen_seq_id // gen_seq_id ./fw/id_gen.c:9 extern uint64_t gen_seq_id();
#define msg_init rk_msg_init // msg_init ./io/msg.h:7 inline msg_t* msg_init(msg_t* m, const char* b, int64_t s) {
#define s2rpc rk_s2rpc // s2rpc ./nio/s2rpc.c:1 str_t* s2rpc(addr_t addr, str_t* req, str_t* resp) {
#define ihash_insert rk_ihash_insert // ihash_insert ./ds/ihash_map.h:1 extern link_t* ihash_insert(hash_t* map, link_t* k);
#define ihash_del rk_ihash_del // ihash_del ./ds/ihash_map.h:2 extern link_t* ihash_del(hash_t* map, uint64_t k);
#define ihash_get rk_ihash_get // ihash_get ./ds/ihash_map.h:3 extern link_t* ihash_get(hash_t* map, uint64_t k);
#define link_t rk_link_t // link_t ./ds/link.h:1 typedef struct link_t {
#define link_init rk_link_init // link_init ./ds/link.h:5 inline void link_init(link_t* n) {
#define link_is_empty rk_link_is_empty // link_is_empty ./ds/link.h:9 inline bool link_is_empty(link_t* n) {
#define link_insert rk_link_insert // link_insert ./ds/link.h:13 inline link_t* link_insert(link_t* prev, link_t* t) {
#define link_delete rk_link_delete // link_delete ./ds/link.h:18 inline link_t* link_delete(link_t* prev) {
#define link_pop rk_link_pop // link_pop ./ds/link.h:24 inline link_t* link_pop(link_t* h) {
#define stat_reg_t rk_stat_reg_t // stat_reg_t ./fw/stat.h:6 typedef struct stat_reg_t {
#define get_pc rk_get_pc // get_pc ./fw/stat.h:14 extern int64_t* get_pc(const char* name);
#define start_stat_report rk_start_stat_report // start_stat_report ./fw/stat.h:15 extern void start_stat_report();
#define stat_count rk_stat_count // stat_count ./fw/stat.c:6 static int stat_count() { return USECTION_SIZE(stat)/sizeof(stat_reg_t); }
#define stat_get rk_stat_get // stat_get ./fw/stat.c:7 static int64_t stat_get(stat_reg_t* st) {
#define stat_format rk_stat_format // stat_format ./fw/stat.c:19 static void stat_format(format_t* f, stat_reg_t* st) {
#define stat_format_all rk_stat_format_all // stat_format_all ./fw/stat.c:26 static const char* stat_format_all(format_t* f, stat_reg_t* st, int count) {
#define mod_report rk_mod_report // mod_report ./fw/stat.c:33 void mod_report(format_t* f);
#define __stat_thread_func __rk_stat_thread_func // __stat_thread_func ./fw/stat.c:35 static int __stat_thread_func(void* args) {
#define timerfd_set_interval rk_timerfd_set_interval // timerfd_set_interval ./io/timerfd.c:1 int timerfd_set_interval(timerfd_t* s, int64_t interval) {
#define timerfd_init rk_timerfd_init // timerfd_init ./io/timerfd.c:7 int timerfd_init(eloop_t* ep, timerfd_t* s, handle_event_t handle) {
#define thread_channel_t rk_thread_channel_t // thread_channel_t ./io/thread_channel.h:1 typedef struct thread_channel_t {
#define tch_init rk_tch_init // tch_init ./io/thread_channel.h:21 extern int tch_init(eloop_t* ep, thread_channel_t* tch, handle_event_t func);
#define tch_post rk_tch_post // tch_post ./io/thread_channel.h:22 inline void tch_post(thread_channel_t* tch, link_t* l) {
#define multi_cond_t rk_multi_cond_t // multi_cond_t ./ds/multi_cond.h:2 typedef struct multi_cond_t {
#define multi_cond_init rk_multi_cond_init // multi_cond_init ./ds/multi_cond.h:8 void multi_cond_init(multi_cond_t* mc);
#define multi_cond_alloc rk_multi_cond_alloc // multi_cond_alloc ./ds/multi_cond.h:10 inline int32_t* multi_cond_alloc(multi_cond_t* mc) {
#define multi_cond_signal rk_multi_cond_signal // multi_cond_signal ./ds/multi_cond.h:14 inline void multi_cond_signal(multi_cond_t* mc) {
#define __ihash_calc __rk_ihash_calc // __ihash_calc ./ds/ihash_map.c:1 static uint64_t __ihash_calc(uint64_t k) { return fasthash64(&k, sizeof(k), 0); }
#define __ihash_locate __rk_ihash_locate // __ihash_locate ./ds/ihash_map.c:2 static link_t* __ihash_locate(hash_t* map, uint64_t k) { return &map->table[__ihash_calc(k) % map->capacity]; }
#define __ihash_key __rk_ihash_key // __ihash_key ./ds/ihash_map.c:3 static uint64_t __ihash_key(link_t* l) { return *(uint64_t*)(l + 1); }
#define __ihash_list_search __rk_ihash_list_search // __ihash_list_search ./ds/ihash_map.c:4 static link_t* __ihash_list_search(link_t* start, uint64_t k, link_t** prev) {
#define tls_i64 rk_tls_i64 // tls_i64 ./fw/tls_i64.c:1 extern int64_t* tls_i64(int64_t off);
#define tls_add rk_tls_add // tls_add ./fw/tls_i64.c:2 extern int64_t tls_add(int64_t off, int64_t x);
#define tls_sumo rk_tls_sumo // tls_sumo ./fw/tls_i64.c:3 extern int64_t tls_sumo(uint64_t off);
#define tls_suma rk_tls_suma // tls_suma ./fw/tls_i64.c:4 extern int64_t tls_suma(int64_t* addr);
#define pkts_sk_t rk_pkts_sk_t // pkts_sk_t ./nio/packet_server.c:1 typedef struct pkts_sk_t {
#define pkts_sf_t rk_pkts_sf_t // pkts_sf_t ./nio/packet_server.c:8 typedef struct pkts_sf_t {
#define pkts_t rk_pkts_t // pkts_t ./nio/packet_server.c:12 typedef struct pkts_t {
#define pkts_msg_t rk_pkts_msg_t // pkts_msg_t ./nio/packet_server.c:26 typedef struct pkts_msg_t {
#define pkts_decode rk_pkts_decode // pkts_decode ./nio/packet_server.c:31 static int64_t pkts_decode(char* b, int64_t s) { return msg_decode(b, s);}
#define pkts_flush_cb rk_pkts_flush_cb // pkts_flush_cb ./nio/packet_server.c:33 void pkts_flush_cb(pkts_t* io, pkts_req_t* req) {
#define pkts_sk_read rk_pkts_sk_read // pkts_sk_read ./nio/packet_server.c:37 static int pkts_sk_read(void** b, pkts_sk_t* s, int64_t sz) {
#define pkts_sk_handle_msg rk_pkts_sk_handle_msg // pkts_sk_handle_msg ./nio/packet_server.c:41 static int pkts_sk_handle_msg(pkts_sk_t* s, pkts_msg_t* msg) {
#define pkts_sk_init rk_pkts_sk_init // pkts_sk_init ./nio/packet_server.c:48 static int pkts_sk_init(pkts_sf_t* sf, pkts_sk_t* s) {
#define pkts_sk_destroy rk_pkts_sk_destroy // pkts_sk_destroy ./nio/packet_server.c:56 static void pkts_sk_destroy(pkts_sf_t* sf, pkts_sk_t* s) {
#define pkts_sf_do_init rk_pkts_sf_do_init // pkts_sf_do_init ./nio/packet_server.c:61 static int pkts_sf_do_init(pkts_sf_t* sf, pkts_cfg_t* cfg) {
#define pkts_do_init rk_pkts_do_init // pkts_do_init ./nio/packet_server.c:66 static int pkts_do_init(pkts_t* pkts, pkts_cfg_t* cfg) {
#define pkts_get_sk rk_pkts_get_sk // pkts_get_sk ./nio/packet_server.c:75 static pkts_sk_t* pkts_get_sk(pkts_t* pkts, pkts_req_t* r) {
#define pkts_do_post rk_pkts_do_post // pkts_do_post ./nio/packet_server.c:79 static void pkts_do_post(pkts_t* pkts, pkts_sk_t* sk, pkts_req_t* r) {
#define pkts_minit_cfg rk_pkts_minit_cfg // pkts_minit_cfg ./nio/packet_server.c:84 static int pkts_minit_cfg(pkts_cfg_t* cfg, const char* name) {
#define pkts_cb_t rk_pkts_cb_t // pkts_cb_t ./nio/packet_server.c:95 #include "nio.t.h.gen" // #global: pkts_cb_t pkts_cfg_t pkts_create pkts_cur_resp pkts_decode pkts_do_cb pkts_do_cb_exception pkts_do_connect pkts_do_init pkts_do_post pkts_evfd_cb pkts_flush_cb pkts_flush_cb_after_flush pkts_flush_cb_exception pkts_flush_cb_on_post_fail pkts_g_t pkts_get_id pkts_get_sk pkts_handle_one_req pkts_handle_req_queue pkts_init pkts_minit pkts_minit_cfg pkts_msg_t pkts_post pkts_post_async pkts_post_io pkts_req_dispatch pkts_req_t pkts_resp_cb_on_msg pkts_resp_cb_on_post_fail pkts_resp_cb_on_sk_destroy pkts_resp_cb_on_timeout pkts_select_thread pkts_sf_do_init pkts_sf_init pkts_sf_t pkts_sk_alloc pkts_sk_check_connect pkts_sk_consume pkts_sk_delete pkts_sk_destroy pkts_sk_do_decode pkts_sk_do_flush pkts_sk_flush pkts_sk_free pkts_sk_handle_event pkts_sk_handle_event_ready pkts_sk_handle_msg pkts_sk_init pkts_sk_msg_done pkts_sk_new pkts_sk_read pkts_sk_t pkts_start pkts_t pkts_thread_work pkts_try_connect pkts_write_queue_on_sk_destroy
#define pkts_cfg_t rk_pkts_cfg_t // pkts_cfg_t ./nio/packet_server.c:95 #include "nio.t.h.gen" // #global: pkts_cb_t pkts_cfg_t pkts_create pkts_cur_resp pkts_decode pkts_do_cb pkts_do_cb_exception pkts_do_connect pkts_do_init pkts_do_post pkts_evfd_cb pkts_flush_cb pkts_flush_cb_after_flush pkts_flush_cb_exception pkts_flush_cb_on_post_fail pkts_g_t pkts_get_id pkts_get_sk pkts_handle_one_req pkts_handle_req_queue pkts_init pkts_minit pkts_minit_cfg pkts_msg_t pkts_post pkts_post_async pkts_post_io pkts_req_dispatch pkts_req_t pkts_resp_cb_on_msg pkts_resp_cb_on_post_fail pkts_resp_cb_on_sk_destroy pkts_resp_cb_on_timeout pkts_select_thread pkts_sf_do_init pkts_sf_init pkts_sf_t pkts_sk_alloc pkts_sk_check_connect pkts_sk_consume pkts_sk_delete pkts_sk_destroy pkts_sk_do_decode pkts_sk_do_flush pkts_sk_flush pkts_sk_free pkts_sk_handle_event pkts_sk_handle_event_ready pkts_sk_handle_msg pkts_sk_init pkts_sk_msg_done pkts_sk_new pkts_sk_read pkts_sk_t pkts_start pkts_t pkts_thread_work pkts_try_connect pkts_write_queue_on_sk_destroy
#define pkts_create rk_pkts_create // pkts_create ./nio/packet_server.c:95 #include "nio.t.h.gen" // #global: pkts_cb_t pkts_cfg_t pkts_create pkts_cur_resp pkts_decode pkts_do_cb pkts_do_cb_exception pkts_do_connect pkts_do_init pkts_do_post pkts_evfd_cb pkts_flush_cb pkts_flush_cb_after_flush pkts_flush_cb_exception pkts_flush_cb_on_post_fail pkts_g_t pkts_get_id pkts_get_sk pkts_handle_one_req pkts_handle_req_queue pkts_init pkts_minit pkts_minit_cfg pkts_msg_t pkts_post pkts_post_async pkts_post_io pkts_req_dispatch pkts_req_t pkts_resp_cb_on_msg pkts_resp_cb_on_post_fail pkts_resp_cb_on_sk_destroy pkts_resp_cb_on_timeout pkts_select_thread pkts_sf_do_init pkts_sf_init pkts_sf_t pkts_sk_alloc pkts_sk_check_connect pkts_sk_consume pkts_sk_delete pkts_sk_destroy pkts_sk_do_decode pkts_sk_do_flush pkts_sk_flush pkts_sk_free pkts_sk_handle_event pkts_sk_handle_event_ready pkts_sk_handle_msg pkts_sk_init pkts_sk_msg_done pkts_sk_new pkts_sk_read pkts_sk_t pkts_start pkts_t pkts_thread_work pkts_try_connect pkts_write_queue_on_sk_destroy
#define pkts_cur_resp rk_pkts_cur_resp // pkts_cur_resp ./nio/packet_server.c:95 #include "nio.t.h.gen" // #global: pkts_cb_t pkts_cfg_t pkts_create pkts_cur_resp pkts_decode pkts_do_cb pkts_do_cb_exception pkts_do_connect pkts_do_init pkts_do_post pkts_evfd_cb pkts_flush_cb pkts_flush_cb_after_flush pkts_flush_cb_exception pkts_flush_cb_on_post_fail pkts_g_t pkts_get_id pkts_get_sk pkts_handle_one_req pkts_handle_req_queue pkts_init pkts_minit pkts_minit_cfg pkts_msg_t pkts_post pkts_post_async pkts_post_io pkts_req_dispatch pkts_req_t pkts_resp_cb_on_msg pkts_resp_cb_on_post_fail pkts_resp_cb_on_sk_destroy pkts_resp_cb_on_timeout pkts_select_thread pkts_sf_do_init pkts_sf_init pkts_sf_t pkts_sk_alloc pkts_sk_check_connect pkts_sk_consume pkts_sk_delete pkts_sk_destroy pkts_sk_do_decode pkts_sk_do_flush pkts_sk_flush pkts_sk_free pkts_sk_handle_event pkts_sk_handle_event_ready pkts_sk_handle_msg pkts_sk_init pkts_sk_msg_done pkts_sk_new pkts_sk_read pkts_sk_t pkts_start pkts_t pkts_thread_work pkts_try_connect pkts_write_queue_on_sk_destroy
#define pkts_do_cb rk_pkts_do_cb // pkts_do_cb ./nio/packet_server.c:95 #include "nio.t.h.gen" // #global: pkts_cb_t pkts_cfg_t pkts_create pkts_cur_resp pkts_decode pkts_do_cb pkts_do_cb_exception pkts_do_connect pkts_do_init pkts_do_post pkts_evfd_cb pkts_flush_cb pkts_flush_cb_after_flush pkts_flush_cb_exception pkts_flush_cb_on_post_fail pkts_g_t pkts_get_id pkts_get_sk pkts_handle_one_req pkts_handle_req_queue pkts_init pkts_minit pkts_minit_cfg pkts_msg_t pkts_post pkts_post_async pkts_post_io pkts_req_dispatch pkts_req_t pkts_resp_cb_on_msg pkts_resp_cb_on_post_fail pkts_resp_cb_on_sk_destroy pkts_resp_cb_on_timeout pkts_select_thread pkts_sf_do_init pkts_sf_init pkts_sf_t pkts_sk_alloc pkts_sk_check_connect pkts_sk_consume pkts_sk_delete pkts_sk_destroy pkts_sk_do_decode pkts_sk_do_flush pkts_sk_flush pkts_sk_free pkts_sk_handle_event pkts_sk_handle_event_ready pkts_sk_handle_msg pkts_sk_init pkts_sk_msg_done pkts_sk_new pkts_sk_read pkts_sk_t pkts_start pkts_t pkts_thread_work pkts_try_connect pkts_write_queue_on_sk_destroy
#define pkts_do_cb_exception rk_pkts_do_cb_exception // pkts_do_cb_exception ./nio/packet_server.c:95 #include "nio.t.h.gen" // #global: pkts_cb_t pkts_cfg_t pkts_create pkts_cur_resp pkts_decode pkts_do_cb pkts_do_cb_exception pkts_do_connect pkts_do_init pkts_do_post pkts_evfd_cb pkts_flush_cb pkts_flush_cb_after_flush pkts_flush_cb_exception pkts_flush_cb_on_post_fail pkts_g_t pkts_get_id pkts_get_sk pkts_handle_one_req pkts_handle_req_queue pkts_init pkts_minit pkts_minit_cfg pkts_msg_t pkts_post pkts_post_async pkts_post_io pkts_req_dispatch pkts_req_t pkts_resp_cb_on_msg pkts_resp_cb_on_post_fail pkts_resp_cb_on_sk_destroy pkts_resp_cb_on_timeout pkts_select_thread pkts_sf_do_init pkts_sf_init pkts_sf_t pkts_sk_alloc pkts_sk_check_connect pkts_sk_consume pkts_sk_delete pkts_sk_destroy pkts_sk_do_decode pkts_sk_do_flush pkts_sk_flush pkts_sk_free pkts_sk_handle_event pkts_sk_handle_event_ready pkts_sk_handle_msg pkts_sk_init pkts_sk_msg_done pkts_sk_new pkts_sk_read pkts_sk_t pkts_start pkts_t pkts_thread_work pkts_try_connect pkts_write_queue_on_sk_destroy
#define pkts_do_connect rk_pkts_do_connect // pkts_do_connect ./nio/packet_server.c:95 #include "nio.t.h.gen" // #global: pkts_cb_t pkts_cfg_t pkts_create pkts_cur_resp pkts_decode pkts_do_cb pkts_do_cb_exception pkts_do_connect pkts_do_init pkts_do_post pkts_evfd_cb pkts_flush_cb pkts_flush_cb_after_flush pkts_flush_cb_exception pkts_flush_cb_on_post_fail pkts_g_t pkts_get_id pkts_get_sk pkts_handle_one_req pkts_handle_req_queue pkts_init pkts_minit pkts_minit_cfg pkts_msg_t pkts_post pkts_post_async pkts_post_io pkts_req_dispatch pkts_req_t pkts_resp_cb_on_msg pkts_resp_cb_on_post_fail pkts_resp_cb_on_sk_destroy pkts_resp_cb_on_timeout pkts_select_thread pkts_sf_do_init pkts_sf_init pkts_sf_t pkts_sk_alloc pkts_sk_check_connect pkts_sk_consume pkts_sk_delete pkts_sk_destroy pkts_sk_do_decode pkts_sk_do_flush pkts_sk_flush pkts_sk_free pkts_sk_handle_event pkts_sk_handle_event_ready pkts_sk_handle_msg pkts_sk_init pkts_sk_msg_done pkts_sk_new pkts_sk_read pkts_sk_t pkts_start pkts_t pkts_thread_work pkts_try_connect pkts_write_queue_on_sk_destroy
#define pkts_evfd_cb rk_pkts_evfd_cb // pkts_evfd_cb ./nio/packet_server.c:95 #include "nio.t.h.gen" // #global: pkts_cb_t pkts_cfg_t pkts_create pkts_cur_resp pkts_decode pkts_do_cb pkts_do_cb_exception pkts_do_connect pkts_do_init pkts_do_post pkts_evfd_cb pkts_flush_cb pkts_flush_cb_after_flush pkts_flush_cb_exception pkts_flush_cb_on_post_fail pkts_g_t pkts_get_id pkts_get_sk pkts_handle_one_req pkts_handle_req_queue pkts_init pkts_minit pkts_minit_cfg pkts_msg_t pkts_post pkts_post_async pkts_post_io pkts_req_dispatch pkts_req_t pkts_resp_cb_on_msg pkts_resp_cb_on_post_fail pkts_resp_cb_on_sk_destroy pkts_resp_cb_on_timeout pkts_select_thread pkts_sf_do_init pkts_sf_init pkts_sf_t pkts_sk_alloc pkts_sk_check_connect pkts_sk_consume pkts_sk_delete pkts_sk_destroy pkts_sk_do_decode pkts_sk_do_flush pkts_sk_flush pkts_sk_free pkts_sk_handle_event pkts_sk_handle_event_ready pkts_sk_handle_msg pkts_sk_init pkts_sk_msg_done pkts_sk_new pkts_sk_read pkts_sk_t pkts_start pkts_t pkts_thread_work pkts_try_connect pkts_write_queue_on_sk_destroy
#define pkts_flush_cb_after_flush rk_pkts_flush_cb_after_flush // pkts_flush_cb_after_flush ./nio/packet_server.c:95 #include "nio.t.h.gen" // #global: pkts_cb_t pkts_cfg_t pkts_create pkts_cur_resp pkts_decode pkts_do_cb pkts_do_cb_exception pkts_do_connect pkts_do_init pkts_do_post pkts_evfd_cb pkts_flush_cb pkts_flush_cb_after_flush pkts_flush_cb_exception pkts_flush_cb_on_post_fail pkts_g_t pkts_get_id pkts_get_sk pkts_handle_one_req pkts_handle_req_queue pkts_init pkts_minit pkts_minit_cfg pkts_msg_t pkts_post pkts_post_async pkts_post_io pkts_req_dispatch pkts_req_t pkts_resp_cb_on_msg pkts_resp_cb_on_post_fail pkts_resp_cb_on_sk_destroy pkts_resp_cb_on_timeout pkts_select_thread pkts_sf_do_init pkts_sf_init pkts_sf_t pkts_sk_alloc pkts_sk_check_connect pkts_sk_consume pkts_sk_delete pkts_sk_destroy pkts_sk_do_decode pkts_sk_do_flush pkts_sk_flush pkts_sk_free pkts_sk_handle_event pkts_sk_handle_event_ready pkts_sk_handle_msg pkts_sk_init pkts_sk_msg_done pkts_sk_new pkts_sk_read pkts_sk_t pkts_start pkts_t pkts_thread_work pkts_try_connect pkts_write_queue_on_sk_destroy
#define pkts_flush_cb_exception rk_pkts_flush_cb_exception // pkts_flush_cb_exception ./nio/packet_server.c:95 #include "nio.t.h.gen" // #global: pkts_cb_t pkts_cfg_t pkts_create pkts_cur_resp pkts_decode pkts_do_cb pkts_do_cb_exception pkts_do_connect pkts_do_init pkts_do_post pkts_evfd_cb pkts_flush_cb pkts_flush_cb_after_flush pkts_flush_cb_exception pkts_flush_cb_on_post_fail pkts_g_t pkts_get_id pkts_get_sk pkts_handle_one_req pkts_handle_req_queue pkts_init pkts_minit pkts_minit_cfg pkts_msg_t pkts_post pkts_post_async pkts_post_io pkts_req_dispatch pkts_req_t pkts_resp_cb_on_msg pkts_resp_cb_on_post_fail pkts_resp_cb_on_sk_destroy pkts_resp_cb_on_timeout pkts_select_thread pkts_sf_do_init pkts_sf_init pkts_sf_t pkts_sk_alloc pkts_sk_check_connect pkts_sk_consume pkts_sk_delete pkts_sk_destroy pkts_sk_do_decode pkts_sk_do_flush pkts_sk_flush pkts_sk_free pkts_sk_handle_event pkts_sk_handle_event_ready pkts_sk_handle_msg pkts_sk_init pkts_sk_msg_done pkts_sk_new pkts_sk_read pkts_sk_t pkts_start pkts_t pkts_thread_work pkts_try_connect pkts_write_queue_on_sk_destroy
#define pkts_flush_cb_on_post_fail rk_pkts_flush_cb_on_post_fail // pkts_flush_cb_on_post_fail ./nio/packet_server.c:95 #include "nio.t.h.gen" // #global: pkts_cb_t pkts_cfg_t pkts_create pkts_cur_resp pkts_decode pkts_do_cb pkts_do_cb_exception pkts_do_connect pkts_do_init pkts_do_post pkts_evfd_cb pkts_flush_cb pkts_flush_cb_after_flush pkts_flush_cb_exception pkts_flush_cb_on_post_fail pkts_g_t pkts_get_id pkts_get_sk pkts_handle_one_req pkts_handle_req_queue pkts_init pkts_minit pkts_minit_cfg pkts_msg_t pkts_post pkts_post_async pkts_post_io pkts_req_dispatch pkts_req_t pkts_resp_cb_on_msg pkts_resp_cb_on_post_fail pkts_resp_cb_on_sk_destroy pkts_resp_cb_on_timeout pkts_select_thread pkts_sf_do_init pkts_sf_init pkts_sf_t pkts_sk_alloc pkts_sk_check_connect pkts_sk_consume pkts_sk_delete pkts_sk_destroy pkts_sk_do_decode pkts_sk_do_flush pkts_sk_flush pkts_sk_free pkts_sk_handle_event pkts_sk_handle_event_ready pkts_sk_handle_msg pkts_sk_init pkts_sk_msg_done pkts_sk_new pkts_sk_read pkts_sk_t pkts_start pkts_t pkts_thread_work pkts_try_connect pkts_write_queue_on_sk_destroy
#define pkts_g_t rk_pkts_g_t // pkts_g_t ./nio/packet_server.c:95 #include "nio.t.h.gen" // #global: pkts_cb_t pkts_cfg_t pkts_create pkts_cur_resp pkts_decode pkts_do_cb pkts_do_cb_exception pkts_do_connect pkts_do_init pkts_do_post pkts_evfd_cb pkts_flush_cb pkts_flush_cb_after_flush pkts_flush_cb_exception pkts_flush_cb_on_post_fail pkts_g_t pkts_get_id pkts_get_sk pkts_handle_one_req pkts_handle_req_queue pkts_init pkts_minit pkts_minit_cfg pkts_msg_t pkts_post pkts_post_async pkts_post_io pkts_req_dispatch pkts_req_t pkts_resp_cb_on_msg pkts_resp_cb_on_post_fail pkts_resp_cb_on_sk_destroy pkts_resp_cb_on_timeout pkts_select_thread pkts_sf_do_init pkts_sf_init pkts_sf_t pkts_sk_alloc pkts_sk_check_connect pkts_sk_consume pkts_sk_delete pkts_sk_destroy pkts_sk_do_decode pkts_sk_do_flush pkts_sk_flush pkts_sk_free pkts_sk_handle_event pkts_sk_handle_event_ready pkts_sk_handle_msg pkts_sk_init pkts_sk_msg_done pkts_sk_new pkts_sk_read pkts_sk_t pkts_start pkts_t pkts_thread_work pkts_try_connect pkts_write_queue_on_sk_destroy
#define pkts_get_id rk_pkts_get_id // pkts_get_id ./nio/packet_server.c:95 #include "nio.t.h.gen" // #global: pkts_cb_t pkts_cfg_t pkts_create pkts_cur_resp pkts_decode pkts_do_cb pkts_do_cb_exception pkts_do_connect pkts_do_init pkts_do_post pkts_evfd_cb pkts_flush_cb pkts_flush_cb_after_flush pkts_flush_cb_exception pkts_flush_cb_on_post_fail pkts_g_t pkts_get_id pkts_get_sk pkts_handle_one_req pkts_handle_req_queue pkts_init pkts_minit pkts_minit_cfg pkts_msg_t pkts_post pkts_post_async pkts_post_io pkts_req_dispatch pkts_req_t pkts_resp_cb_on_msg pkts_resp_cb_on_post_fail pkts_resp_cb_on_sk_destroy pkts_resp_cb_on_timeout pkts_select_thread pkts_sf_do_init pkts_sf_init pkts_sf_t pkts_sk_alloc pkts_sk_check_connect pkts_sk_consume pkts_sk_delete pkts_sk_destroy pkts_sk_do_decode pkts_sk_do_flush pkts_sk_flush pkts_sk_free pkts_sk_handle_event pkts_sk_handle_event_ready pkts_sk_handle_msg pkts_sk_init pkts_sk_msg_done pkts_sk_new pkts_sk_read pkts_sk_t pkts_start pkts_t pkts_thread_work pkts_try_connect pkts_write_queue_on_sk_destroy
#define pkts_handle_one_req rk_pkts_handle_one_req // pkts_handle_one_req ./nio/packet_server.c:95 #include "nio.t.h.gen" // #global: pkts_cb_t pkts_cfg_t pkts_create pkts_cur_resp pkts_decode pkts_do_cb pkts_do_cb_exception pkts_do_connect pkts_do_init pkts_do_post pkts_evfd_cb pkts_flush_cb pkts_flush_cb_after_flush pkts_flush_cb_exception pkts_flush_cb_on_post_fail pkts_g_t pkts_get_id pkts_get_sk pkts_handle_one_req pkts_handle_req_queue pkts_init pkts_minit pkts_minit_cfg pkts_msg_t pkts_post pkts_post_async pkts_post_io pkts_req_dispatch pkts_req_t pkts_resp_cb_on_msg pkts_resp_cb_on_post_fail pkts_resp_cb_on_sk_destroy pkts_resp_cb_on_timeout pkts_select_thread pkts_sf_do_init pkts_sf_init pkts_sf_t pkts_sk_alloc pkts_sk_check_connect pkts_sk_consume pkts_sk_delete pkts_sk_destroy pkts_sk_do_decode pkts_sk_do_flush pkts_sk_flush pkts_sk_free pkts_sk_handle_event pkts_sk_handle_event_ready pkts_sk_handle_msg pkts_sk_init pkts_sk_msg_done pkts_sk_new pkts_sk_read pkts_sk_t pkts_start pkts_t pkts_thread_work pkts_try_connect pkts_write_queue_on_sk_destroy
#define pkts_handle_req_queue rk_pkts_handle_req_queue // pkts_handle_req_queue ./nio/packet_server.c:95 #include "nio.t.h.gen" // #global: pkts_cb_t pkts_cfg_t pkts_create pkts_cur_resp pkts_decode pkts_do_cb pkts_do_cb_exception pkts_do_connect pkts_do_init pkts_do_post pkts_evfd_cb pkts_flush_cb pkts_flush_cb_after_flush pkts_flush_cb_exception pkts_flush_cb_on_post_fail pkts_g_t pkts_get_id pkts_get_sk pkts_handle_one_req pkts_handle_req_queue pkts_init pkts_minit pkts_minit_cfg pkts_msg_t pkts_post pkts_post_async pkts_post_io pkts_req_dispatch pkts_req_t pkts_resp_cb_on_msg pkts_resp_cb_on_post_fail pkts_resp_cb_on_sk_destroy pkts_resp_cb_on_timeout pkts_select_thread pkts_sf_do_init pkts_sf_init pkts_sf_t pkts_sk_alloc pkts_sk_check_connect pkts_sk_consume pkts_sk_delete pkts_sk_destroy pkts_sk_do_decode pkts_sk_do_flush pkts_sk_flush pkts_sk_free pkts_sk_handle_event pkts_sk_handle_event_ready pkts_sk_handle_msg pkts_sk_init pkts_sk_msg_done pkts_sk_new pkts_sk_read pkts_sk_t pkts_start pkts_t pkts_thread_work pkts_try_connect pkts_write_queue_on_sk_destroy
#define pkts_init rk_pkts_init // pkts_init ./nio/packet_server.c:95 #include "nio.t.h.gen" // #global: pkts_cb_t pkts_cfg_t pkts_create pkts_cur_resp pkts_decode pkts_do_cb pkts_do_cb_exception pkts_do_connect pkts_do_init pkts_do_post pkts_evfd_cb pkts_flush_cb pkts_flush_cb_after_flush pkts_flush_cb_exception pkts_flush_cb_on_post_fail pkts_g_t pkts_get_id pkts_get_sk pkts_handle_one_req pkts_handle_req_queue pkts_init pkts_minit pkts_minit_cfg pkts_msg_t pkts_post pkts_post_async pkts_post_io pkts_req_dispatch pkts_req_t pkts_resp_cb_on_msg pkts_resp_cb_on_post_fail pkts_resp_cb_on_sk_destroy pkts_resp_cb_on_timeout pkts_select_thread pkts_sf_do_init pkts_sf_init pkts_sf_t pkts_sk_alloc pkts_sk_check_connect pkts_sk_consume pkts_sk_delete pkts_sk_destroy pkts_sk_do_decode pkts_sk_do_flush pkts_sk_flush pkts_sk_free pkts_sk_handle_event pkts_sk_handle_event_ready pkts_sk_handle_msg pkts_sk_init pkts_sk_msg_done pkts_sk_new pkts_sk_read pkts_sk_t pkts_start pkts_t pkts_thread_work pkts_try_connect pkts_write_queue_on_sk_destroy
#define pkts_minit rk_pkts_minit // pkts_minit ./nio/packet_server.c:95 #include "nio.t.h.gen" // #global: pkts_cb_t pkts_cfg_t pkts_create pkts_cur_resp pkts_decode pkts_do_cb pkts_do_cb_exception pkts_do_connect pkts_do_init pkts_do_post pkts_evfd_cb pkts_flush_cb pkts_flush_cb_after_flush pkts_flush_cb_exception pkts_flush_cb_on_post_fail pkts_g_t pkts_get_id pkts_get_sk pkts_handle_one_req pkts_handle_req_queue pkts_init pkts_minit pkts_minit_cfg pkts_msg_t pkts_post pkts_post_async pkts_post_io pkts_req_dispatch pkts_req_t pkts_resp_cb_on_msg pkts_resp_cb_on_post_fail pkts_resp_cb_on_sk_destroy pkts_resp_cb_on_timeout pkts_select_thread pkts_sf_do_init pkts_sf_init pkts_sf_t pkts_sk_alloc pkts_sk_check_connect pkts_sk_consume pkts_sk_delete pkts_sk_destroy pkts_sk_do_decode pkts_sk_do_flush pkts_sk_flush pkts_sk_free pkts_sk_handle_event pkts_sk_handle_event_ready pkts_sk_handle_msg pkts_sk_init pkts_sk_msg_done pkts_sk_new pkts_sk_read pkts_sk_t pkts_start pkts_t pkts_thread_work pkts_try_connect pkts_write_queue_on_sk_destroy
#define pkts_post rk_pkts_post // pkts_post ./nio/packet_server.c:95 #include "nio.t.h.gen" // #global: pkts_cb_t pkts_cfg_t pkts_create pkts_cur_resp pkts_decode pkts_do_cb pkts_do_cb_exception pkts_do_connect pkts_do_init pkts_do_post pkts_evfd_cb pkts_flush_cb pkts_flush_cb_after_flush pkts_flush_cb_exception pkts_flush_cb_on_post_fail pkts_g_t pkts_get_id pkts_get_sk pkts_handle_one_req pkts_handle_req_queue pkts_init pkts_minit pkts_minit_cfg pkts_msg_t pkts_post pkts_post_async pkts_post_io pkts_req_dispatch pkts_req_t pkts_resp_cb_on_msg pkts_resp_cb_on_post_fail pkts_resp_cb_on_sk_destroy pkts_resp_cb_on_timeout pkts_select_thread pkts_sf_do_init pkts_sf_init pkts_sf_t pkts_sk_alloc pkts_sk_check_connect pkts_sk_consume pkts_sk_delete pkts_sk_destroy pkts_sk_do_decode pkts_sk_do_flush pkts_sk_flush pkts_sk_free pkts_sk_handle_event pkts_sk_handle_event_ready pkts_sk_handle_msg pkts_sk_init pkts_sk_msg_done pkts_sk_new pkts_sk_read pkts_sk_t pkts_start pkts_t pkts_thread_work pkts_try_connect pkts_write_queue_on_sk_destroy
#define pkts_post_async rk_pkts_post_async // pkts_post_async ./nio/packet_server.c:95 #include "nio.t.h.gen" // #global: pkts_cb_t pkts_cfg_t pkts_create pkts_cur_resp pkts_decode pkts_do_cb pkts_do_cb_exception pkts_do_connect pkts_do_init pkts_do_post pkts_evfd_cb pkts_flush_cb pkts_flush_cb_after_flush pkts_flush_cb_exception pkts_flush_cb_on_post_fail pkts_g_t pkts_get_id pkts_get_sk pkts_handle_one_req pkts_handle_req_queue pkts_init pkts_minit pkts_minit_cfg pkts_msg_t pkts_post pkts_post_async pkts_post_io pkts_req_dispatch pkts_req_t pkts_resp_cb_on_msg pkts_resp_cb_on_post_fail pkts_resp_cb_on_sk_destroy pkts_resp_cb_on_timeout pkts_select_thread pkts_sf_do_init pkts_sf_init pkts_sf_t pkts_sk_alloc pkts_sk_check_connect pkts_sk_consume pkts_sk_delete pkts_sk_destroy pkts_sk_do_decode pkts_sk_do_flush pkts_sk_flush pkts_sk_free pkts_sk_handle_event pkts_sk_handle_event_ready pkts_sk_handle_msg pkts_sk_init pkts_sk_msg_done pkts_sk_new pkts_sk_read pkts_sk_t pkts_start pkts_t pkts_thread_work pkts_try_connect pkts_write_queue_on_sk_destroy
#define pkts_post_io rk_pkts_post_io // pkts_post_io ./nio/packet_server.c:95 #include "nio.t.h.gen" // #global: pkts_cb_t pkts_cfg_t pkts_create pkts_cur_resp pkts_decode pkts_do_cb pkts_do_cb_exception pkts_do_connect pkts_do_init pkts_do_post pkts_evfd_cb pkts_flush_cb pkts_flush_cb_after_flush pkts_flush_cb_exception pkts_flush_cb_on_post_fail pkts_g_t pkts_get_id pkts_get_sk pkts_handle_one_req pkts_handle_req_queue pkts_init pkts_minit pkts_minit_cfg pkts_msg_t pkts_post pkts_post_async pkts_post_io pkts_req_dispatch pkts_req_t pkts_resp_cb_on_msg pkts_resp_cb_on_post_fail pkts_resp_cb_on_sk_destroy pkts_resp_cb_on_timeout pkts_select_thread pkts_sf_do_init pkts_sf_init pkts_sf_t pkts_sk_alloc pkts_sk_check_connect pkts_sk_consume pkts_sk_delete pkts_sk_destroy pkts_sk_do_decode pkts_sk_do_flush pkts_sk_flush pkts_sk_free pkts_sk_handle_event pkts_sk_handle_event_ready pkts_sk_handle_msg pkts_sk_init pkts_sk_msg_done pkts_sk_new pkts_sk_read pkts_sk_t pkts_start pkts_t pkts_thread_work pkts_try_connect pkts_write_queue_on_sk_destroy
#define pkts_req_dispatch rk_pkts_req_dispatch // pkts_req_dispatch ./nio/packet_server.c:95 #include "nio.t.h.gen" // #global: pkts_cb_t pkts_cfg_t pkts_create pkts_cur_resp pkts_decode pkts_do_cb pkts_do_cb_exception pkts_do_connect pkts_do_init pkts_do_post pkts_evfd_cb pkts_flush_cb pkts_flush_cb_after_flush pkts_flush_cb_exception pkts_flush_cb_on_post_fail pkts_g_t pkts_get_id pkts_get_sk pkts_handle_one_req pkts_handle_req_queue pkts_init pkts_minit pkts_minit_cfg pkts_msg_t pkts_post pkts_post_async pkts_post_io pkts_req_dispatch pkts_req_t pkts_resp_cb_on_msg pkts_resp_cb_on_post_fail pkts_resp_cb_on_sk_destroy pkts_resp_cb_on_timeout pkts_select_thread pkts_sf_do_init pkts_sf_init pkts_sf_t pkts_sk_alloc pkts_sk_check_connect pkts_sk_consume pkts_sk_delete pkts_sk_destroy pkts_sk_do_decode pkts_sk_do_flush pkts_sk_flush pkts_sk_free pkts_sk_handle_event pkts_sk_handle_event_ready pkts_sk_handle_msg pkts_sk_init pkts_sk_msg_done pkts_sk_new pkts_sk_read pkts_sk_t pkts_start pkts_t pkts_thread_work pkts_try_connect pkts_write_queue_on_sk_destroy
#define pkts_req_t rk_pkts_req_t // pkts_req_t ./nio/packet_server.c:95 #include "nio.t.h.gen" // #global: pkts_cb_t pkts_cfg_t pkts_create pkts_cur_resp pkts_decode pkts_do_cb pkts_do_cb_exception pkts_do_connect pkts_do_init pkts_do_post pkts_evfd_cb pkts_flush_cb pkts_flush_cb_after_flush pkts_flush_cb_exception pkts_flush_cb_on_post_fail pkts_g_t pkts_get_id pkts_get_sk pkts_handle_one_req pkts_handle_req_queue pkts_init pkts_minit pkts_minit_cfg pkts_msg_t pkts_post pkts_post_async pkts_post_io pkts_req_dispatch pkts_req_t pkts_resp_cb_on_msg pkts_resp_cb_on_post_fail pkts_resp_cb_on_sk_destroy pkts_resp_cb_on_timeout pkts_select_thread pkts_sf_do_init pkts_sf_init pkts_sf_t pkts_sk_alloc pkts_sk_check_connect pkts_sk_consume pkts_sk_delete pkts_sk_destroy pkts_sk_do_decode pkts_sk_do_flush pkts_sk_flush pkts_sk_free pkts_sk_handle_event pkts_sk_handle_event_ready pkts_sk_handle_msg pkts_sk_init pkts_sk_msg_done pkts_sk_new pkts_sk_read pkts_sk_t pkts_start pkts_t pkts_thread_work pkts_try_connect pkts_write_queue_on_sk_destroy
#define pkts_resp_cb_on_msg rk_pkts_resp_cb_on_msg // pkts_resp_cb_on_msg ./nio/packet_server.c:95 #include "nio.t.h.gen" // #global: pkts_cb_t pkts_cfg_t pkts_create pkts_cur_resp pkts_decode pkts_do_cb pkts_do_cb_exception pkts_do_connect pkts_do_init pkts_do_post pkts_evfd_cb pkts_flush_cb pkts_flush_cb_after_flush pkts_flush_cb_exception pkts_flush_cb_on_post_fail pkts_g_t pkts_get_id pkts_get_sk pkts_handle_one_req pkts_handle_req_queue pkts_init pkts_minit pkts_minit_cfg pkts_msg_t pkts_post pkts_post_async pkts_post_io pkts_req_dispatch pkts_req_t pkts_resp_cb_on_msg pkts_resp_cb_on_post_fail pkts_resp_cb_on_sk_destroy pkts_resp_cb_on_timeout pkts_select_thread pkts_sf_do_init pkts_sf_init pkts_sf_t pkts_sk_alloc pkts_sk_check_connect pkts_sk_consume pkts_sk_delete pkts_sk_destroy pkts_sk_do_decode pkts_sk_do_flush pkts_sk_flush pkts_sk_free pkts_sk_handle_event pkts_sk_handle_event_ready pkts_sk_handle_msg pkts_sk_init pkts_sk_msg_done pkts_sk_new pkts_sk_read pkts_sk_t pkts_start pkts_t pkts_thread_work pkts_try_connect pkts_write_queue_on_sk_destroy
#define pkts_resp_cb_on_post_fail rk_pkts_resp_cb_on_post_fail // pkts_resp_cb_on_post_fail ./nio/packet_server.c:95 #include "nio.t.h.gen" // #global: pkts_cb_t pkts_cfg_t pkts_create pkts_cur_resp pkts_decode pkts_do_cb pkts_do_cb_exception pkts_do_connect pkts_do_init pkts_do_post pkts_evfd_cb pkts_flush_cb pkts_flush_cb_after_flush pkts_flush_cb_exception pkts_flush_cb_on_post_fail pkts_g_t pkts_get_id pkts_get_sk pkts_handle_one_req pkts_handle_req_queue pkts_init pkts_minit pkts_minit_cfg pkts_msg_t pkts_post pkts_post_async pkts_post_io pkts_req_dispatch pkts_req_t pkts_resp_cb_on_msg pkts_resp_cb_on_post_fail pkts_resp_cb_on_sk_destroy pkts_resp_cb_on_timeout pkts_select_thread pkts_sf_do_init pkts_sf_init pkts_sf_t pkts_sk_alloc pkts_sk_check_connect pkts_sk_consume pkts_sk_delete pkts_sk_destroy pkts_sk_do_decode pkts_sk_do_flush pkts_sk_flush pkts_sk_free pkts_sk_handle_event pkts_sk_handle_event_ready pkts_sk_handle_msg pkts_sk_init pkts_sk_msg_done pkts_sk_new pkts_sk_read pkts_sk_t pkts_start pkts_t pkts_thread_work pkts_try_connect pkts_write_queue_on_sk_destroy
#define pkts_resp_cb_on_sk_destroy rk_pkts_resp_cb_on_sk_destroy // pkts_resp_cb_on_sk_destroy ./nio/packet_server.c:95 #include "nio.t.h.gen" // #global: pkts_cb_t pkts_cfg_t pkts_create pkts_cur_resp pkts_decode pkts_do_cb pkts_do_cb_exception pkts_do_connect pkts_do_init pkts_do_post pkts_evfd_cb pkts_flush_cb pkts_flush_cb_after_flush pkts_flush_cb_exception pkts_flush_cb_on_post_fail pkts_g_t pkts_get_id pkts_get_sk pkts_handle_one_req pkts_handle_req_queue pkts_init pkts_minit pkts_minit_cfg pkts_msg_t pkts_post pkts_post_async pkts_post_io pkts_req_dispatch pkts_req_t pkts_resp_cb_on_msg pkts_resp_cb_on_post_fail pkts_resp_cb_on_sk_destroy pkts_resp_cb_on_timeout pkts_select_thread pkts_sf_do_init pkts_sf_init pkts_sf_t pkts_sk_alloc pkts_sk_check_connect pkts_sk_consume pkts_sk_delete pkts_sk_destroy pkts_sk_do_decode pkts_sk_do_flush pkts_sk_flush pkts_sk_free pkts_sk_handle_event pkts_sk_handle_event_ready pkts_sk_handle_msg pkts_sk_init pkts_sk_msg_done pkts_sk_new pkts_sk_read pkts_sk_t pkts_start pkts_t pkts_thread_work pkts_try_connect pkts_write_queue_on_sk_destroy
#define pkts_resp_cb_on_timeout rk_pkts_resp_cb_on_timeout // pkts_resp_cb_on_timeout ./nio/packet_server.c:95 #include "nio.t.h.gen" // #global: pkts_cb_t pkts_cfg_t pkts_create pkts_cur_resp pkts_decode pkts_do_cb pkts_do_cb_exception pkts_do_connect pkts_do_init pkts_do_post pkts_evfd_cb pkts_flush_cb pkts_flush_cb_after_flush pkts_flush_cb_exception pkts_flush_cb_on_post_fail pkts_g_t pkts_get_id pkts_get_sk pkts_handle_one_req pkts_handle_req_queue pkts_init pkts_minit pkts_minit_cfg pkts_msg_t pkts_post pkts_post_async pkts_post_io pkts_req_dispatch pkts_req_t pkts_resp_cb_on_msg pkts_resp_cb_on_post_fail pkts_resp_cb_on_sk_destroy pkts_resp_cb_on_timeout pkts_select_thread pkts_sf_do_init pkts_sf_init pkts_sf_t pkts_sk_alloc pkts_sk_check_connect pkts_sk_consume pkts_sk_delete pkts_sk_destroy pkts_sk_do_decode pkts_sk_do_flush pkts_sk_flush pkts_sk_free pkts_sk_handle_event pkts_sk_handle_event_ready pkts_sk_handle_msg pkts_sk_init pkts_sk_msg_done pkts_sk_new pkts_sk_read pkts_sk_t pkts_start pkts_t pkts_thread_work pkts_try_connect pkts_write_queue_on_sk_destroy
#define pkts_select_thread rk_pkts_select_thread // pkts_select_thread ./nio/packet_server.c:95 #include "nio.t.h.gen" // #global: pkts_cb_t pkts_cfg_t pkts_create pkts_cur_resp pkts_decode pkts_do_cb pkts_do_cb_exception pkts_do_connect pkts_do_init pkts_do_post pkts_evfd_cb pkts_flush_cb pkts_flush_cb_after_flush pkts_flush_cb_exception pkts_flush_cb_on_post_fail pkts_g_t pkts_get_id pkts_get_sk pkts_handle_one_req pkts_handle_req_queue pkts_init pkts_minit pkts_minit_cfg pkts_msg_t pkts_post pkts_post_async pkts_post_io pkts_req_dispatch pkts_req_t pkts_resp_cb_on_msg pkts_resp_cb_on_post_fail pkts_resp_cb_on_sk_destroy pkts_resp_cb_on_timeout pkts_select_thread pkts_sf_do_init pkts_sf_init pkts_sf_t pkts_sk_alloc pkts_sk_check_connect pkts_sk_consume pkts_sk_delete pkts_sk_destroy pkts_sk_do_decode pkts_sk_do_flush pkts_sk_flush pkts_sk_free pkts_sk_handle_event pkts_sk_handle_event_ready pkts_sk_handle_msg pkts_sk_init pkts_sk_msg_done pkts_sk_new pkts_sk_read pkts_sk_t pkts_start pkts_t pkts_thread_work pkts_try_connect pkts_write_queue_on_sk_destroy
#define pkts_sf_init rk_pkts_sf_init // pkts_sf_init ./nio/packet_server.c:95 #include "nio.t.h.gen" // #global: pkts_cb_t pkts_cfg_t pkts_create pkts_cur_resp pkts_decode pkts_do_cb pkts_do_cb_exception pkts_do_connect pkts_do_init pkts_do_post pkts_evfd_cb pkts_flush_cb pkts_flush_cb_after_flush pkts_flush_cb_exception pkts_flush_cb_on_post_fail pkts_g_t pkts_get_id pkts_get_sk pkts_handle_one_req pkts_handle_req_queue pkts_init pkts_minit pkts_minit_cfg pkts_msg_t pkts_post pkts_post_async pkts_post_io pkts_req_dispatch pkts_req_t pkts_resp_cb_on_msg pkts_resp_cb_on_post_fail pkts_resp_cb_on_sk_destroy pkts_resp_cb_on_timeout pkts_select_thread pkts_sf_do_init pkts_sf_init pkts_sf_t pkts_sk_alloc pkts_sk_check_connect pkts_sk_consume pkts_sk_delete pkts_sk_destroy pkts_sk_do_decode pkts_sk_do_flush pkts_sk_flush pkts_sk_free pkts_sk_handle_event pkts_sk_handle_event_ready pkts_sk_handle_msg pkts_sk_init pkts_sk_msg_done pkts_sk_new pkts_sk_read pkts_sk_t pkts_start pkts_t pkts_thread_work pkts_try_connect pkts_write_queue_on_sk_destroy
#define pkts_sk_alloc rk_pkts_sk_alloc // pkts_sk_alloc ./nio/packet_server.c:95 #include "nio.t.h.gen" // #global: pkts_cb_t pkts_cfg_t pkts_create pkts_cur_resp pkts_decode pkts_do_cb pkts_do_cb_exception pkts_do_connect pkts_do_init pkts_do_post pkts_evfd_cb pkts_flush_cb pkts_flush_cb_after_flush pkts_flush_cb_exception pkts_flush_cb_on_post_fail pkts_g_t pkts_get_id pkts_get_sk pkts_handle_one_req pkts_handle_req_queue pkts_init pkts_minit pkts_minit_cfg pkts_msg_t pkts_post pkts_post_async pkts_post_io pkts_req_dispatch pkts_req_t pkts_resp_cb_on_msg pkts_resp_cb_on_post_fail pkts_resp_cb_on_sk_destroy pkts_resp_cb_on_timeout pkts_select_thread pkts_sf_do_init pkts_sf_init pkts_sf_t pkts_sk_alloc pkts_sk_check_connect pkts_sk_consume pkts_sk_delete pkts_sk_destroy pkts_sk_do_decode pkts_sk_do_flush pkts_sk_flush pkts_sk_free pkts_sk_handle_event pkts_sk_handle_event_ready pkts_sk_handle_msg pkts_sk_init pkts_sk_msg_done pkts_sk_new pkts_sk_read pkts_sk_t pkts_start pkts_t pkts_thread_work pkts_try_connect pkts_write_queue_on_sk_destroy
#define pkts_sk_check_connect rk_pkts_sk_check_connect // pkts_sk_check_connect ./nio/packet_server.c:95 #include "nio.t.h.gen" // #global: pkts_cb_t pkts_cfg_t pkts_create pkts_cur_resp pkts_decode pkts_do_cb pkts_do_cb_exception pkts_do_connect pkts_do_init pkts_do_post pkts_evfd_cb pkts_flush_cb pkts_flush_cb_after_flush pkts_flush_cb_exception pkts_flush_cb_on_post_fail pkts_g_t pkts_get_id pkts_get_sk pkts_handle_one_req pkts_handle_req_queue pkts_init pkts_minit pkts_minit_cfg pkts_msg_t pkts_post pkts_post_async pkts_post_io pkts_req_dispatch pkts_req_t pkts_resp_cb_on_msg pkts_resp_cb_on_post_fail pkts_resp_cb_on_sk_destroy pkts_resp_cb_on_timeout pkts_select_thread pkts_sf_do_init pkts_sf_init pkts_sf_t pkts_sk_alloc pkts_sk_check_connect pkts_sk_consume pkts_sk_delete pkts_sk_destroy pkts_sk_do_decode pkts_sk_do_flush pkts_sk_flush pkts_sk_free pkts_sk_handle_event pkts_sk_handle_event_ready pkts_sk_handle_msg pkts_sk_init pkts_sk_msg_done pkts_sk_new pkts_sk_read pkts_sk_t pkts_start pkts_t pkts_thread_work pkts_try_connect pkts_write_queue_on_sk_destroy
#define pkts_sk_consume rk_pkts_sk_consume // pkts_sk_consume ./nio/packet_server.c:95 #include "nio.t.h.gen" // #global: pkts_cb_t pkts_cfg_t pkts_create pkts_cur_resp pkts_decode pkts_do_cb pkts_do_cb_exception pkts_do_connect pkts_do_init pkts_do_post pkts_evfd_cb pkts_flush_cb pkts_flush_cb_after_flush pkts_flush_cb_exception pkts_flush_cb_on_post_fail pkts_g_t pkts_get_id pkts_get_sk pkts_handle_one_req pkts_handle_req_queue pkts_init pkts_minit pkts_minit_cfg pkts_msg_t pkts_post pkts_post_async pkts_post_io pkts_req_dispatch pkts_req_t pkts_resp_cb_on_msg pkts_resp_cb_on_post_fail pkts_resp_cb_on_sk_destroy pkts_resp_cb_on_timeout pkts_select_thread pkts_sf_do_init pkts_sf_init pkts_sf_t pkts_sk_alloc pkts_sk_check_connect pkts_sk_consume pkts_sk_delete pkts_sk_destroy pkts_sk_do_decode pkts_sk_do_flush pkts_sk_flush pkts_sk_free pkts_sk_handle_event pkts_sk_handle_event_ready pkts_sk_handle_msg pkts_sk_init pkts_sk_msg_done pkts_sk_new pkts_sk_read pkts_sk_t pkts_start pkts_t pkts_thread_work pkts_try_connect pkts_write_queue_on_sk_destroy
#define pkts_sk_delete rk_pkts_sk_delete // pkts_sk_delete ./nio/packet_server.c:95 #include "nio.t.h.gen" // #global: pkts_cb_t pkts_cfg_t pkts_create pkts_cur_resp pkts_decode pkts_do_cb pkts_do_cb_exception pkts_do_connect pkts_do_init pkts_do_post pkts_evfd_cb pkts_flush_cb pkts_flush_cb_after_flush pkts_flush_cb_exception pkts_flush_cb_on_post_fail pkts_g_t pkts_get_id pkts_get_sk pkts_handle_one_req pkts_handle_req_queue pkts_init pkts_minit pkts_minit_cfg pkts_msg_t pkts_post pkts_post_async pkts_post_io pkts_req_dispatch pkts_req_t pkts_resp_cb_on_msg pkts_resp_cb_on_post_fail pkts_resp_cb_on_sk_destroy pkts_resp_cb_on_timeout pkts_select_thread pkts_sf_do_init pkts_sf_init pkts_sf_t pkts_sk_alloc pkts_sk_check_connect pkts_sk_consume pkts_sk_delete pkts_sk_destroy pkts_sk_do_decode pkts_sk_do_flush pkts_sk_flush pkts_sk_free pkts_sk_handle_event pkts_sk_handle_event_ready pkts_sk_handle_msg pkts_sk_init pkts_sk_msg_done pkts_sk_new pkts_sk_read pkts_sk_t pkts_start pkts_t pkts_thread_work pkts_try_connect pkts_write_queue_on_sk_destroy
#define pkts_sk_do_decode rk_pkts_sk_do_decode // pkts_sk_do_decode ./nio/packet_server.c:95 #include "nio.t.h.gen" // #global: pkts_cb_t pkts_cfg_t pkts_create pkts_cur_resp pkts_decode pkts_do_cb pkts_do_cb_exception pkts_do_connect pkts_do_init pkts_do_post pkts_evfd_cb pkts_flush_cb pkts_flush_cb_after_flush pkts_flush_cb_exception pkts_flush_cb_on_post_fail pkts_g_t pkts_get_id pkts_get_sk pkts_handle_one_req pkts_handle_req_queue pkts_init pkts_minit pkts_minit_cfg pkts_msg_t pkts_post pkts_post_async pkts_post_io pkts_req_dispatch pkts_req_t pkts_resp_cb_on_msg pkts_resp_cb_on_post_fail pkts_resp_cb_on_sk_destroy pkts_resp_cb_on_timeout pkts_select_thread pkts_sf_do_init pkts_sf_init pkts_sf_t pkts_sk_alloc pkts_sk_check_connect pkts_sk_consume pkts_sk_delete pkts_sk_destroy pkts_sk_do_decode pkts_sk_do_flush pkts_sk_flush pkts_sk_free pkts_sk_handle_event pkts_sk_handle_event_ready pkts_sk_handle_msg pkts_sk_init pkts_sk_msg_done pkts_sk_new pkts_sk_read pkts_sk_t pkts_start pkts_t pkts_thread_work pkts_try_connect pkts_write_queue_on_sk_destroy
#define pkts_sk_do_flush rk_pkts_sk_do_flush // pkts_sk_do_flush ./nio/packet_server.c:95 #include "nio.t.h.gen" // #global: pkts_cb_t pkts_cfg_t pkts_create pkts_cur_resp pkts_decode pkts_do_cb pkts_do_cb_exception pkts_do_connect pkts_do_init pkts_do_post pkts_evfd_cb pkts_flush_cb pkts_flush_cb_after_flush pkts_flush_cb_exception pkts_flush_cb_on_post_fail pkts_g_t pkts_get_id pkts_get_sk pkts_handle_one_req pkts_handle_req_queue pkts_init pkts_minit pkts_minit_cfg pkts_msg_t pkts_post pkts_post_async pkts_post_io pkts_req_dispatch pkts_req_t pkts_resp_cb_on_msg pkts_resp_cb_on_post_fail pkts_resp_cb_on_sk_destroy pkts_resp_cb_on_timeout pkts_select_thread pkts_sf_do_init pkts_sf_init pkts_sf_t pkts_sk_alloc pkts_sk_check_connect pkts_sk_consume pkts_sk_delete pkts_sk_destroy pkts_sk_do_decode pkts_sk_do_flush pkts_sk_flush pkts_sk_free pkts_sk_handle_event pkts_sk_handle_event_ready pkts_sk_handle_msg pkts_sk_init pkts_sk_msg_done pkts_sk_new pkts_sk_read pkts_sk_t pkts_start pkts_t pkts_thread_work pkts_try_connect pkts_write_queue_on_sk_destroy
#define pkts_sk_flush rk_pkts_sk_flush // pkts_sk_flush ./nio/packet_server.c:95 #include "nio.t.h.gen" // #global: pkts_cb_t pkts_cfg_t pkts_create pkts_cur_resp pkts_decode pkts_do_cb pkts_do_cb_exception pkts_do_connect pkts_do_init pkts_do_post pkts_evfd_cb pkts_flush_cb pkts_flush_cb_after_flush pkts_flush_cb_exception pkts_flush_cb_on_post_fail pkts_g_t pkts_get_id pkts_get_sk pkts_handle_one_req pkts_handle_req_queue pkts_init pkts_minit pkts_minit_cfg pkts_msg_t pkts_post pkts_post_async pkts_post_io pkts_req_dispatch pkts_req_t pkts_resp_cb_on_msg pkts_resp_cb_on_post_fail pkts_resp_cb_on_sk_destroy pkts_resp_cb_on_timeout pkts_select_thread pkts_sf_do_init pkts_sf_init pkts_sf_t pkts_sk_alloc pkts_sk_check_connect pkts_sk_consume pkts_sk_delete pkts_sk_destroy pkts_sk_do_decode pkts_sk_do_flush pkts_sk_flush pkts_sk_free pkts_sk_handle_event pkts_sk_handle_event_ready pkts_sk_handle_msg pkts_sk_init pkts_sk_msg_done pkts_sk_new pkts_sk_read pkts_sk_t pkts_start pkts_t pkts_thread_work pkts_try_connect pkts_write_queue_on_sk_destroy
#define pkts_sk_free rk_pkts_sk_free // pkts_sk_free ./nio/packet_server.c:95 #include "nio.t.h.gen" // #global: pkts_cb_t pkts_cfg_t pkts_create pkts_cur_resp pkts_decode pkts_do_cb pkts_do_cb_exception pkts_do_connect pkts_do_init pkts_do_post pkts_evfd_cb pkts_flush_cb pkts_flush_cb_after_flush pkts_flush_cb_exception pkts_flush_cb_on_post_fail pkts_g_t pkts_get_id pkts_get_sk pkts_handle_one_req pkts_handle_req_queue pkts_init pkts_minit pkts_minit_cfg pkts_msg_t pkts_post pkts_post_async pkts_post_io pkts_req_dispatch pkts_req_t pkts_resp_cb_on_msg pkts_resp_cb_on_post_fail pkts_resp_cb_on_sk_destroy pkts_resp_cb_on_timeout pkts_select_thread pkts_sf_do_init pkts_sf_init pkts_sf_t pkts_sk_alloc pkts_sk_check_connect pkts_sk_consume pkts_sk_delete pkts_sk_destroy pkts_sk_do_decode pkts_sk_do_flush pkts_sk_flush pkts_sk_free pkts_sk_handle_event pkts_sk_handle_event_ready pkts_sk_handle_msg pkts_sk_init pkts_sk_msg_done pkts_sk_new pkts_sk_read pkts_sk_t pkts_start pkts_t pkts_thread_work pkts_try_connect pkts_write_queue_on_sk_destroy
#define pkts_sk_handle_event rk_pkts_sk_handle_event // pkts_sk_handle_event ./nio/packet_server.c:95 #include "nio.t.h.gen" // #global: pkts_cb_t pkts_cfg_t pkts_create pkts_cur_resp pkts_decode pkts_do_cb pkts_do_cb_exception pkts_do_connect pkts_do_init pkts_do_post pkts_evfd_cb pkts_flush_cb pkts_flush_cb_after_flush pkts_flush_cb_exception pkts_flush_cb_on_post_fail pkts_g_t pkts_get_id pkts_get_sk pkts_handle_one_req pkts_handle_req_queue pkts_init pkts_minit pkts_minit_cfg pkts_msg_t pkts_post pkts_post_async pkts_post_io pkts_req_dispatch pkts_req_t pkts_resp_cb_on_msg pkts_resp_cb_on_post_fail pkts_resp_cb_on_sk_destroy pkts_resp_cb_on_timeout pkts_select_thread pkts_sf_do_init pkts_sf_init pkts_sf_t pkts_sk_alloc pkts_sk_check_connect pkts_sk_consume pkts_sk_delete pkts_sk_destroy pkts_sk_do_decode pkts_sk_do_flush pkts_sk_flush pkts_sk_free pkts_sk_handle_event pkts_sk_handle_event_ready pkts_sk_handle_msg pkts_sk_init pkts_sk_msg_done pkts_sk_new pkts_sk_read pkts_sk_t pkts_start pkts_t pkts_thread_work pkts_try_connect pkts_write_queue_on_sk_destroy
#define pkts_sk_handle_event_ready rk_pkts_sk_handle_event_ready // pkts_sk_handle_event_ready ./nio/packet_server.c:95 #include "nio.t.h.gen" // #global: pkts_cb_t pkts_cfg_t pkts_create pkts_cur_resp pkts_decode pkts_do_cb pkts_do_cb_exception pkts_do_connect pkts_do_init pkts_do_post pkts_evfd_cb pkts_flush_cb pkts_flush_cb_after_flush pkts_flush_cb_exception pkts_flush_cb_on_post_fail pkts_g_t pkts_get_id pkts_get_sk pkts_handle_one_req pkts_handle_req_queue pkts_init pkts_minit pkts_minit_cfg pkts_msg_t pkts_post pkts_post_async pkts_post_io pkts_req_dispatch pkts_req_t pkts_resp_cb_on_msg pkts_resp_cb_on_post_fail pkts_resp_cb_on_sk_destroy pkts_resp_cb_on_timeout pkts_select_thread pkts_sf_do_init pkts_sf_init pkts_sf_t pkts_sk_alloc pkts_sk_check_connect pkts_sk_consume pkts_sk_delete pkts_sk_destroy pkts_sk_do_decode pkts_sk_do_flush pkts_sk_flush pkts_sk_free pkts_sk_handle_event pkts_sk_handle_event_ready pkts_sk_handle_msg pkts_sk_init pkts_sk_msg_done pkts_sk_new pkts_sk_read pkts_sk_t pkts_start pkts_t pkts_thread_work pkts_try_connect pkts_write_queue_on_sk_destroy
#define pkts_sk_msg_done rk_pkts_sk_msg_done // pkts_sk_msg_done ./nio/packet_server.c:95 #include "nio.t.h.gen" // #global: pkts_cb_t pkts_cfg_t pkts_create pkts_cur_resp pkts_decode pkts_do_cb pkts_do_cb_exception pkts_do_connect pkts_do_init pkts_do_post pkts_evfd_cb pkts_flush_cb pkts_flush_cb_after_flush pkts_flush_cb_exception pkts_flush_cb_on_post_fail pkts_g_t pkts_get_id pkts_get_sk pkts_handle_one_req pkts_handle_req_queue pkts_init pkts_minit pkts_minit_cfg pkts_msg_t pkts_post pkts_post_async pkts_post_io pkts_req_dispatch pkts_req_t pkts_resp_cb_on_msg pkts_resp_cb_on_post_fail pkts_resp_cb_on_sk_destroy pkts_resp_cb_on_timeout pkts_select_thread pkts_sf_do_init pkts_sf_init pkts_sf_t pkts_sk_alloc pkts_sk_check_connect pkts_sk_consume pkts_sk_delete pkts_sk_destroy pkts_sk_do_decode pkts_sk_do_flush pkts_sk_flush pkts_sk_free pkts_sk_handle_event pkts_sk_handle_event_ready pkts_sk_handle_msg pkts_sk_init pkts_sk_msg_done pkts_sk_new pkts_sk_read pkts_sk_t pkts_start pkts_t pkts_thread_work pkts_try_connect pkts_write_queue_on_sk_destroy
#define pkts_sk_new rk_pkts_sk_new // pkts_sk_new ./nio/packet_server.c:95 #include "nio.t.h.gen" // #global: pkts_cb_t pkts_cfg_t pkts_create pkts_cur_resp pkts_decode pkts_do_cb pkts_do_cb_exception pkts_do_connect pkts_do_init pkts_do_post pkts_evfd_cb pkts_flush_cb pkts_flush_cb_after_flush pkts_flush_cb_exception pkts_flush_cb_on_post_fail pkts_g_t pkts_get_id pkts_get_sk pkts_handle_one_req pkts_handle_req_queue pkts_init pkts_minit pkts_minit_cfg pkts_msg_t pkts_post pkts_post_async pkts_post_io pkts_req_dispatch pkts_req_t pkts_resp_cb_on_msg pkts_resp_cb_on_post_fail pkts_resp_cb_on_sk_destroy pkts_resp_cb_on_timeout pkts_select_thread pkts_sf_do_init pkts_sf_init pkts_sf_t pkts_sk_alloc pkts_sk_check_connect pkts_sk_consume pkts_sk_delete pkts_sk_destroy pkts_sk_do_decode pkts_sk_do_flush pkts_sk_flush pkts_sk_free pkts_sk_handle_event pkts_sk_handle_event_ready pkts_sk_handle_msg pkts_sk_init pkts_sk_msg_done pkts_sk_new pkts_sk_read pkts_sk_t pkts_start pkts_t pkts_thread_work pkts_try_connect pkts_write_queue_on_sk_destroy
#define pkts_start rk_pkts_start // pkts_start ./nio/packet_server.c:95 #include "nio.t.h.gen" // #global: pkts_cb_t pkts_cfg_t pkts_create pkts_cur_resp pkts_decode pkts_do_cb pkts_do_cb_exception pkts_do_connect pkts_do_init pkts_do_post pkts_evfd_cb pkts_flush_cb pkts_flush_cb_after_flush pkts_flush_cb_exception pkts_flush_cb_on_post_fail pkts_g_t pkts_get_id pkts_get_sk pkts_handle_one_req pkts_handle_req_queue pkts_init pkts_minit pkts_minit_cfg pkts_msg_t pkts_post pkts_post_async pkts_post_io pkts_req_dispatch pkts_req_t pkts_resp_cb_on_msg pkts_resp_cb_on_post_fail pkts_resp_cb_on_sk_destroy pkts_resp_cb_on_timeout pkts_select_thread pkts_sf_do_init pkts_sf_init pkts_sf_t pkts_sk_alloc pkts_sk_check_connect pkts_sk_consume pkts_sk_delete pkts_sk_destroy pkts_sk_do_decode pkts_sk_do_flush pkts_sk_flush pkts_sk_free pkts_sk_handle_event pkts_sk_handle_event_ready pkts_sk_handle_msg pkts_sk_init pkts_sk_msg_done pkts_sk_new pkts_sk_read pkts_sk_t pkts_start pkts_t pkts_thread_work pkts_try_connect pkts_write_queue_on_sk_destroy
#define pkts_thread_work rk_pkts_thread_work // pkts_thread_work ./nio/packet_server.c:95 #include "nio.t.h.gen" // #global: pkts_cb_t pkts_cfg_t pkts_create pkts_cur_resp pkts_decode pkts_do_cb pkts_do_cb_exception pkts_do_connect pkts_do_init pkts_do_post pkts_evfd_cb pkts_flush_cb pkts_flush_cb_after_flush pkts_flush_cb_exception pkts_flush_cb_on_post_fail pkts_g_t pkts_get_id pkts_get_sk pkts_handle_one_req pkts_handle_req_queue pkts_init pkts_minit pkts_minit_cfg pkts_msg_t pkts_post pkts_post_async pkts_post_io pkts_req_dispatch pkts_req_t pkts_resp_cb_on_msg pkts_resp_cb_on_post_fail pkts_resp_cb_on_sk_destroy pkts_resp_cb_on_timeout pkts_select_thread pkts_sf_do_init pkts_sf_init pkts_sf_t pkts_sk_alloc pkts_sk_check_connect pkts_sk_consume pkts_sk_delete pkts_sk_destroy pkts_sk_do_decode pkts_sk_do_flush pkts_sk_flush pkts_sk_free pkts_sk_handle_event pkts_sk_handle_event_ready pkts_sk_handle_msg pkts_sk_init pkts_sk_msg_done pkts_sk_new pkts_sk_read pkts_sk_t pkts_start pkts_t pkts_thread_work pkts_try_connect pkts_write_queue_on_sk_destroy
#define pkts_try_connect rk_pkts_try_connect // pkts_try_connect ./nio/packet_server.c:95 #include "nio.t.h.gen" // #global: pkts_cb_t pkts_cfg_t pkts_create pkts_cur_resp pkts_decode pkts_do_cb pkts_do_cb_exception pkts_do_connect pkts_do_init pkts_do_post pkts_evfd_cb pkts_flush_cb pkts_flush_cb_after_flush pkts_flush_cb_exception pkts_flush_cb_on_post_fail pkts_g_t pkts_get_id pkts_get_sk pkts_handle_one_req pkts_handle_req_queue pkts_init pkts_minit pkts_minit_cfg pkts_msg_t pkts_post pkts_post_async pkts_post_io pkts_req_dispatch pkts_req_t pkts_resp_cb_on_msg pkts_resp_cb_on_post_fail pkts_resp_cb_on_sk_destroy pkts_resp_cb_on_timeout pkts_select_thread pkts_sf_do_init pkts_sf_init pkts_sf_t pkts_sk_alloc pkts_sk_check_connect pkts_sk_consume pkts_sk_delete pkts_sk_destroy pkts_sk_do_decode pkts_sk_do_flush pkts_sk_flush pkts_sk_free pkts_sk_handle_event pkts_sk_handle_event_ready pkts_sk_handle_msg pkts_sk_init pkts_sk_msg_done pkts_sk_new pkts_sk_read pkts_sk_t pkts_start pkts_t pkts_thread_work pkts_try_connect pkts_write_queue_on_sk_destroy
#define pkts_write_queue_on_sk_destroy rk_pkts_write_queue_on_sk_destroy // pkts_write_queue_on_sk_destroy ./nio/packet_server.c:95 #include "nio.t.h.gen" // #global: pkts_cb_t pkts_cfg_t pkts_create pkts_cur_resp pkts_decode pkts_do_cb pkts_do_cb_exception pkts_do_connect pkts_do_init pkts_do_post pkts_evfd_cb pkts_flush_cb pkts_flush_cb_after_flush pkts_flush_cb_exception pkts_flush_cb_on_post_fail pkts_g_t pkts_get_id pkts_get_sk pkts_handle_one_req pkts_handle_req_queue pkts_init pkts_minit pkts_minit_cfg pkts_msg_t pkts_post pkts_post_async pkts_post_io pkts_req_dispatch pkts_req_t pkts_resp_cb_on_msg pkts_resp_cb_on_post_fail pkts_resp_cb_on_sk_destroy pkts_resp_cb_on_timeout pkts_select_thread pkts_sf_do_init pkts_sf_init pkts_sf_t pkts_sk_alloc pkts_sk_check_connect pkts_sk_consume pkts_sk_delete pkts_sk_destroy pkts_sk_do_decode pkts_sk_do_flush pkts_sk_flush pkts_sk_free pkts_sk_handle_event pkts_sk_handle_event_ready pkts_sk_handle_msg pkts_sk_init pkts_sk_msg_done pkts_sk_new pkts_sk_read pkts_sk_t pkts_start pkts_t pkts_thread_work pkts_try_connect pkts_write_queue_on_sk_destroy
#define pkts_flush_cb_func_t rk_pkts_flush_cb_func_t // pkts_flush_cb_func_t ./nio/packet_server.h:4 typedef void (*pkts_flush_cb_func_t)(pkts_req_t* req);
#define sms_g_t rk_sms_g_t // sms_g_t ./nio/simple_msg_server.h:2 typedef struct sms_g_t sms_g_t;
#define sms_cfg_t rk_sms_cfg_t // sms_cfg_t ./nio/simple_msg_server.h:3 typedef struct sms_cfg_t {
#define sms_start rk_sms_start // sms_start ./nio/simple_msg_server.h:8 extern sms_g_t* sms_start(int n_thread, sms_cfg_t* cfg);
#define make_fd_nonblocking rk_make_fd_nonblocking // make_fd_nonblocking ./io/io_func.c:1 int make_fd_nonblocking(int fd)
#define is_pipe rk_is_pipe // is_pipe ./io/io_func.c:11 bool is_pipe(int fd) {
#define uintr_pread rk_uintr_pread // uintr_pread ./io/io_func.c:16 ssize_t uintr_pread(int fd, char* buf, int64_t size, int64_t offset) {
#define uintr_pwrite rk_uintr_pwrite // uintr_pwrite ./io/io_func.c:34 ssize_t uintr_pwrite(int fd, const char* buf, int64_t size, int64_t offset) {
#define fsize rk_fsize // fsize ./io/io_func.c:52 ssize_t fsize(const char* path) {
#define fmap rk_fmap // fmap ./io/io_func.c:61 char* fmap(const char* path, int oflag, int64_t size) {
#define uintr_read rk_uintr_read // uintr_read ./io/io_func.c:82 ssize_t uintr_read(int fd, char* buf, size_t size) {
#define uintr_readv rk_uintr_readv // uintr_readv ./io/io_func.c:89 ssize_t uintr_readv(int fd, struct iovec* iov, int cnt) {
#define uintr_write rk_uintr_write // uintr_write ./io/io_func.c:96 ssize_t uintr_write(int fd, const char* buf, size_t size) {
#define uintr_writev rk_uintr_writev // uintr_writev ./io/io_func.c:103 ssize_t uintr_writev(int fd, struct iovec* iov, int cnt) {
#define sk_read rk_sk_read // sk_read ./io/sock_io.h:1 extern int sk_read(sock_t* s, char* buf, size_t size, ssize_t* rbytes);
#define sk_readv rk_sk_readv // sk_readv ./io/sock_io.h:2 extern int sk_readv(sock_t* s, struct iovec* iov, int cnt, ssize_t* rbytes);
#define sk_write rk_sk_write // sk_write ./io/sock_io.h:3 extern int sk_write(sock_t* s, const char* buf, size_t size, ssize_t* wbytes);
#define sk_writev rk_sk_writev // sk_writev ./io/sock_io.h:4 extern int sk_writev(sock_t* s, struct iovec* iov, int cnt, ssize_t* wbytes);
#define sk_try_read_rb rk_sk_try_read_rb // sk_try_read_rb ./io/sock_io.h:5 extern int sk_try_read_rb(sock_t* s, rbuffer_t* rb);
#define sk_try_write_rb rk_sk_try_write_rb // sk_try_write_rb ./io/sock_io.h:6 extern int sk_try_write_rb(sock_t* s, rbuffer_t* rb);
#define sk_write_rb rk_sk_write_rb // sk_write_rb ./io/sock_io.h:7 extern int sk_write_rb(sock_t* s, rbuffer_t* rb);
#define sk_read_with_rb rk_sk_read_with_rb // sk_read_with_rb ./io/sock_io.h:8 extern int sk_read_with_rb(void** ret, sock_t* s, rbuffer_t* rb, int64_t size);
#define sk_alloc_with_rb rk_sk_alloc_with_rb // sk_alloc_with_rb ./io/sock_io.h:9 extern int sk_alloc_with_rb(void** ret, sock_t* s, rbuffer_t* wb, int64_t size);
#define sk_translate_io_error rk_sk_translate_io_error // sk_translate_io_error ./io/sock_io.c:1 static int sk_translate_io_error(sock_t* s, int64_t bytes, uint32_t epbit) {
#define sk_after_io rk_sk_after_io // sk_after_io ./io/sock_io.c:16 static int sk_after_io(sock_t* s, const char* buf, int64_t bytes, uint32_t epbit) {
#define sk_after_iov rk_sk_after_iov // sk_after_iov ./io/sock_io.c:21 static int sk_after_iov(sock_t* s, struct iovec* iov, int cnt, int64_t bytes, uint32_t epbit) {
#define sk_after_read rk_sk_after_read // sk_after_read ./io/sock_io.c:27 static int sk_after_read(sock_t* s, const char* buf, int64_t bytes) { return sk_after_io(s, buf, bytes, EPOLLIN); }
#define sk_after_write rk_sk_after_write // sk_after_write ./io/sock_io.c:28 static int sk_after_write(sock_t* s, const char* buf, int64_t bytes) { return sk_after_io(s, buf, bytes, EPOLLOUT); }
#define sk_after_readv rk_sk_after_readv // sk_after_readv ./io/sock_io.c:29 static int sk_after_readv(sock_t* s, struct iovec* iov, int cnt, int64_t bytes) { return sk_after_iov(s, iov, cnt, bytes, EPOLLIN); }
#define sk_after_writev rk_sk_after_writev // sk_after_writev ./io/sock_io.c:30 static int sk_after_writev(sock_t* s, struct iovec* iov, int cnt, int64_t bytes) { return sk_after_iov(s, iov, cnt, bytes, EPOLLOUT); }
#define sms_msg_t rk_sms_msg_t // sms_msg_t ./nio/simple_msg_server.c:1 typedef msg_t sms_msg_t;
#define sms_sk_t rk_sms_sk_t // sms_sk_t ./nio/simple_msg_server.c:2 typedef struct sms_sk_t {
#define sms_sf_t rk_sms_sf_t // sms_sf_t ./nio/simple_msg_server.c:8 typedef struct sms_sf_t {
#define sms_t rk_sms_t // sms_t ./nio/simple_msg_server.c:13 typedef struct sms_t {
#define sms_sk_do_flush rk_sms_sk_do_flush // sms_sk_do_flush ./nio/simple_msg_server.c:20 static int sms_sk_do_flush(sms_sk_t* s, int64_t* remain) {
#define sms_sk_do_decode rk_sms_sk_do_decode // sms_sk_do_decode ./nio/simple_msg_server.c:26 static int sms_sk_do_decode(sms_sk_t* s, sms_msg_t** msg) {
#define sms_sk_handle_msg rk_sms_sk_handle_msg // sms_sk_handle_msg ./nio/simple_msg_server.c:40 static int sms_sk_handle_msg(sms_sk_t* s, sms_msg_t* req) {
#define sms_sk_init rk_sms_sk_init // sms_sk_init ./nio/simple_msg_server.c:57 static int sms_sk_init(sms_sf_t* sf, sms_sk_t* s) {
#define sms_sk_destroy rk_sms_sk_destroy // sms_sk_destroy ./nio/simple_msg_server.c:64 static void sms_sk_destroy(sms_sf_t* sf, sms_sk_t* s) {
#define sms_minit_cfg rk_sms_minit_cfg // sms_minit_cfg ./nio/simple_msg_server.c:68 static int sms_minit_cfg(sms_cfg_t* cfg, const char* name) {
#define sms_sf_do_init rk_sms_sf_do_init // sms_sf_do_init ./nio/simple_msg_server.c:74 static int sms_sf_do_init(sms_sf_t* sf, sms_cfg_t* cfg) {
#define sms_do_init rk_sms_do_init // sms_do_init ./nio/simple_msg_server.c:79 static int sms_do_init(sms_t* sms, sms_cfg_t* cfg) {
#define sms_cb_t rk_sms_cb_t // sms_cb_t ./nio/simple_msg_server.c:87 #include "nio.t.h.gen" // #global: sms_cb_t sms_cfg_t sms_create sms_cur_resp sms_decode sms_do_cb sms_do_cb_exception sms_do_connect sms_do_init sms_do_post sms_evfd_cb sms_flush_cb sms_flush_cb_after_flush sms_flush_cb_exception sms_flush_cb_on_post_fail sms_g_t sms_get_id sms_get_sk sms_handle_one_req sms_handle_req_queue sms_init sms_minit sms_minit_cfg sms_msg_t sms_post sms_post_async sms_post_io sms_req_dispatch sms_req_t sms_resp_cb_on_msg sms_resp_cb_on_post_fail sms_resp_cb_on_sk_destroy sms_resp_cb_on_timeout sms_select_thread sms_sf_do_init sms_sf_init sms_sf_t sms_sk_alloc sms_sk_check_connect sms_sk_consume sms_sk_delete sms_sk_destroy sms_sk_do_decode sms_sk_do_flush sms_sk_flush sms_sk_free sms_sk_handle_event sms_sk_handle_event_ready sms_sk_handle_msg sms_sk_init sms_sk_msg_done sms_sk_new sms_sk_read sms_sk_t sms_start sms_t sms_thread_work sms_try_connect sms_write_queue_on_sk_destroy
#define sms_create rk_sms_create // sms_create ./nio/simple_msg_server.c:87 #include "nio.t.h.gen" // #global: sms_cb_t sms_cfg_t sms_create sms_cur_resp sms_decode sms_do_cb sms_do_cb_exception sms_do_connect sms_do_init sms_do_post sms_evfd_cb sms_flush_cb sms_flush_cb_after_flush sms_flush_cb_exception sms_flush_cb_on_post_fail sms_g_t sms_get_id sms_get_sk sms_handle_one_req sms_handle_req_queue sms_init sms_minit sms_minit_cfg sms_msg_t sms_post sms_post_async sms_post_io sms_req_dispatch sms_req_t sms_resp_cb_on_msg sms_resp_cb_on_post_fail sms_resp_cb_on_sk_destroy sms_resp_cb_on_timeout sms_select_thread sms_sf_do_init sms_sf_init sms_sf_t sms_sk_alloc sms_sk_check_connect sms_sk_consume sms_sk_delete sms_sk_destroy sms_sk_do_decode sms_sk_do_flush sms_sk_flush sms_sk_free sms_sk_handle_event sms_sk_handle_event_ready sms_sk_handle_msg sms_sk_init sms_sk_msg_done sms_sk_new sms_sk_read sms_sk_t sms_start sms_t sms_thread_work sms_try_connect sms_write_queue_on_sk_destroy
#define sms_cur_resp rk_sms_cur_resp // sms_cur_resp ./nio/simple_msg_server.c:87 #include "nio.t.h.gen" // #global: sms_cb_t sms_cfg_t sms_create sms_cur_resp sms_decode sms_do_cb sms_do_cb_exception sms_do_connect sms_do_init sms_do_post sms_evfd_cb sms_flush_cb sms_flush_cb_after_flush sms_flush_cb_exception sms_flush_cb_on_post_fail sms_g_t sms_get_id sms_get_sk sms_handle_one_req sms_handle_req_queue sms_init sms_minit sms_minit_cfg sms_msg_t sms_post sms_post_async sms_post_io sms_req_dispatch sms_req_t sms_resp_cb_on_msg sms_resp_cb_on_post_fail sms_resp_cb_on_sk_destroy sms_resp_cb_on_timeout sms_select_thread sms_sf_do_init sms_sf_init sms_sf_t sms_sk_alloc sms_sk_check_connect sms_sk_consume sms_sk_delete sms_sk_destroy sms_sk_do_decode sms_sk_do_flush sms_sk_flush sms_sk_free sms_sk_handle_event sms_sk_handle_event_ready sms_sk_handle_msg sms_sk_init sms_sk_msg_done sms_sk_new sms_sk_read sms_sk_t sms_start sms_t sms_thread_work sms_try_connect sms_write_queue_on_sk_destroy
#define sms_decode rk_sms_decode // sms_decode ./nio/simple_msg_server.c:87 #include "nio.t.h.gen" // #global: sms_cb_t sms_cfg_t sms_create sms_cur_resp sms_decode sms_do_cb sms_do_cb_exception sms_do_connect sms_do_init sms_do_post sms_evfd_cb sms_flush_cb sms_flush_cb_after_flush sms_flush_cb_exception sms_flush_cb_on_post_fail sms_g_t sms_get_id sms_get_sk sms_handle_one_req sms_handle_req_queue sms_init sms_minit sms_minit_cfg sms_msg_t sms_post sms_post_async sms_post_io sms_req_dispatch sms_req_t sms_resp_cb_on_msg sms_resp_cb_on_post_fail sms_resp_cb_on_sk_destroy sms_resp_cb_on_timeout sms_select_thread sms_sf_do_init sms_sf_init sms_sf_t sms_sk_alloc sms_sk_check_connect sms_sk_consume sms_sk_delete sms_sk_destroy sms_sk_do_decode sms_sk_do_flush sms_sk_flush sms_sk_free sms_sk_handle_event sms_sk_handle_event_ready sms_sk_handle_msg sms_sk_init sms_sk_msg_done sms_sk_new sms_sk_read sms_sk_t sms_start sms_t sms_thread_work sms_try_connect sms_write_queue_on_sk_destroy
#define sms_do_cb rk_sms_do_cb // sms_do_cb ./nio/simple_msg_server.c:87 #include "nio.t.h.gen" // #global: sms_cb_t sms_cfg_t sms_create sms_cur_resp sms_decode sms_do_cb sms_do_cb_exception sms_do_connect sms_do_init sms_do_post sms_evfd_cb sms_flush_cb sms_flush_cb_after_flush sms_flush_cb_exception sms_flush_cb_on_post_fail sms_g_t sms_get_id sms_get_sk sms_handle_one_req sms_handle_req_queue sms_init sms_minit sms_minit_cfg sms_msg_t sms_post sms_post_async sms_post_io sms_req_dispatch sms_req_t sms_resp_cb_on_msg sms_resp_cb_on_post_fail sms_resp_cb_on_sk_destroy sms_resp_cb_on_timeout sms_select_thread sms_sf_do_init sms_sf_init sms_sf_t sms_sk_alloc sms_sk_check_connect sms_sk_consume sms_sk_delete sms_sk_destroy sms_sk_do_decode sms_sk_do_flush sms_sk_flush sms_sk_free sms_sk_handle_event sms_sk_handle_event_ready sms_sk_handle_msg sms_sk_init sms_sk_msg_done sms_sk_new sms_sk_read sms_sk_t sms_start sms_t sms_thread_work sms_try_connect sms_write_queue_on_sk_destroy
#define sms_do_cb_exception rk_sms_do_cb_exception // sms_do_cb_exception ./nio/simple_msg_server.c:87 #include "nio.t.h.gen" // #global: sms_cb_t sms_cfg_t sms_create sms_cur_resp sms_decode sms_do_cb sms_do_cb_exception sms_do_connect sms_do_init sms_do_post sms_evfd_cb sms_flush_cb sms_flush_cb_after_flush sms_flush_cb_exception sms_flush_cb_on_post_fail sms_g_t sms_get_id sms_get_sk sms_handle_one_req sms_handle_req_queue sms_init sms_minit sms_minit_cfg sms_msg_t sms_post sms_post_async sms_post_io sms_req_dispatch sms_req_t sms_resp_cb_on_msg sms_resp_cb_on_post_fail sms_resp_cb_on_sk_destroy sms_resp_cb_on_timeout sms_select_thread sms_sf_do_init sms_sf_init sms_sf_t sms_sk_alloc sms_sk_check_connect sms_sk_consume sms_sk_delete sms_sk_destroy sms_sk_do_decode sms_sk_do_flush sms_sk_flush sms_sk_free sms_sk_handle_event sms_sk_handle_event_ready sms_sk_handle_msg sms_sk_init sms_sk_msg_done sms_sk_new sms_sk_read sms_sk_t sms_start sms_t sms_thread_work sms_try_connect sms_write_queue_on_sk_destroy
#define sms_do_connect rk_sms_do_connect // sms_do_connect ./nio/simple_msg_server.c:87 #include "nio.t.h.gen" // #global: sms_cb_t sms_cfg_t sms_create sms_cur_resp sms_decode sms_do_cb sms_do_cb_exception sms_do_connect sms_do_init sms_do_post sms_evfd_cb sms_flush_cb sms_flush_cb_after_flush sms_flush_cb_exception sms_flush_cb_on_post_fail sms_g_t sms_get_id sms_get_sk sms_handle_one_req sms_handle_req_queue sms_init sms_minit sms_minit_cfg sms_msg_t sms_post sms_post_async sms_post_io sms_req_dispatch sms_req_t sms_resp_cb_on_msg sms_resp_cb_on_post_fail sms_resp_cb_on_sk_destroy sms_resp_cb_on_timeout sms_select_thread sms_sf_do_init sms_sf_init sms_sf_t sms_sk_alloc sms_sk_check_connect sms_sk_consume sms_sk_delete sms_sk_destroy sms_sk_do_decode sms_sk_do_flush sms_sk_flush sms_sk_free sms_sk_handle_event sms_sk_handle_event_ready sms_sk_handle_msg sms_sk_init sms_sk_msg_done sms_sk_new sms_sk_read sms_sk_t sms_start sms_t sms_thread_work sms_try_connect sms_write_queue_on_sk_destroy
#define sms_do_post rk_sms_do_post // sms_do_post ./nio/simple_msg_server.c:87 #include "nio.t.h.gen" // #global: sms_cb_t sms_cfg_t sms_create sms_cur_resp sms_decode sms_do_cb sms_do_cb_exception sms_do_connect sms_do_init sms_do_post sms_evfd_cb sms_flush_cb sms_flush_cb_after_flush sms_flush_cb_exception sms_flush_cb_on_post_fail sms_g_t sms_get_id sms_get_sk sms_handle_one_req sms_handle_req_queue sms_init sms_minit sms_minit_cfg sms_msg_t sms_post sms_post_async sms_post_io sms_req_dispatch sms_req_t sms_resp_cb_on_msg sms_resp_cb_on_post_fail sms_resp_cb_on_sk_destroy sms_resp_cb_on_timeout sms_select_thread sms_sf_do_init sms_sf_init sms_sf_t sms_sk_alloc sms_sk_check_connect sms_sk_consume sms_sk_delete sms_sk_destroy sms_sk_do_decode sms_sk_do_flush sms_sk_flush sms_sk_free sms_sk_handle_event sms_sk_handle_event_ready sms_sk_handle_msg sms_sk_init sms_sk_msg_done sms_sk_new sms_sk_read sms_sk_t sms_start sms_t sms_thread_work sms_try_connect sms_write_queue_on_sk_destroy
#define sms_evfd_cb rk_sms_evfd_cb // sms_evfd_cb ./nio/simple_msg_server.c:87 #include "nio.t.h.gen" // #global: sms_cb_t sms_cfg_t sms_create sms_cur_resp sms_decode sms_do_cb sms_do_cb_exception sms_do_connect sms_do_init sms_do_post sms_evfd_cb sms_flush_cb sms_flush_cb_after_flush sms_flush_cb_exception sms_flush_cb_on_post_fail sms_g_t sms_get_id sms_get_sk sms_handle_one_req sms_handle_req_queue sms_init sms_minit sms_minit_cfg sms_msg_t sms_post sms_post_async sms_post_io sms_req_dispatch sms_req_t sms_resp_cb_on_msg sms_resp_cb_on_post_fail sms_resp_cb_on_sk_destroy sms_resp_cb_on_timeout sms_select_thread sms_sf_do_init sms_sf_init sms_sf_t sms_sk_alloc sms_sk_check_connect sms_sk_consume sms_sk_delete sms_sk_destroy sms_sk_do_decode sms_sk_do_flush sms_sk_flush sms_sk_free sms_sk_handle_event sms_sk_handle_event_ready sms_sk_handle_msg sms_sk_init sms_sk_msg_done sms_sk_new sms_sk_read sms_sk_t sms_start sms_t sms_thread_work sms_try_connect sms_write_queue_on_sk_destroy
#define sms_flush_cb rk_sms_flush_cb // sms_flush_cb ./nio/simple_msg_server.c:87 #include "nio.t.h.gen" // #global: sms_cb_t sms_cfg_t sms_create sms_cur_resp sms_decode sms_do_cb sms_do_cb_exception sms_do_connect sms_do_init sms_do_post sms_evfd_cb sms_flush_cb sms_flush_cb_after_flush sms_flush_cb_exception sms_flush_cb_on_post_fail sms_g_t sms_get_id sms_get_sk sms_handle_one_req sms_handle_req_queue sms_init sms_minit sms_minit_cfg sms_msg_t sms_post sms_post_async sms_post_io sms_req_dispatch sms_req_t sms_resp_cb_on_msg sms_resp_cb_on_post_fail sms_resp_cb_on_sk_destroy sms_resp_cb_on_timeout sms_select_thread sms_sf_do_init sms_sf_init sms_sf_t sms_sk_alloc sms_sk_check_connect sms_sk_consume sms_sk_delete sms_sk_destroy sms_sk_do_decode sms_sk_do_flush sms_sk_flush sms_sk_free sms_sk_handle_event sms_sk_handle_event_ready sms_sk_handle_msg sms_sk_init sms_sk_msg_done sms_sk_new sms_sk_read sms_sk_t sms_start sms_t sms_thread_work sms_try_connect sms_write_queue_on_sk_destroy
#define sms_flush_cb_after_flush rk_sms_flush_cb_after_flush // sms_flush_cb_after_flush ./nio/simple_msg_server.c:87 #include "nio.t.h.gen" // #global: sms_cb_t sms_cfg_t sms_create sms_cur_resp sms_decode sms_do_cb sms_do_cb_exception sms_do_connect sms_do_init sms_do_post sms_evfd_cb sms_flush_cb sms_flush_cb_after_flush sms_flush_cb_exception sms_flush_cb_on_post_fail sms_g_t sms_get_id sms_get_sk sms_handle_one_req sms_handle_req_queue sms_init sms_minit sms_minit_cfg sms_msg_t sms_post sms_post_async sms_post_io sms_req_dispatch sms_req_t sms_resp_cb_on_msg sms_resp_cb_on_post_fail sms_resp_cb_on_sk_destroy sms_resp_cb_on_timeout sms_select_thread sms_sf_do_init sms_sf_init sms_sf_t sms_sk_alloc sms_sk_check_connect sms_sk_consume sms_sk_delete sms_sk_destroy sms_sk_do_decode sms_sk_do_flush sms_sk_flush sms_sk_free sms_sk_handle_event sms_sk_handle_event_ready sms_sk_handle_msg sms_sk_init sms_sk_msg_done sms_sk_new sms_sk_read sms_sk_t sms_start sms_t sms_thread_work sms_try_connect sms_write_queue_on_sk_destroy
#define sms_flush_cb_exception rk_sms_flush_cb_exception // sms_flush_cb_exception ./nio/simple_msg_server.c:87 #include "nio.t.h.gen" // #global: sms_cb_t sms_cfg_t sms_create sms_cur_resp sms_decode sms_do_cb sms_do_cb_exception sms_do_connect sms_do_init sms_do_post sms_evfd_cb sms_flush_cb sms_flush_cb_after_flush sms_flush_cb_exception sms_flush_cb_on_post_fail sms_g_t sms_get_id sms_get_sk sms_handle_one_req sms_handle_req_queue sms_init sms_minit sms_minit_cfg sms_msg_t sms_post sms_post_async sms_post_io sms_req_dispatch sms_req_t sms_resp_cb_on_msg sms_resp_cb_on_post_fail sms_resp_cb_on_sk_destroy sms_resp_cb_on_timeout sms_select_thread sms_sf_do_init sms_sf_init sms_sf_t sms_sk_alloc sms_sk_check_connect sms_sk_consume sms_sk_delete sms_sk_destroy sms_sk_do_decode sms_sk_do_flush sms_sk_flush sms_sk_free sms_sk_handle_event sms_sk_handle_event_ready sms_sk_handle_msg sms_sk_init sms_sk_msg_done sms_sk_new sms_sk_read sms_sk_t sms_start sms_t sms_thread_work sms_try_connect sms_write_queue_on_sk_destroy
#define sms_flush_cb_on_post_fail rk_sms_flush_cb_on_post_fail // sms_flush_cb_on_post_fail ./nio/simple_msg_server.c:87 #include "nio.t.h.gen" // #global: sms_cb_t sms_cfg_t sms_create sms_cur_resp sms_decode sms_do_cb sms_do_cb_exception sms_do_connect sms_do_init sms_do_post sms_evfd_cb sms_flush_cb sms_flush_cb_after_flush sms_flush_cb_exception sms_flush_cb_on_post_fail sms_g_t sms_get_id sms_get_sk sms_handle_one_req sms_handle_req_queue sms_init sms_minit sms_minit_cfg sms_msg_t sms_post sms_post_async sms_post_io sms_req_dispatch sms_req_t sms_resp_cb_on_msg sms_resp_cb_on_post_fail sms_resp_cb_on_sk_destroy sms_resp_cb_on_timeout sms_select_thread sms_sf_do_init sms_sf_init sms_sf_t sms_sk_alloc sms_sk_check_connect sms_sk_consume sms_sk_delete sms_sk_destroy sms_sk_do_decode sms_sk_do_flush sms_sk_flush sms_sk_free sms_sk_handle_event sms_sk_handle_event_ready sms_sk_handle_msg sms_sk_init sms_sk_msg_done sms_sk_new sms_sk_read sms_sk_t sms_start sms_t sms_thread_work sms_try_connect sms_write_queue_on_sk_destroy
#define sms_get_id rk_sms_get_id // sms_get_id ./nio/simple_msg_server.c:87 #include "nio.t.h.gen" // #global: sms_cb_t sms_cfg_t sms_create sms_cur_resp sms_decode sms_do_cb sms_do_cb_exception sms_do_connect sms_do_init sms_do_post sms_evfd_cb sms_flush_cb sms_flush_cb_after_flush sms_flush_cb_exception sms_flush_cb_on_post_fail sms_g_t sms_get_id sms_get_sk sms_handle_one_req sms_handle_req_queue sms_init sms_minit sms_minit_cfg sms_msg_t sms_post sms_post_async sms_post_io sms_req_dispatch sms_req_t sms_resp_cb_on_msg sms_resp_cb_on_post_fail sms_resp_cb_on_sk_destroy sms_resp_cb_on_timeout sms_select_thread sms_sf_do_init sms_sf_init sms_sf_t sms_sk_alloc sms_sk_check_connect sms_sk_consume sms_sk_delete sms_sk_destroy sms_sk_do_decode sms_sk_do_flush sms_sk_flush sms_sk_free sms_sk_handle_event sms_sk_handle_event_ready sms_sk_handle_msg sms_sk_init sms_sk_msg_done sms_sk_new sms_sk_read sms_sk_t sms_start sms_t sms_thread_work sms_try_connect sms_write_queue_on_sk_destroy
#define sms_get_sk rk_sms_get_sk // sms_get_sk ./nio/simple_msg_server.c:87 #include "nio.t.h.gen" // #global: sms_cb_t sms_cfg_t sms_create sms_cur_resp sms_decode sms_do_cb sms_do_cb_exception sms_do_connect sms_do_init sms_do_post sms_evfd_cb sms_flush_cb sms_flush_cb_after_flush sms_flush_cb_exception sms_flush_cb_on_post_fail sms_g_t sms_get_id sms_get_sk sms_handle_one_req sms_handle_req_queue sms_init sms_minit sms_minit_cfg sms_msg_t sms_post sms_post_async sms_post_io sms_req_dispatch sms_req_t sms_resp_cb_on_msg sms_resp_cb_on_post_fail sms_resp_cb_on_sk_destroy sms_resp_cb_on_timeout sms_select_thread sms_sf_do_init sms_sf_init sms_sf_t sms_sk_alloc sms_sk_check_connect sms_sk_consume sms_sk_delete sms_sk_destroy sms_sk_do_decode sms_sk_do_flush sms_sk_flush sms_sk_free sms_sk_handle_event sms_sk_handle_event_ready sms_sk_handle_msg sms_sk_init sms_sk_msg_done sms_sk_new sms_sk_read sms_sk_t sms_start sms_t sms_thread_work sms_try_connect sms_write_queue_on_sk_destroy
#define sms_handle_one_req rk_sms_handle_one_req // sms_handle_one_req ./nio/simple_msg_server.c:87 #include "nio.t.h.gen" // #global: sms_cb_t sms_cfg_t sms_create sms_cur_resp sms_decode sms_do_cb sms_do_cb_exception sms_do_connect sms_do_init sms_do_post sms_evfd_cb sms_flush_cb sms_flush_cb_after_flush sms_flush_cb_exception sms_flush_cb_on_post_fail sms_g_t sms_get_id sms_get_sk sms_handle_one_req sms_handle_req_queue sms_init sms_minit sms_minit_cfg sms_msg_t sms_post sms_post_async sms_post_io sms_req_dispatch sms_req_t sms_resp_cb_on_msg sms_resp_cb_on_post_fail sms_resp_cb_on_sk_destroy sms_resp_cb_on_timeout sms_select_thread sms_sf_do_init sms_sf_init sms_sf_t sms_sk_alloc sms_sk_check_connect sms_sk_consume sms_sk_delete sms_sk_destroy sms_sk_do_decode sms_sk_do_flush sms_sk_flush sms_sk_free sms_sk_handle_event sms_sk_handle_event_ready sms_sk_handle_msg sms_sk_init sms_sk_msg_done sms_sk_new sms_sk_read sms_sk_t sms_start sms_t sms_thread_work sms_try_connect sms_write_queue_on_sk_destroy
#define sms_handle_req_queue rk_sms_handle_req_queue // sms_handle_req_queue ./nio/simple_msg_server.c:87 #include "nio.t.h.gen" // #global: sms_cb_t sms_cfg_t sms_create sms_cur_resp sms_decode sms_do_cb sms_do_cb_exception sms_do_connect sms_do_init sms_do_post sms_evfd_cb sms_flush_cb sms_flush_cb_after_flush sms_flush_cb_exception sms_flush_cb_on_post_fail sms_g_t sms_get_id sms_get_sk sms_handle_one_req sms_handle_req_queue sms_init sms_minit sms_minit_cfg sms_msg_t sms_post sms_post_async sms_post_io sms_req_dispatch sms_req_t sms_resp_cb_on_msg sms_resp_cb_on_post_fail sms_resp_cb_on_sk_destroy sms_resp_cb_on_timeout sms_select_thread sms_sf_do_init sms_sf_init sms_sf_t sms_sk_alloc sms_sk_check_connect sms_sk_consume sms_sk_delete sms_sk_destroy sms_sk_do_decode sms_sk_do_flush sms_sk_flush sms_sk_free sms_sk_handle_event sms_sk_handle_event_ready sms_sk_handle_msg sms_sk_init sms_sk_msg_done sms_sk_new sms_sk_read sms_sk_t sms_start sms_t sms_thread_work sms_try_connect sms_write_queue_on_sk_destroy
#define sms_init rk_sms_init // sms_init ./nio/simple_msg_server.c:87 #include "nio.t.h.gen" // #global: sms_cb_t sms_cfg_t sms_create sms_cur_resp sms_decode sms_do_cb sms_do_cb_exception sms_do_connect sms_do_init sms_do_post sms_evfd_cb sms_flush_cb sms_flush_cb_after_flush sms_flush_cb_exception sms_flush_cb_on_post_fail sms_g_t sms_get_id sms_get_sk sms_handle_one_req sms_handle_req_queue sms_init sms_minit sms_minit_cfg sms_msg_t sms_post sms_post_async sms_post_io sms_req_dispatch sms_req_t sms_resp_cb_on_msg sms_resp_cb_on_post_fail sms_resp_cb_on_sk_destroy sms_resp_cb_on_timeout sms_select_thread sms_sf_do_init sms_sf_init sms_sf_t sms_sk_alloc sms_sk_check_connect sms_sk_consume sms_sk_delete sms_sk_destroy sms_sk_do_decode sms_sk_do_flush sms_sk_flush sms_sk_free sms_sk_handle_event sms_sk_handle_event_ready sms_sk_handle_msg sms_sk_init sms_sk_msg_done sms_sk_new sms_sk_read sms_sk_t sms_start sms_t sms_thread_work sms_try_connect sms_write_queue_on_sk_destroy
#define sms_minit rk_sms_minit // sms_minit ./nio/simple_msg_server.c:87 #include "nio.t.h.gen" // #global: sms_cb_t sms_cfg_t sms_create sms_cur_resp sms_decode sms_do_cb sms_do_cb_exception sms_do_connect sms_do_init sms_do_post sms_evfd_cb sms_flush_cb sms_flush_cb_after_flush sms_flush_cb_exception sms_flush_cb_on_post_fail sms_g_t sms_get_id sms_get_sk sms_handle_one_req sms_handle_req_queue sms_init sms_minit sms_minit_cfg sms_msg_t sms_post sms_post_async sms_post_io sms_req_dispatch sms_req_t sms_resp_cb_on_msg sms_resp_cb_on_post_fail sms_resp_cb_on_sk_destroy sms_resp_cb_on_timeout sms_select_thread sms_sf_do_init sms_sf_init sms_sf_t sms_sk_alloc sms_sk_check_connect sms_sk_consume sms_sk_delete sms_sk_destroy sms_sk_do_decode sms_sk_do_flush sms_sk_flush sms_sk_free sms_sk_handle_event sms_sk_handle_event_ready sms_sk_handle_msg sms_sk_init sms_sk_msg_done sms_sk_new sms_sk_read sms_sk_t sms_start sms_t sms_thread_work sms_try_connect sms_write_queue_on_sk_destroy
#define sms_post rk_sms_post // sms_post ./nio/simple_msg_server.c:87 #include "nio.t.h.gen" // #global: sms_cb_t sms_cfg_t sms_create sms_cur_resp sms_decode sms_do_cb sms_do_cb_exception sms_do_connect sms_do_init sms_do_post sms_evfd_cb sms_flush_cb sms_flush_cb_after_flush sms_flush_cb_exception sms_flush_cb_on_post_fail sms_g_t sms_get_id sms_get_sk sms_handle_one_req sms_handle_req_queue sms_init sms_minit sms_minit_cfg sms_msg_t sms_post sms_post_async sms_post_io sms_req_dispatch sms_req_t sms_resp_cb_on_msg sms_resp_cb_on_post_fail sms_resp_cb_on_sk_destroy sms_resp_cb_on_timeout sms_select_thread sms_sf_do_init sms_sf_init sms_sf_t sms_sk_alloc sms_sk_check_connect sms_sk_consume sms_sk_delete sms_sk_destroy sms_sk_do_decode sms_sk_do_flush sms_sk_flush sms_sk_free sms_sk_handle_event sms_sk_handle_event_ready sms_sk_handle_msg sms_sk_init sms_sk_msg_done sms_sk_new sms_sk_read sms_sk_t sms_start sms_t sms_thread_work sms_try_connect sms_write_queue_on_sk_destroy
#define sms_post_async rk_sms_post_async // sms_post_async ./nio/simple_msg_server.c:87 #include "nio.t.h.gen" // #global: sms_cb_t sms_cfg_t sms_create sms_cur_resp sms_decode sms_do_cb sms_do_cb_exception sms_do_connect sms_do_init sms_do_post sms_evfd_cb sms_flush_cb sms_flush_cb_after_flush sms_flush_cb_exception sms_flush_cb_on_post_fail sms_g_t sms_get_id sms_get_sk sms_handle_one_req sms_handle_req_queue sms_init sms_minit sms_minit_cfg sms_msg_t sms_post sms_post_async sms_post_io sms_req_dispatch sms_req_t sms_resp_cb_on_msg sms_resp_cb_on_post_fail sms_resp_cb_on_sk_destroy sms_resp_cb_on_timeout sms_select_thread sms_sf_do_init sms_sf_init sms_sf_t sms_sk_alloc sms_sk_check_connect sms_sk_consume sms_sk_delete sms_sk_destroy sms_sk_do_decode sms_sk_do_flush sms_sk_flush sms_sk_free sms_sk_handle_event sms_sk_handle_event_ready sms_sk_handle_msg sms_sk_init sms_sk_msg_done sms_sk_new sms_sk_read sms_sk_t sms_start sms_t sms_thread_work sms_try_connect sms_write_queue_on_sk_destroy
#define sms_post_io rk_sms_post_io // sms_post_io ./nio/simple_msg_server.c:87 #include "nio.t.h.gen" // #global: sms_cb_t sms_cfg_t sms_create sms_cur_resp sms_decode sms_do_cb sms_do_cb_exception sms_do_connect sms_do_init sms_do_post sms_evfd_cb sms_flush_cb sms_flush_cb_after_flush sms_flush_cb_exception sms_flush_cb_on_post_fail sms_g_t sms_get_id sms_get_sk sms_handle_one_req sms_handle_req_queue sms_init sms_minit sms_minit_cfg sms_msg_t sms_post sms_post_async sms_post_io sms_req_dispatch sms_req_t sms_resp_cb_on_msg sms_resp_cb_on_post_fail sms_resp_cb_on_sk_destroy sms_resp_cb_on_timeout sms_select_thread sms_sf_do_init sms_sf_init sms_sf_t sms_sk_alloc sms_sk_check_connect sms_sk_consume sms_sk_delete sms_sk_destroy sms_sk_do_decode sms_sk_do_flush sms_sk_flush sms_sk_free sms_sk_handle_event sms_sk_handle_event_ready sms_sk_handle_msg sms_sk_init sms_sk_msg_done sms_sk_new sms_sk_read sms_sk_t sms_start sms_t sms_thread_work sms_try_connect sms_write_queue_on_sk_destroy
#define sms_req_dispatch rk_sms_req_dispatch // sms_req_dispatch ./nio/simple_msg_server.c:87 #include "nio.t.h.gen" // #global: sms_cb_t sms_cfg_t sms_create sms_cur_resp sms_decode sms_do_cb sms_do_cb_exception sms_do_connect sms_do_init sms_do_post sms_evfd_cb sms_flush_cb sms_flush_cb_after_flush sms_flush_cb_exception sms_flush_cb_on_post_fail sms_g_t sms_get_id sms_get_sk sms_handle_one_req sms_handle_req_queue sms_init sms_minit sms_minit_cfg sms_msg_t sms_post sms_post_async sms_post_io sms_req_dispatch sms_req_t sms_resp_cb_on_msg sms_resp_cb_on_post_fail sms_resp_cb_on_sk_destroy sms_resp_cb_on_timeout sms_select_thread sms_sf_do_init sms_sf_init sms_sf_t sms_sk_alloc sms_sk_check_connect sms_sk_consume sms_sk_delete sms_sk_destroy sms_sk_do_decode sms_sk_do_flush sms_sk_flush sms_sk_free sms_sk_handle_event sms_sk_handle_event_ready sms_sk_handle_msg sms_sk_init sms_sk_msg_done sms_sk_new sms_sk_read sms_sk_t sms_start sms_t sms_thread_work sms_try_connect sms_write_queue_on_sk_destroy
#define sms_req_t rk_sms_req_t // sms_req_t ./nio/simple_msg_server.c:87 #include "nio.t.h.gen" // #global: sms_cb_t sms_cfg_t sms_create sms_cur_resp sms_decode sms_do_cb sms_do_cb_exception sms_do_connect sms_do_init sms_do_post sms_evfd_cb sms_flush_cb sms_flush_cb_after_flush sms_flush_cb_exception sms_flush_cb_on_post_fail sms_g_t sms_get_id sms_get_sk sms_handle_one_req sms_handle_req_queue sms_init sms_minit sms_minit_cfg sms_msg_t sms_post sms_post_async sms_post_io sms_req_dispatch sms_req_t sms_resp_cb_on_msg sms_resp_cb_on_post_fail sms_resp_cb_on_sk_destroy sms_resp_cb_on_timeout sms_select_thread sms_sf_do_init sms_sf_init sms_sf_t sms_sk_alloc sms_sk_check_connect sms_sk_consume sms_sk_delete sms_sk_destroy sms_sk_do_decode sms_sk_do_flush sms_sk_flush sms_sk_free sms_sk_handle_event sms_sk_handle_event_ready sms_sk_handle_msg sms_sk_init sms_sk_msg_done sms_sk_new sms_sk_read sms_sk_t sms_start sms_t sms_thread_work sms_try_connect sms_write_queue_on_sk_destroy
#define sms_resp_cb_on_msg rk_sms_resp_cb_on_msg // sms_resp_cb_on_msg ./nio/simple_msg_server.c:87 #include "nio.t.h.gen" // #global: sms_cb_t sms_cfg_t sms_create sms_cur_resp sms_decode sms_do_cb sms_do_cb_exception sms_do_connect sms_do_init sms_do_post sms_evfd_cb sms_flush_cb sms_flush_cb_after_flush sms_flush_cb_exception sms_flush_cb_on_post_fail sms_g_t sms_get_id sms_get_sk sms_handle_one_req sms_handle_req_queue sms_init sms_minit sms_minit_cfg sms_msg_t sms_post sms_post_async sms_post_io sms_req_dispatch sms_req_t sms_resp_cb_on_msg sms_resp_cb_on_post_fail sms_resp_cb_on_sk_destroy sms_resp_cb_on_timeout sms_select_thread sms_sf_do_init sms_sf_init sms_sf_t sms_sk_alloc sms_sk_check_connect sms_sk_consume sms_sk_delete sms_sk_destroy sms_sk_do_decode sms_sk_do_flush sms_sk_flush sms_sk_free sms_sk_handle_event sms_sk_handle_event_ready sms_sk_handle_msg sms_sk_init sms_sk_msg_done sms_sk_new sms_sk_read sms_sk_t sms_start sms_t sms_thread_work sms_try_connect sms_write_queue_on_sk_destroy
#define sms_resp_cb_on_post_fail rk_sms_resp_cb_on_post_fail // sms_resp_cb_on_post_fail ./nio/simple_msg_server.c:87 #include "nio.t.h.gen" // #global: sms_cb_t sms_cfg_t sms_create sms_cur_resp sms_decode sms_do_cb sms_do_cb_exception sms_do_connect sms_do_init sms_do_post sms_evfd_cb sms_flush_cb sms_flush_cb_after_flush sms_flush_cb_exception sms_flush_cb_on_post_fail sms_g_t sms_get_id sms_get_sk sms_handle_one_req sms_handle_req_queue sms_init sms_minit sms_minit_cfg sms_msg_t sms_post sms_post_async sms_post_io sms_req_dispatch sms_req_t sms_resp_cb_on_msg sms_resp_cb_on_post_fail sms_resp_cb_on_sk_destroy sms_resp_cb_on_timeout sms_select_thread sms_sf_do_init sms_sf_init sms_sf_t sms_sk_alloc sms_sk_check_connect sms_sk_consume sms_sk_delete sms_sk_destroy sms_sk_do_decode sms_sk_do_flush sms_sk_flush sms_sk_free sms_sk_handle_event sms_sk_handle_event_ready sms_sk_handle_msg sms_sk_init sms_sk_msg_done sms_sk_new sms_sk_read sms_sk_t sms_start sms_t sms_thread_work sms_try_connect sms_write_queue_on_sk_destroy
#define sms_resp_cb_on_sk_destroy rk_sms_resp_cb_on_sk_destroy // sms_resp_cb_on_sk_destroy ./nio/simple_msg_server.c:87 #include "nio.t.h.gen" // #global: sms_cb_t sms_cfg_t sms_create sms_cur_resp sms_decode sms_do_cb sms_do_cb_exception sms_do_connect sms_do_init sms_do_post sms_evfd_cb sms_flush_cb sms_flush_cb_after_flush sms_flush_cb_exception sms_flush_cb_on_post_fail sms_g_t sms_get_id sms_get_sk sms_handle_one_req sms_handle_req_queue sms_init sms_minit sms_minit_cfg sms_msg_t sms_post sms_post_async sms_post_io sms_req_dispatch sms_req_t sms_resp_cb_on_msg sms_resp_cb_on_post_fail sms_resp_cb_on_sk_destroy sms_resp_cb_on_timeout sms_select_thread sms_sf_do_init sms_sf_init sms_sf_t sms_sk_alloc sms_sk_check_connect sms_sk_consume sms_sk_delete sms_sk_destroy sms_sk_do_decode sms_sk_do_flush sms_sk_flush sms_sk_free sms_sk_handle_event sms_sk_handle_event_ready sms_sk_handle_msg sms_sk_init sms_sk_msg_done sms_sk_new sms_sk_read sms_sk_t sms_start sms_t sms_thread_work sms_try_connect sms_write_queue_on_sk_destroy
#define sms_resp_cb_on_timeout rk_sms_resp_cb_on_timeout // sms_resp_cb_on_timeout ./nio/simple_msg_server.c:87 #include "nio.t.h.gen" // #global: sms_cb_t sms_cfg_t sms_create sms_cur_resp sms_decode sms_do_cb sms_do_cb_exception sms_do_connect sms_do_init sms_do_post sms_evfd_cb sms_flush_cb sms_flush_cb_after_flush sms_flush_cb_exception sms_flush_cb_on_post_fail sms_g_t sms_get_id sms_get_sk sms_handle_one_req sms_handle_req_queue sms_init sms_minit sms_minit_cfg sms_msg_t sms_post sms_post_async sms_post_io sms_req_dispatch sms_req_t sms_resp_cb_on_msg sms_resp_cb_on_post_fail sms_resp_cb_on_sk_destroy sms_resp_cb_on_timeout sms_select_thread sms_sf_do_init sms_sf_init sms_sf_t sms_sk_alloc sms_sk_check_connect sms_sk_consume sms_sk_delete sms_sk_destroy sms_sk_do_decode sms_sk_do_flush sms_sk_flush sms_sk_free sms_sk_handle_event sms_sk_handle_event_ready sms_sk_handle_msg sms_sk_init sms_sk_msg_done sms_sk_new sms_sk_read sms_sk_t sms_start sms_t sms_thread_work sms_try_connect sms_write_queue_on_sk_destroy
#define sms_select_thread rk_sms_select_thread // sms_select_thread ./nio/simple_msg_server.c:87 #include "nio.t.h.gen" // #global: sms_cb_t sms_cfg_t sms_create sms_cur_resp sms_decode sms_do_cb sms_do_cb_exception sms_do_connect sms_do_init sms_do_post sms_evfd_cb sms_flush_cb sms_flush_cb_after_flush sms_flush_cb_exception sms_flush_cb_on_post_fail sms_g_t sms_get_id sms_get_sk sms_handle_one_req sms_handle_req_queue sms_init sms_minit sms_minit_cfg sms_msg_t sms_post sms_post_async sms_post_io sms_req_dispatch sms_req_t sms_resp_cb_on_msg sms_resp_cb_on_post_fail sms_resp_cb_on_sk_destroy sms_resp_cb_on_timeout sms_select_thread sms_sf_do_init sms_sf_init sms_sf_t sms_sk_alloc sms_sk_check_connect sms_sk_consume sms_sk_delete sms_sk_destroy sms_sk_do_decode sms_sk_do_flush sms_sk_flush sms_sk_free sms_sk_handle_event sms_sk_handle_event_ready sms_sk_handle_msg sms_sk_init sms_sk_msg_done sms_sk_new sms_sk_read sms_sk_t sms_start sms_t sms_thread_work sms_try_connect sms_write_queue_on_sk_destroy
#define sms_sf_init rk_sms_sf_init // sms_sf_init ./nio/simple_msg_server.c:87 #include "nio.t.h.gen" // #global: sms_cb_t sms_cfg_t sms_create sms_cur_resp sms_decode sms_do_cb sms_do_cb_exception sms_do_connect sms_do_init sms_do_post sms_evfd_cb sms_flush_cb sms_flush_cb_after_flush sms_flush_cb_exception sms_flush_cb_on_post_fail sms_g_t sms_get_id sms_get_sk sms_handle_one_req sms_handle_req_queue sms_init sms_minit sms_minit_cfg sms_msg_t sms_post sms_post_async sms_post_io sms_req_dispatch sms_req_t sms_resp_cb_on_msg sms_resp_cb_on_post_fail sms_resp_cb_on_sk_destroy sms_resp_cb_on_timeout sms_select_thread sms_sf_do_init sms_sf_init sms_sf_t sms_sk_alloc sms_sk_check_connect sms_sk_consume sms_sk_delete sms_sk_destroy sms_sk_do_decode sms_sk_do_flush sms_sk_flush sms_sk_free sms_sk_handle_event sms_sk_handle_event_ready sms_sk_handle_msg sms_sk_init sms_sk_msg_done sms_sk_new sms_sk_read sms_sk_t sms_start sms_t sms_thread_work sms_try_connect sms_write_queue_on_sk_destroy
#define sms_sk_alloc rk_sms_sk_alloc // sms_sk_alloc ./nio/simple_msg_server.c:87 #include "nio.t.h.gen" // #global: sms_cb_t sms_cfg_t sms_create sms_cur_resp sms_decode sms_do_cb sms_do_cb_exception sms_do_connect sms_do_init sms_do_post sms_evfd_cb sms_flush_cb sms_flush_cb_after_flush sms_flush_cb_exception sms_flush_cb_on_post_fail sms_g_t sms_get_id sms_get_sk sms_handle_one_req sms_handle_req_queue sms_init sms_minit sms_minit_cfg sms_msg_t sms_post sms_post_async sms_post_io sms_req_dispatch sms_req_t sms_resp_cb_on_msg sms_resp_cb_on_post_fail sms_resp_cb_on_sk_destroy sms_resp_cb_on_timeout sms_select_thread sms_sf_do_init sms_sf_init sms_sf_t sms_sk_alloc sms_sk_check_connect sms_sk_consume sms_sk_delete sms_sk_destroy sms_sk_do_decode sms_sk_do_flush sms_sk_flush sms_sk_free sms_sk_handle_event sms_sk_handle_event_ready sms_sk_handle_msg sms_sk_init sms_sk_msg_done sms_sk_new sms_sk_read sms_sk_t sms_start sms_t sms_thread_work sms_try_connect sms_write_queue_on_sk_destroy
#define sms_sk_check_connect rk_sms_sk_check_connect // sms_sk_check_connect ./nio/simple_msg_server.c:87 #include "nio.t.h.gen" // #global: sms_cb_t sms_cfg_t sms_create sms_cur_resp sms_decode sms_do_cb sms_do_cb_exception sms_do_connect sms_do_init sms_do_post sms_evfd_cb sms_flush_cb sms_flush_cb_after_flush sms_flush_cb_exception sms_flush_cb_on_post_fail sms_g_t sms_get_id sms_get_sk sms_handle_one_req sms_handle_req_queue sms_init sms_minit sms_minit_cfg sms_msg_t sms_post sms_post_async sms_post_io sms_req_dispatch sms_req_t sms_resp_cb_on_msg sms_resp_cb_on_post_fail sms_resp_cb_on_sk_destroy sms_resp_cb_on_timeout sms_select_thread sms_sf_do_init sms_sf_init sms_sf_t sms_sk_alloc sms_sk_check_connect sms_sk_consume sms_sk_delete sms_sk_destroy sms_sk_do_decode sms_sk_do_flush sms_sk_flush sms_sk_free sms_sk_handle_event sms_sk_handle_event_ready sms_sk_handle_msg sms_sk_init sms_sk_msg_done sms_sk_new sms_sk_read sms_sk_t sms_start sms_t sms_thread_work sms_try_connect sms_write_queue_on_sk_destroy
#define sms_sk_consume rk_sms_sk_consume // sms_sk_consume ./nio/simple_msg_server.c:87 #include "nio.t.h.gen" // #global: sms_cb_t sms_cfg_t sms_create sms_cur_resp sms_decode sms_do_cb sms_do_cb_exception sms_do_connect sms_do_init sms_do_post sms_evfd_cb sms_flush_cb sms_flush_cb_after_flush sms_flush_cb_exception sms_flush_cb_on_post_fail sms_g_t sms_get_id sms_get_sk sms_handle_one_req sms_handle_req_queue sms_init sms_minit sms_minit_cfg sms_msg_t sms_post sms_post_async sms_post_io sms_req_dispatch sms_req_t sms_resp_cb_on_msg sms_resp_cb_on_post_fail sms_resp_cb_on_sk_destroy sms_resp_cb_on_timeout sms_select_thread sms_sf_do_init sms_sf_init sms_sf_t sms_sk_alloc sms_sk_check_connect sms_sk_consume sms_sk_delete sms_sk_destroy sms_sk_do_decode sms_sk_do_flush sms_sk_flush sms_sk_free sms_sk_handle_event sms_sk_handle_event_ready sms_sk_handle_msg sms_sk_init sms_sk_msg_done sms_sk_new sms_sk_read sms_sk_t sms_start sms_t sms_thread_work sms_try_connect sms_write_queue_on_sk_destroy
#define sms_sk_delete rk_sms_sk_delete // sms_sk_delete ./nio/simple_msg_server.c:87 #include "nio.t.h.gen" // #global: sms_cb_t sms_cfg_t sms_create sms_cur_resp sms_decode sms_do_cb sms_do_cb_exception sms_do_connect sms_do_init sms_do_post sms_evfd_cb sms_flush_cb sms_flush_cb_after_flush sms_flush_cb_exception sms_flush_cb_on_post_fail sms_g_t sms_get_id sms_get_sk sms_handle_one_req sms_handle_req_queue sms_init sms_minit sms_minit_cfg sms_msg_t sms_post sms_post_async sms_post_io sms_req_dispatch sms_req_t sms_resp_cb_on_msg sms_resp_cb_on_post_fail sms_resp_cb_on_sk_destroy sms_resp_cb_on_timeout sms_select_thread sms_sf_do_init sms_sf_init sms_sf_t sms_sk_alloc sms_sk_check_connect sms_sk_consume sms_sk_delete sms_sk_destroy sms_sk_do_decode sms_sk_do_flush sms_sk_flush sms_sk_free sms_sk_handle_event sms_sk_handle_event_ready sms_sk_handle_msg sms_sk_init sms_sk_msg_done sms_sk_new sms_sk_read sms_sk_t sms_start sms_t sms_thread_work sms_try_connect sms_write_queue_on_sk_destroy
#define sms_sk_flush rk_sms_sk_flush // sms_sk_flush ./nio/simple_msg_server.c:87 #include "nio.t.h.gen" // #global: sms_cb_t sms_cfg_t sms_create sms_cur_resp sms_decode sms_do_cb sms_do_cb_exception sms_do_connect sms_do_init sms_do_post sms_evfd_cb sms_flush_cb sms_flush_cb_after_flush sms_flush_cb_exception sms_flush_cb_on_post_fail sms_g_t sms_get_id sms_get_sk sms_handle_one_req sms_handle_req_queue sms_init sms_minit sms_minit_cfg sms_msg_t sms_post sms_post_async sms_post_io sms_req_dispatch sms_req_t sms_resp_cb_on_msg sms_resp_cb_on_post_fail sms_resp_cb_on_sk_destroy sms_resp_cb_on_timeout sms_select_thread sms_sf_do_init sms_sf_init sms_sf_t sms_sk_alloc sms_sk_check_connect sms_sk_consume sms_sk_delete sms_sk_destroy sms_sk_do_decode sms_sk_do_flush sms_sk_flush sms_sk_free sms_sk_handle_event sms_sk_handle_event_ready sms_sk_handle_msg sms_sk_init sms_sk_msg_done sms_sk_new sms_sk_read sms_sk_t sms_start sms_t sms_thread_work sms_try_connect sms_write_queue_on_sk_destroy
#define sms_sk_free rk_sms_sk_free // sms_sk_free ./nio/simple_msg_server.c:87 #include "nio.t.h.gen" // #global: sms_cb_t sms_cfg_t sms_create sms_cur_resp sms_decode sms_do_cb sms_do_cb_exception sms_do_connect sms_do_init sms_do_post sms_evfd_cb sms_flush_cb sms_flush_cb_after_flush sms_flush_cb_exception sms_flush_cb_on_post_fail sms_g_t sms_get_id sms_get_sk sms_handle_one_req sms_handle_req_queue sms_init sms_minit sms_minit_cfg sms_msg_t sms_post sms_post_async sms_post_io sms_req_dispatch sms_req_t sms_resp_cb_on_msg sms_resp_cb_on_post_fail sms_resp_cb_on_sk_destroy sms_resp_cb_on_timeout sms_select_thread sms_sf_do_init sms_sf_init sms_sf_t sms_sk_alloc sms_sk_check_connect sms_sk_consume sms_sk_delete sms_sk_destroy sms_sk_do_decode sms_sk_do_flush sms_sk_flush sms_sk_free sms_sk_handle_event sms_sk_handle_event_ready sms_sk_handle_msg sms_sk_init sms_sk_msg_done sms_sk_new sms_sk_read sms_sk_t sms_start sms_t sms_thread_work sms_try_connect sms_write_queue_on_sk_destroy
#define sms_sk_handle_event rk_sms_sk_handle_event // sms_sk_handle_event ./nio/simple_msg_server.c:87 #include "nio.t.h.gen" // #global: sms_cb_t sms_cfg_t sms_create sms_cur_resp sms_decode sms_do_cb sms_do_cb_exception sms_do_connect sms_do_init sms_do_post sms_evfd_cb sms_flush_cb sms_flush_cb_after_flush sms_flush_cb_exception sms_flush_cb_on_post_fail sms_g_t sms_get_id sms_get_sk sms_handle_one_req sms_handle_req_queue sms_init sms_minit sms_minit_cfg sms_msg_t sms_post sms_post_async sms_post_io sms_req_dispatch sms_req_t sms_resp_cb_on_msg sms_resp_cb_on_post_fail sms_resp_cb_on_sk_destroy sms_resp_cb_on_timeout sms_select_thread sms_sf_do_init sms_sf_init sms_sf_t sms_sk_alloc sms_sk_check_connect sms_sk_consume sms_sk_delete sms_sk_destroy sms_sk_do_decode sms_sk_do_flush sms_sk_flush sms_sk_free sms_sk_handle_event sms_sk_handle_event_ready sms_sk_handle_msg sms_sk_init sms_sk_msg_done sms_sk_new sms_sk_read sms_sk_t sms_start sms_t sms_thread_work sms_try_connect sms_write_queue_on_sk_destroy
#define sms_sk_handle_event_ready rk_sms_sk_handle_event_ready // sms_sk_handle_event_ready ./nio/simple_msg_server.c:87 #include "nio.t.h.gen" // #global: sms_cb_t sms_cfg_t sms_create sms_cur_resp sms_decode sms_do_cb sms_do_cb_exception sms_do_connect sms_do_init sms_do_post sms_evfd_cb sms_flush_cb sms_flush_cb_after_flush sms_flush_cb_exception sms_flush_cb_on_post_fail sms_g_t sms_get_id sms_get_sk sms_handle_one_req sms_handle_req_queue sms_init sms_minit sms_minit_cfg sms_msg_t sms_post sms_post_async sms_post_io sms_req_dispatch sms_req_t sms_resp_cb_on_msg sms_resp_cb_on_post_fail sms_resp_cb_on_sk_destroy sms_resp_cb_on_timeout sms_select_thread sms_sf_do_init sms_sf_init sms_sf_t sms_sk_alloc sms_sk_check_connect sms_sk_consume sms_sk_delete sms_sk_destroy sms_sk_do_decode sms_sk_do_flush sms_sk_flush sms_sk_free sms_sk_handle_event sms_sk_handle_event_ready sms_sk_handle_msg sms_sk_init sms_sk_msg_done sms_sk_new sms_sk_read sms_sk_t sms_start sms_t sms_thread_work sms_try_connect sms_write_queue_on_sk_destroy
#define sms_sk_msg_done rk_sms_sk_msg_done // sms_sk_msg_done ./nio/simple_msg_server.c:87 #include "nio.t.h.gen" // #global: sms_cb_t sms_cfg_t sms_create sms_cur_resp sms_decode sms_do_cb sms_do_cb_exception sms_do_connect sms_do_init sms_do_post sms_evfd_cb sms_flush_cb sms_flush_cb_after_flush sms_flush_cb_exception sms_flush_cb_on_post_fail sms_g_t sms_get_id sms_get_sk sms_handle_one_req sms_handle_req_queue sms_init sms_minit sms_minit_cfg sms_msg_t sms_post sms_post_async sms_post_io sms_req_dispatch sms_req_t sms_resp_cb_on_msg sms_resp_cb_on_post_fail sms_resp_cb_on_sk_destroy sms_resp_cb_on_timeout sms_select_thread sms_sf_do_init sms_sf_init sms_sf_t sms_sk_alloc sms_sk_check_connect sms_sk_consume sms_sk_delete sms_sk_destroy sms_sk_do_decode sms_sk_do_flush sms_sk_flush sms_sk_free sms_sk_handle_event sms_sk_handle_event_ready sms_sk_handle_msg sms_sk_init sms_sk_msg_done sms_sk_new sms_sk_read sms_sk_t sms_start sms_t sms_thread_work sms_try_connect sms_write_queue_on_sk_destroy
#define sms_sk_new rk_sms_sk_new // sms_sk_new ./nio/simple_msg_server.c:87 #include "nio.t.h.gen" // #global: sms_cb_t sms_cfg_t sms_create sms_cur_resp sms_decode sms_do_cb sms_do_cb_exception sms_do_connect sms_do_init sms_do_post sms_evfd_cb sms_flush_cb sms_flush_cb_after_flush sms_flush_cb_exception sms_flush_cb_on_post_fail sms_g_t sms_get_id sms_get_sk sms_handle_one_req sms_handle_req_queue sms_init sms_minit sms_minit_cfg sms_msg_t sms_post sms_post_async sms_post_io sms_req_dispatch sms_req_t sms_resp_cb_on_msg sms_resp_cb_on_post_fail sms_resp_cb_on_sk_destroy sms_resp_cb_on_timeout sms_select_thread sms_sf_do_init sms_sf_init sms_sf_t sms_sk_alloc sms_sk_check_connect sms_sk_consume sms_sk_delete sms_sk_destroy sms_sk_do_decode sms_sk_do_flush sms_sk_flush sms_sk_free sms_sk_handle_event sms_sk_handle_event_ready sms_sk_handle_msg sms_sk_init sms_sk_msg_done sms_sk_new sms_sk_read sms_sk_t sms_start sms_t sms_thread_work sms_try_connect sms_write_queue_on_sk_destroy
#define sms_sk_read rk_sms_sk_read // sms_sk_read ./nio/simple_msg_server.c:87 #include "nio.t.h.gen" // #global: sms_cb_t sms_cfg_t sms_create sms_cur_resp sms_decode sms_do_cb sms_do_cb_exception sms_do_connect sms_do_init sms_do_post sms_evfd_cb sms_flush_cb sms_flush_cb_after_flush sms_flush_cb_exception sms_flush_cb_on_post_fail sms_g_t sms_get_id sms_get_sk sms_handle_one_req sms_handle_req_queue sms_init sms_minit sms_minit_cfg sms_msg_t sms_post sms_post_async sms_post_io sms_req_dispatch sms_req_t sms_resp_cb_on_msg sms_resp_cb_on_post_fail sms_resp_cb_on_sk_destroy sms_resp_cb_on_timeout sms_select_thread sms_sf_do_init sms_sf_init sms_sf_t sms_sk_alloc sms_sk_check_connect sms_sk_consume sms_sk_delete sms_sk_destroy sms_sk_do_decode sms_sk_do_flush sms_sk_flush sms_sk_free sms_sk_handle_event sms_sk_handle_event_ready sms_sk_handle_msg sms_sk_init sms_sk_msg_done sms_sk_new sms_sk_read sms_sk_t sms_start sms_t sms_thread_work sms_try_connect sms_write_queue_on_sk_destroy
#define sms_thread_work rk_sms_thread_work // sms_thread_work ./nio/simple_msg_server.c:87 #include "nio.t.h.gen" // #global: sms_cb_t sms_cfg_t sms_create sms_cur_resp sms_decode sms_do_cb sms_do_cb_exception sms_do_connect sms_do_init sms_do_post sms_evfd_cb sms_flush_cb sms_flush_cb_after_flush sms_flush_cb_exception sms_flush_cb_on_post_fail sms_g_t sms_get_id sms_get_sk sms_handle_one_req sms_handle_req_queue sms_init sms_minit sms_minit_cfg sms_msg_t sms_post sms_post_async sms_post_io sms_req_dispatch sms_req_t sms_resp_cb_on_msg sms_resp_cb_on_post_fail sms_resp_cb_on_sk_destroy sms_resp_cb_on_timeout sms_select_thread sms_sf_do_init sms_sf_init sms_sf_t sms_sk_alloc sms_sk_check_connect sms_sk_consume sms_sk_delete sms_sk_destroy sms_sk_do_decode sms_sk_do_flush sms_sk_flush sms_sk_free sms_sk_handle_event sms_sk_handle_event_ready sms_sk_handle_msg sms_sk_init sms_sk_msg_done sms_sk_new sms_sk_read sms_sk_t sms_start sms_t sms_thread_work sms_try_connect sms_write_queue_on_sk_destroy
#define sms_try_connect rk_sms_try_connect // sms_try_connect ./nio/simple_msg_server.c:87 #include "nio.t.h.gen" // #global: sms_cb_t sms_cfg_t sms_create sms_cur_resp sms_decode sms_do_cb sms_do_cb_exception sms_do_connect sms_do_init sms_do_post sms_evfd_cb sms_flush_cb sms_flush_cb_after_flush sms_flush_cb_exception sms_flush_cb_on_post_fail sms_g_t sms_get_id sms_get_sk sms_handle_one_req sms_handle_req_queue sms_init sms_minit sms_minit_cfg sms_msg_t sms_post sms_post_async sms_post_io sms_req_dispatch sms_req_t sms_resp_cb_on_msg sms_resp_cb_on_post_fail sms_resp_cb_on_sk_destroy sms_resp_cb_on_timeout sms_select_thread sms_sf_do_init sms_sf_init sms_sf_t sms_sk_alloc sms_sk_check_connect sms_sk_consume sms_sk_delete sms_sk_destroy sms_sk_do_decode sms_sk_do_flush sms_sk_flush sms_sk_free sms_sk_handle_event sms_sk_handle_event_ready sms_sk_handle_msg sms_sk_init sms_sk_msg_done sms_sk_new sms_sk_read sms_sk_t sms_start sms_t sms_thread_work sms_try_connect sms_write_queue_on_sk_destroy
#define sms_write_queue_on_sk_destroy rk_sms_write_queue_on_sk_destroy // sms_write_queue_on_sk_destroy ./nio/simple_msg_server.c:87 #include "nio.t.h.gen" // #global: sms_cb_t sms_cfg_t sms_create sms_cur_resp sms_decode sms_do_cb sms_do_cb_exception sms_do_connect sms_do_init sms_do_post sms_evfd_cb sms_flush_cb sms_flush_cb_after_flush sms_flush_cb_exception sms_flush_cb_on_post_fail sms_g_t sms_get_id sms_get_sk sms_handle_one_req sms_handle_req_queue sms_init sms_minit sms_minit_cfg sms_msg_t sms_post sms_post_async sms_post_io sms_req_dispatch sms_req_t sms_resp_cb_on_msg sms_resp_cb_on_post_fail sms_resp_cb_on_sk_destroy sms_resp_cb_on_timeout sms_select_thread sms_sf_do_init sms_sf_init sms_sf_t sms_sk_alloc sms_sk_check_connect sms_sk_consume sms_sk_delete sms_sk_destroy sms_sk_do_decode sms_sk_do_flush sms_sk_flush sms_sk_free sms_sk_handle_event sms_sk_handle_event_ready sms_sk_handle_msg sms_sk_init sms_sk_msg_done sms_sk_new sms_sk_read sms_sk_t sms_start sms_t sms_thread_work sms_try_connect sms_write_queue_on_sk_destroy
#define pktc_wait_t rk_pktc_wait_t // pktc_wait_t ./nio/packet_client_wait.h:1 typedef struct pktc_wait_t {
#define __start_module __rk_start_module // __start_module ./fw/module.h:5 extern int __start_module(const char* m);
#define __start_modules __rk_start_modules // __start_modules ./fw/module.h:6 extern int __start_modules();
#define tls_co rk_tls_co // tls_co ./fw/tls.h:1 inline uint64_t tls_co(void* addr) { return (uint64_t)addr - thread_base(); }
#define tls_get rk_tls_get // tls_get ./fw/tls.h:2 inline void* tls_get(uint64_t off) { return (void*)((uint64_t)off + thread_base()); }
#define tls_o rk_tls_o // tls_o ./fw/tls.h:3 inline void* tls_o(uint64_t offset, int idx) { return (void*)(offset + (uint64_t)g_thread_array[idx].pd); }
#define tls_a rk_tls_a // tls_a ./fw/tls.h:4 inline void* tls_a(void* addr, int idx) { return tls_o(tls_co(addr), idx); }
#define __do_start_module __rk_do_start_module // __do_start_module ./fw/module.c:4 static int __do_start_module(const char* name, const char* type) {
#define __start_all_modules __rk_start_all_modules // __start_all_modules ./fw/module.c:29 int __start_all_modules() {
#define ref_alloc rk_ref_alloc // ref_alloc ./alloc/ref_alloc.h:1 extern void* ref_alloc(int64_t sz, int mod);
#define ref_free rk_ref_free // ref_free ./alloc/ref_alloc.h:2 extern void ref_free(void* p);
#define addr_str rk_addr_str // addr_str ./nio/addr.c:1 const char* addr_str(format_t* f, addr_t addr) {
#define addr_build rk_addr_build // addr_build ./nio/addr.c:5 addr_t addr_build(const char* ip, int port) {
#define addr_init rk_addr_init // addr_init ./nio/addr.c:10 addr_t* addr_init(addr_t* addr, const char* ip, int port) {
#define addr_set rk_addr_set // addr_set ./nio/addr.c:15 addr_t* addr_set(addr_t* addr, uint32_t ip, uint16_t port, uint16_t id) {
#define get_remote_addr rk_get_remote_addr // get_remote_addr ./nio/addr.c:22 addr_t get_remote_addr(int fd) {
#define get_local_addr rk_get_local_addr // get_local_addr ./nio/addr.c:34 addr_t get_local_addr(int fd) {
#define make_unix_sockaddr rk_make_unix_sockaddr // make_unix_sockaddr ./nio/addr.c:46 static struct sockaddr_in* make_unix_sockaddr(struct sockaddr_in *sin, in_addr_t ip, int port) {
#define make_sockaddr rk_make_sockaddr // make_sockaddr ./nio/addr.c:55 struct sockaddr_in* make_sockaddr(struct sockaddr_in* sin, addr_t addr) {
#define evfd_signal rk_evfd_signal // evfd_signal ./io/evfd.c:1 void evfd_signal(int fd) {
#define evfd_drain rk_evfd_drain // evfd_drain ./io/evfd.c:6 int evfd_drain(int fd) {
#define evfd_init rk_evfd_init // evfd_init ./io/evfd.c:11 int evfd_init(eloop_t* ep, evfd_t* s, handle_event_t handle) {
#define sock_t rk_sock_t // sock_t ./io/sock.h:2 struct sock_t;
#define sf_t rk_sf_t // sf_t ./io/sock.h:7 typedef struct sf_t {
#define handle_event_t rk_handle_event_t // handle_event_t ./io/sock.h:11 typedef int (*handle_event_t)(struct sock_t*);
#define evfd_t rk_evfd_t // evfd_t ./io/evfd.h:2 typedef struct evfd_t {
#define g_thread_array rk_g_thread_array // g_thread_array ./fw/thread.c:1 thread_t g_thread_array[MAX_THREAD_NUM];
#define g_thread_count rk_g_thread_count // g_thread_count ./fw/thread.c:2 int32_t g_thread_count = 0;
#define cth rk_cth // cth ./fw/thread.c:3 __thread cur_thread_t cth;
#define thread_base rk_thread_base // thread_base ./fw/thread.c:5 extern uint64_t thread_base();
#define __thread_setup __rk_thread_setup // __thread_setup ./fw/thread.c:6 extern void __thread_setup();
#define __thread_work __rk_thread_work // __thread_work ./fw/thread.c:8 static void* __thread_work(struct thread_t* arg) {
#define prepare_thread rk_prepare_thread // prepare_thread ./fw/thread.c:17 thread_t* prepare_thread(thread_func_t func, void* arg, int sz) {
#define __start_thread0 __rk_start_thread0 // __start_thread0 ./fw/thread.c:25 static int __start_thread0(thread_t* th) {
#define __start_thread __rk_start_thread // __start_thread ./fw/thread.c:29 int __start_thread(thread_func_t func, void* arg, int sz) {
#define __start_thread_group __rk_start_thread_group // __start_thread_group ./fw/thread.c:33 int __start_thread_group(int n_thread, thread_func_t func, void* arg) {
#define __wait_threads __rk_wait_threads // __wait_threads ./fw/thread.c:41 void __wait_threads() {
#define thread_calloc rk_thread_calloc // thread_calloc ./fw/thread.c:47 void* thread_calloc(int32_t size) {
#define threads_minit rk_threads_minit // threads_minit ./fw/thread.c:54 EXPORT int threads_minit(const char* name) {
#define ntfs_sk_t rk_ntfs_sk_t // ntfs_sk_t ./nio/notify_server.h:1 typedef struct ntfs_sk_t {
#define ntfs_sf_t rk_ntfs_sf_t // ntfs_sf_t ./nio/notify_server.h:8 typedef struct ntfs_sf_t {
#define ntfs_t rk_ntfs_t // ntfs_t ./nio/notify_server.h:15 typedef struct ntfs_t {
#define ntfs_init rk_ntfs_init // ntfs_init ./nio/notify_server.h:22 extern int ntfs_init(ntfs_t* ns, addr_t addr);
#define ntfs_start rk_ntfs_start // ntfs_start ./nio/notify_server.h:23 extern void ntfs_start(ntfs_t* ns);
#define ntfs_update rk_ntfs_update // ntfs_update ./nio/notify_server.h:24 extern void ntfs_update(ntfs_t* ns, const char* msg, int64_t size);
#define alloc_head_t rk_alloc_head_t // alloc_head_t ./alloc/mod_alloc.c:1 typedef struct alloc_head_t {
#define mod_update rk_mod_update // mod_update ./alloc/mod_alloc.c:13 void mod_update(int mod, int64_t sz) {
#define mod_alloc rk_mod_alloc // mod_alloc ./alloc/mod_alloc.c:25 void* mod_alloc(int64_t sz, int mod) {
#define mod_free rk_mod_free // mod_free ./alloc/mod_alloc.c:35 void mod_free(void* p) {
#define salloc rk_salloc // salloc ./alloc/alloc.h:1 extern void* salloc(int64_t sz) WEAK;
#define sfree rk_sfree // sfree ./alloc/alloc.h:2 extern void sfree(void* p) WEAK;
#define dalloc rk_dalloc // dalloc ./alloc/alloc.h:3 extern void* dalloc(int64_t sz) WEAK;
#define dfree rk_dfree // dfree ./alloc/alloc.h:4 extern void dfree(void* p) WEAK;
#define time_wheel_t rk_time_wheel_t // time_wheel_t ./io/time_wheel.h:3 typedef struct time_wheel_t time_wheel_t;
#define tw_init rk_tw_init // tw_init ./io/time_wheel.h:10 extern void tw_init(time_wheel_t* tw, timer_cb_t* cb);
#define tw_regist rk_tw_regist // tw_regist ./io/time_wheel.h:11 extern int tw_regist(time_wheel_t* tw, dlink_t* l);
#define tw_check rk_tw_check // tw_check ./io/time_wheel.h:12 extern void tw_check(time_wheel_t* tw);
#define timerfd_init_tw rk_timerfd_init_tw // timerfd_init_tw ./io/time_wheel.h:13 extern int timerfd_init_tw(eloop_t* ep, timerfd_t* s);
#define ntfs_sk_handle_event rk_ntfs_sk_handle_event // ntfs_sk_handle_event ./nio/notify_server.c:1 static int ntfs_sk_handle_event(ntfs_sk_t* s) {
#define ntfs_sk_init rk_ntfs_sk_init // ntfs_sk_init ./nio/notify_server.c:21 static int ntfs_sk_init(ntfs_sf_t* sf, ntfs_sk_t* s) {
#define ntfs_sk_destroy rk_ntfs_sk_destroy // ntfs_sk_destroy ./nio/notify_server.c:26 static void ntfs_sk_destroy(ntfs_sf_t* sf, ntfs_sk_t* s) {
#define ntfs_sf_do_init rk_ntfs_sf_do_init // ntfs_sf_do_init ./nio/notify_server.c:31 static int ntfs_sf_do_init(ntfs_sf_t* sf, void* arg) {
#define ntfs_cfg_t rk_ntfs_cfg_t // ntfs_cfg_t ./nio/notify_server.c:41 #include "sk_factory.t.h.gen" // #global: ntfs_cfg_t ntfs_resp_cb_on_sk_destroy ntfs_sf_do_init ntfs_sf_init ntfs_sf_t ntfs_sk_alloc ntfs_sk_delete ntfs_sk_destroy ntfs_sk_free ntfs_sk_handle_event ntfs_sk_init ntfs_sk_new ntfs_sk_t ntfs_t ntfs_write_queue_on_sk_destroy
#define ntfs_resp_cb_on_sk_destroy rk_ntfs_resp_cb_on_sk_destroy // ntfs_resp_cb_on_sk_destroy ./nio/notify_server.c:41 #include "sk_factory.t.h.gen" // #global: ntfs_cfg_t ntfs_resp_cb_on_sk_destroy ntfs_sf_do_init ntfs_sf_init ntfs_sf_t ntfs_sk_alloc ntfs_sk_delete ntfs_sk_destroy ntfs_sk_free ntfs_sk_handle_event ntfs_sk_init ntfs_sk_new ntfs_sk_t ntfs_t ntfs_write_queue_on_sk_destroy
#define ntfs_sf_init rk_ntfs_sf_init // ntfs_sf_init ./nio/notify_server.c:41 #include "sk_factory.t.h.gen" // #global: ntfs_cfg_t ntfs_resp_cb_on_sk_destroy ntfs_sf_do_init ntfs_sf_init ntfs_sf_t ntfs_sk_alloc ntfs_sk_delete ntfs_sk_destroy ntfs_sk_free ntfs_sk_handle_event ntfs_sk_init ntfs_sk_new ntfs_sk_t ntfs_t ntfs_write_queue_on_sk_destroy
#define ntfs_sk_alloc rk_ntfs_sk_alloc // ntfs_sk_alloc ./nio/notify_server.c:41 #include "sk_factory.t.h.gen" // #global: ntfs_cfg_t ntfs_resp_cb_on_sk_destroy ntfs_sf_do_init ntfs_sf_init ntfs_sf_t ntfs_sk_alloc ntfs_sk_delete ntfs_sk_destroy ntfs_sk_free ntfs_sk_handle_event ntfs_sk_init ntfs_sk_new ntfs_sk_t ntfs_t ntfs_write_queue_on_sk_destroy
#define ntfs_sk_delete rk_ntfs_sk_delete // ntfs_sk_delete ./nio/notify_server.c:41 #include "sk_factory.t.h.gen" // #global: ntfs_cfg_t ntfs_resp_cb_on_sk_destroy ntfs_sf_do_init ntfs_sf_init ntfs_sf_t ntfs_sk_alloc ntfs_sk_delete ntfs_sk_destroy ntfs_sk_free ntfs_sk_handle_event ntfs_sk_init ntfs_sk_new ntfs_sk_t ntfs_t ntfs_write_queue_on_sk_destroy
#define ntfs_sk_free rk_ntfs_sk_free // ntfs_sk_free ./nio/notify_server.c:41 #include "sk_factory.t.h.gen" // #global: ntfs_cfg_t ntfs_resp_cb_on_sk_destroy ntfs_sf_do_init ntfs_sf_init ntfs_sf_t ntfs_sk_alloc ntfs_sk_delete ntfs_sk_destroy ntfs_sk_free ntfs_sk_handle_event ntfs_sk_init ntfs_sk_new ntfs_sk_t ntfs_t ntfs_write_queue_on_sk_destroy
#define ntfs_sk_new rk_ntfs_sk_new // ntfs_sk_new ./nio/notify_server.c:41 #include "sk_factory.t.h.gen" // #global: ntfs_cfg_t ntfs_resp_cb_on_sk_destroy ntfs_sf_do_init ntfs_sf_init ntfs_sf_t ntfs_sk_alloc ntfs_sk_delete ntfs_sk_destroy ntfs_sk_free ntfs_sk_handle_event ntfs_sk_init ntfs_sk_new ntfs_sk_t ntfs_t ntfs_write_queue_on_sk_destroy
#define ntfs_write_queue_on_sk_destroy rk_ntfs_write_queue_on_sk_destroy // ntfs_write_queue_on_sk_destroy ./nio/notify_server.c:41 #include "sk_factory.t.h.gen" // #global: ntfs_cfg_t ntfs_resp_cb_on_sk_destroy ntfs_sf_do_init ntfs_sf_init ntfs_sf_t ntfs_sk_alloc ntfs_sk_delete ntfs_sk_destroy ntfs_sk_free ntfs_sk_handle_event ntfs_sk_init ntfs_sk_new ntfs_sk_t ntfs_t ntfs_write_queue_on_sk_destroy
#define __ntfs_broadcast __rk_ntfs_broadcast // __ntfs_broadcast ./nio/notify_server.c:45 static void __ntfs_broadcast(eloop_t* ep, dlink_t* sl) {
#define ntfs_evfd_cb rk_ntfs_evfd_cb // ntfs_evfd_cb ./nio/notify_server.c:53 static int ntfs_evfd_cb(evfd_t* s) {
#define ntfs_svr_minit rk_ntfs_svr_minit // ntfs_svr_minit ./nio/notify_server.c:81 EXPORT int ntfs_svr_minit(const char* name) {
#define tw_align_time rk_tw_align_time // tw_align_time ./io/time_wheel.c:2 static int64_t tw_align_time(int64_t us) { return us & ~(TIME_WHEEL_SLOT_INTERVAL - 1); }
#define tw_get_slot rk_tw_get_slot // tw_get_slot ./io/time_wheel.c:3 static dlink_t* tw_get_slot(time_wheel_t* tw, int64_t us) { return tw->slot + (us/TIME_WHEEL_SLOT_INTERVAL) % TIME_WHEEL_SLOT_NUM; }
#define tw_get_expire_us rk_tw_get_expire_us // tw_get_expire_us ./io/time_wheel.c:12 static int64_t tw_get_expire_us(dlink_t* l) { return *(int64_t*)(l + 1); }
#define tw_fire rk_tw_fire // tw_fire ./io/time_wheel.c:13 static void tw_fire(time_wheel_t* tw, dlink_t* l) { tw->cb(tw, l); }
#define tw_check_node rk_tw_check_node // tw_check_node ./io/time_wheel.c:15 static int tw_check_node(time_wheel_t* tw, dlink_t* l) {
#define tw_sweep_slot rk_tw_sweep_slot // tw_sweep_slot ./io/time_wheel.c:29 static void tw_sweep_slot(time_wheel_t* tw) {
#define timerfd_handle_tw rk_timerfd_handle_tw // timerfd_handle_tw ./io/time_wheel.c:43 static int timerfd_handle_tw(timerfd_t* s) {
#define fasthash64 rk_fasthash64 // fasthash64 ./ds/hash.c:6 uint64_t fasthash64(const void *buf, size_t len, uint64_t seed)
#define futex rk_futex // futex ./r0/futex.h:1 extern int futex(int *uaddr, int op, int val, const struct timespec *timeout,
#define futex_wake rk_futex_wake // futex_wake ./r0/futex.h:3 extern int futex_wake(int *p, int val);
#define futex_wait rk_futex_wait // futex_wait ./r0/futex.h:4 extern int futex_wait(int *p, int val, const struct timespec *timeout);
#define cond_queue_init rk_cond_queue_init // cond_queue_init ./ds/cond_queue.c:1 void cond_queue_init(cond_queue_t* q, void* buf, int64_t bytes)
#define cond_queue_push rk_cond_queue_push // cond_queue_push ./ds/cond_queue.c:6 extern int cond_queue_push(cond_queue_t* q, void* p);
#define cond_queue_pop rk_cond_queue_pop // cond_queue_pop ./ds/cond_queue.c:7 extern void* cond_queue_pop(cond_queue_t* q);
#define __unused __rk_unused // __unused ./r0/define.c:1 extern void __unused(void* p, ...);
#define __release__ __rk_release__ // __release__ ./r0/define.h:1 // #global: __release__
#define cond_queue_t rk_cond_queue_t // cond_queue_t ./ds/cond_queue.h:1 typedef struct cond_queue_t {
#define __argc __rk_argc // __argc ./fw/cmd.h:3 extern int __argc;
#define __argv __rk_argv // __argv ./fw/cmd.h:4 extern const char** __argv;
#define __do_cmd __rk_do_cmd // __do_cmd ./fw/cmd.h:5 extern int __do_cmd(const char* name);
#define __handle_cmd __rk_handle_cmd // __handle_cmd ./fw/cmd.h:6 extern int __handle_cmd(int argc, const char** argv);
#define __find_cmd __rk_find_cmd // __find_cmd ./fw/cmd.c:5 static const char* __find_cmd(const char* name) {
#define __help __rk_help // __help ./fw/cmd.c:14 static int __help() {
#define __try_do_cmd __rk_try_do_cmd // __try_do_cmd ./fw/cmd.c:28 static int __try_do_cmd(const char* cmd) {
#define write_queue_t rk_write_queue_t // write_queue_t ./io/write_queue.h:1 typedef struct write_queue_t {
#define wq_init rk_wq_init // wq_init ./io/write_queue.h:6 extern void wq_init(write_queue_t* wq);
#define wq_push rk_wq_push // wq_push ./io/write_queue.h:7 inline void wq_push(write_queue_t* wq, link_t* l) {
#define wq_flush rk_wq_flush // wq_flush ./io/write_queue.h:10 extern int wq_flush(sock_t* s, write_queue_t* wq, link_t** old_head);
#define str_match rk_str_match // str_match ./str/str_match.h:1 extern int str_match(const char* p, char end, const char* s);
#define str_t rk_str_t // str_t ./ds/str_type.h:1 typedef struct str_t {
#define str_hash rk_str_hash // str_hash ./ds/str_type.h:5 inline int64_t str_hash(str_t* s) { return fasthash64(s->b, s->s, 0); }
#define str_cmp rk_str_cmp // str_cmp ./ds/str_type.h:6 inline int str_cmp(str_t* s1, str_t* s2) {
#define strms_sk_handle_event rk_strms_sk_handle_event // strms_sk_handle_event ./nio/stream_server.c:1 static int strms_sk_handle_event(strms_sk_t* s) {
#define strms_sk_init rk_strms_sk_init // strms_sk_init ./nio/stream_server.c:32 static int strms_sk_init(strms_sf_t* sf, strms_sk_t* s) {
#define strms_sk_destroy rk_strms_sk_destroy // strms_sk_destroy ./nio/stream_server.c:40 static void strms_sk_destroy(strms_sf_t* sf, strms_sk_t* s) {
#define strms_cfg_t rk_strms_cfg_t // strms_cfg_t ./nio/stream_server.c:45 typedef struct strms_cfg_t {
#define strms_sf_do_init rk_strms_sf_do_init // strms_sf_do_init ./nio/stream_server.c:48 static int strms_sf_do_init(strms_sf_t* sf, strms_cfg_t* cfg) {
#define strms_resp_cb_on_sk_destroy rk_strms_resp_cb_on_sk_destroy // strms_resp_cb_on_sk_destroy ./nio/stream_server.c:56 #include "sk_factory.t.h.gen" // #global: strms_cfg_t strms_resp_cb_on_sk_destroy strms_sf_do_init strms_sf_init strms_sf_t strms_sk_alloc strms_sk_delete strms_sk_destroy strms_sk_free strms_sk_handle_event strms_sk_init strms_sk_new strms_sk_t strms_t strms_write_queue_on_sk_destroy
#define strms_sf_init rk_strms_sf_init // strms_sf_init ./nio/stream_server.c:56 #include "sk_factory.t.h.gen" // #global: strms_cfg_t strms_resp_cb_on_sk_destroy strms_sf_do_init strms_sf_init strms_sf_t strms_sk_alloc strms_sk_delete strms_sk_destroy strms_sk_free strms_sk_handle_event strms_sk_init strms_sk_new strms_sk_t strms_t strms_write_queue_on_sk_destroy
#define strms_sk_alloc rk_strms_sk_alloc // strms_sk_alloc ./nio/stream_server.c:56 #include "sk_factory.t.h.gen" // #global: strms_cfg_t strms_resp_cb_on_sk_destroy strms_sf_do_init strms_sf_init strms_sf_t strms_sk_alloc strms_sk_delete strms_sk_destroy strms_sk_free strms_sk_handle_event strms_sk_init strms_sk_new strms_sk_t strms_t strms_write_queue_on_sk_destroy
#define strms_sk_delete rk_strms_sk_delete // strms_sk_delete ./nio/stream_server.c:56 #include "sk_factory.t.h.gen" // #global: strms_cfg_t strms_resp_cb_on_sk_destroy strms_sf_do_init strms_sf_init strms_sf_t strms_sk_alloc strms_sk_delete strms_sk_destroy strms_sk_free strms_sk_handle_event strms_sk_init strms_sk_new strms_sk_t strms_t strms_write_queue_on_sk_destroy
#define strms_sk_free rk_strms_sk_free // strms_sk_free ./nio/stream_server.c:56 #include "sk_factory.t.h.gen" // #global: strms_cfg_t strms_resp_cb_on_sk_destroy strms_sf_do_init strms_sf_init strms_sf_t strms_sk_alloc strms_sk_delete strms_sk_destroy strms_sk_free strms_sk_handle_event strms_sk_init strms_sk_new strms_sk_t strms_t strms_write_queue_on_sk_destroy
#define strms_sk_new rk_strms_sk_new // strms_sk_new ./nio/stream_server.c:56 #include "sk_factory.t.h.gen" // #global: strms_cfg_t strms_resp_cb_on_sk_destroy strms_sf_do_init strms_sf_init strms_sf_t strms_sk_alloc strms_sk_delete strms_sk_destroy strms_sk_free strms_sk_handle_event strms_sk_init strms_sk_new strms_sk_t strms_t strms_write_queue_on_sk_destroy
#define strms_write_queue_on_sk_destroy rk_strms_write_queue_on_sk_destroy // strms_write_queue_on_sk_destroy ./nio/stream_server.c:56 #include "sk_factory.t.h.gen" // #global: strms_cfg_t strms_resp_cb_on_sk_destroy strms_sf_do_init strms_sf_init strms_sf_t strms_sk_alloc strms_sk_delete strms_sk_destroy strms_sk_free strms_sk_handle_event strms_sk_init strms_sk_new strms_sk_t strms_t strms_write_queue_on_sk_destroy
#define __strms_broadcast __rk_strms_broadcast // __strms_broadcast ./nio/stream_server.c:60 static void __strms_broadcast(eloop_t* ep, dlink_t* sl) {
#define strms_evfd_cb rk_strms_evfd_cb // strms_evfd_cb ./nio/stream_server.c:68 static int strms_evfd_cb(evfd_t* s) {
#define strms_svr_minit rk_strms_svr_minit // strms_svr_minit ./nio/stream_server.c:92 EXPORT int strms_svr_minit(const char* name) {
#define sfl rk_sfl // sfl ./io/write_queue.c:2 static str_t* sfl(link_t* l) { return (str_t*)(l+1); }
#define iov_from_blist rk_iov_from_blist // iov_from_blist ./io/write_queue.c:3 static int iov_from_blist(struct iovec* iov, int64_t limit, link_t* h) {
#define sk_flush_blist rk_sk_flush_blist // sk_flush_blist ./io/write_queue.c:11 static int sk_flush_blist(sock_t* s, link_t* h, int64_t last_pos, int64_t* wbytes) {
#define wq_consume rk_wq_consume // wq_consume ./io/write_queue.c:23 static link_t* wq_consume(write_queue_t* wq, int64_t bytes) {
#define iov_set rk_iov_set // iov_set ./io/iov.c:1 extern void iov_set(struct iovec* iov, char* b, int64_t s);
#define iov_set_from_str rk_iov_set_from_str // iov_set_from_str ./io/iov.c:2 extern void iov_set_from_str(struct iovec* iov, str_t* s);
#define iov_consume_one rk_iov_consume_one // iov_consume_one ./io/iov.c:3 extern void iov_consume_one(struct iovec* iov, int64_t bytes);
#define sym rk_sym // sym ./fw/dlsym.h:4 extern void* sym(const char *f, ...);
#define sym_vital rk_sym_vital // sym_vital ./fw/dlsym.h:5 extern void* sym_vital(const char *f, ...);
#define addr2sym rk_addr2sym // addr2sym ./fw/dlsym.h:6 extern const char* addr2sym(void* addr);
#define rand64 rk_rand64 // rand64 ./fw/perf.h:1 inline uint64_t rand64(uint64_t h) {
#define __timeit __rk_timeit // __timeit ./fw/perf.h:14 extern int __timeit(const char* name);
#define self_handle rk_self_handle // self_handle ./fw/dlsym.c:1 void* self_handle;
#define __open_self_dlhandle __rk_open_self_dlhandle // __open_self_dlhandle ./fw/dlsym.c:2 CONSTRUCTOR void __open_self_dlhandle() { self_handle = dlopen(NULL, RTLD_LAZY); }
#define dlink_is_empty rk_dlink_is_empty // dlink_is_empty ./ds/dlink.c:1 extern inline bool dlink_is_empty(dlink_t* n);
#define dlink_init rk_dlink_init // dlink_init ./ds/dlink.c:2 extern inline void dlink_init(dlink_t* n);
#define __dlink_insert __rk_dlink_insert // __dlink_insert ./ds/dlink.c:3 extern inline void __dlink_insert(dlink_t* prev, dlink_t* next, dlink_t* n);
#define __dlink_delete __rk_dlink_delete // __dlink_delete ./ds/dlink.c:4 extern inline void __dlink_delete(dlink_t* prev, dlink_t* next);
#define dlink_insert rk_dlink_insert // dlink_insert ./ds/dlink.c:5 extern inline void dlink_insert(dlink_t* head, dlink_t* n);
#define dlink_delete rk_dlink_delete // dlink_delete ./ds/dlink.c:6 extern inline void dlink_delete(dlink_t* n);;
#define ibuffer_t rk_ibuffer_t // ibuffer_t ./io/ibuffer.h:1 typedef struct ibuffer_t {
#define ib_init rk_ib_init // ib_init ./io/ibuffer.h:9 extern void ib_init(ibuffer_t* ib);
#define ib_consumed rk_ib_consumed // ib_consumed ./io/ibuffer.h:10 extern void ib_consumed(ibuffer_t* ib, int64_t sz);
#define sk_read_with_ib rk_sk_read_with_ib // sk_read_with_ib ./io/ibuffer.h:11 extern int sk_read_with_ib(void** ret, sock_t* s, ibuffer_t* ib, int64_t sz);
#define ib_ref rk_ib_ref // ib_ref ./io/ibuffer.h:12 extern void* ib_ref(ibuffer_t* ib);
#define eloop_init rk_eloop_init // eloop_init ./io/eloop.c:7 int eloop_init(eloop_t* ep) {
#define eloop_regist rk_eloop_regist // eloop_regist ./io/eloop.c:13 int eloop_regist(eloop_t* ep, sock_t* s, uint32_t eflag) {
#define eloop_fire rk_eloop_fire // eloop_fire ./io/eloop.c:27 void eloop_fire(eloop_t* ep, sock_t* s) {
#define eloop_refire rk_eloop_refire // eloop_refire ./io/eloop.c:35 static void eloop_refire(eloop_t* ep) {
#define sock_destroy rk_sock_destroy // sock_destroy ./io/eloop.c:49 static void sock_destroy(sock_t* s) {
#define eloop_handle_sock_event rk_eloop_handle_sock_event // eloop_handle_sock_event ./io/eloop.c:59 static void eloop_handle_sock_event(sock_t* s) {
#define eloop_thread_run rk_eloop_thread_run // eloop_thread_run ./io/eloop.c:76 int eloop_thread_run(eloop_t** udata) {
#define eloop_run rk_eloop_run // eloop_run ./io/eloop.c:80 int eloop_run(eloop_t* ep) {
#define eloop_minit rk_eloop_minit // eloop_minit ./io/eloop.c:90 EXPORT int eloop_minit(const char* name) {
#define format_init rk_format_init // format_init ./r0/format.c:2 void format_init(format_t* f, int64_t limit) {
#define format_reset rk_format_reset // format_reset ./r0/format.c:7 void format_reset(format_t* f) {
#define format_gets rk_format_gets // format_gets ./r0/format.c:12 char* format_gets(format_t* f) {
#define format_vsf rk_format_vsf // format_vsf ./r0/format.c:16 char* format_vsf(format_t* f, const char* format, va_list ap) {
#define format_append rk_format_append // format_append ./r0/format.c:28 char* format_append(format_t* f, const char* format, ...) {
#define format_sf rk_format_sf // format_sf ./r0/format.c:37 char* format_sf(format_t* f, const char* format, ...) {
#define format_overwrite rk_format_overwrite // format_overwrite ./r0/format.c:47 char* format_overwrite(format_t* f, const char* format, ...) {
#define ib_alloc rk_ib_alloc // ib_alloc ./io/ibuffer.c:2 static void* ib_alloc(int64_t sz) {
#define ib_retire rk_ib_retire // ib_retire ./io/ibuffer.c:10 static void ib_retire(ibuffer_t* ib) {
#define ib_reset rk_ib_reset // ib_reset ./io/ibuffer.c:17 static void ib_reset(ibuffer_t* ib) {
#define ib_set rk_ib_set // ib_set ./io/ibuffer.c:26 static void ib_set(ibuffer_t* ib, char* b, int64_t limit, int64_t sz) {
#define ib_create rk_ib_create // ib_create ./io/ibuffer.c:33 static int ib_create(ibuffer_t* ib, int64_t sz) {
#define ib_replace rk_ib_replace // ib_replace ./io/ibuffer.c:42 static int ib_replace(ibuffer_t* ib, int64_t sz) {
#define ib_prepare_buffer rk_ib_prepare_buffer // ib_prepare_buffer ./io/ibuffer.c:54 static int ib_prepare_buffer(ibuffer_t* ib, int64_t sz) {
#define ib_read rk_ib_read // ib_read ./io/ibuffer.c:64 static char* ib_read(ibuffer_t* ib, int64_t sz) {
#define dlink_t rk_dlink_t // dlink_t ./ds/dlink.h:1 typedef struct dlink_t {
#define format_t rk_format_t // format_t ./r0/format.h:2 typedef struct format_t {
#define strf rk_strf // strf ./r0/format.h:14 extern char* strf(char* buf, int64_t size, const char *f, ...) __attribute__((format(printf, 3, 4))) ;
#define g_format rk_g_format // g_format ./r0/format.h:15 extern __thread format_t g_format;
#define eloop_t rk_eloop_t // eloop_t ./io/eloop.h:1 typedef struct eloop_t {
#define msg_decode rk_msg_decode // msg_decode ./nio/msg_decode.h:1 inline int64_t msg_decode(const char* b, int64_t s) {
#define msg_get_id rk_msg_get_id // msg_get_id ./nio/msg_decode.h:9 inline uint64_t msg_get_id(const char* b) {
#define thread_func_t rk_thread_func_t // thread_func_t ./fw/thread.h:2 typedef int (*thread_func_t)(void*);
#define thread_t rk_thread_t // thread_t ./fw/thread.h:3 typedef struct thread_t {
#define cur_thread_t rk_cur_thread_t // cur_thread_t ./fw/thread.h:10 typedef struct cur_thread_t {
#define prepare_therad rk_prepare_therad // prepare_therad ./fw/thread.h:20 extern thread_t* prepare_therad(thread_func_t func, void* arg, int sz);
#define make_seq rk_make_seq // make_seq ./fw/perf.c:2 static uint64_t make_seq(uint64_t x, uint64_t id){ return (x<<10) + id; }
#define gen_rand rk_gen_rand // gen_rand ./fw/perf.c:3 static uint64_t gen_rand(uint64_t x, uint64_t id) { return rand64(make_seq(x, id)); }
#define perf_thread_ctx_t rk_perf_thread_ctx_t // perf_thread_ctx_t ./fw/perf.c:5 typedef struct perf_thread_ctx_t {
#define __perf_loop_thread_func __rk_perf_loop_thread_func // __perf_loop_thread_func ./fw/perf.c:11 static int __perf_loop_thread_func(perf_thread_ctx_t* ctx) {
#define __prepare_hook __rk_prepare_hook // __prepare_hook ./fw/perf.c:47 static void __prepare_hook(const char* name) {
#define perf_minit rk_perf_minit // perf_minit ./fw/perf.c:54 EXPORT int perf_minit(const char* name) {
#define str_head rk_str_head // str_head ./str/str_head.h:1 extern const char* str_head(char* b, char sep, const char* s);
#define get_us rk_get_us // get_us ./r0/get_us.c:2 int64_t get_us() {
#define get_corse_us rk_get_corse_us // get_corse_us ./r0/get_us.c:8 extern int64_t get_corse_us();
#define mock_msg_check_t rk_mock_msg_check_t // mock_msg_check_t ./io/mock_msg.h:2 typedef struct mock_msg_check_t {
#define mock_msg_new rk_mock_msg_new // mock_msg_new ./io/mock_msg.h:7 extern msg_t* mock_msg_new(uint64_t header_size, uint64_t id, int mod);
#define mock_msg_check rk_mock_msg_check // mock_msg_check ./io/mock_msg.h:8 extern void mock_msg_check(mock_msg_check_t* chk, const msg_t* msg);
#define mock_msg_check_buf rk_mock_msg_check_buf // mock_msg_check_buf ./io/mock_msg.h:9 extern void mock_msg_check_buf(mock_msg_check_t* chk, const char* buf, int64_t len);
#define mock_msg_check_iov rk_mock_msg_check_iov // mock_msg_check_iov ./io/mock_msg.h:10 extern void mock_msg_check_iov(mock_msg_check_t* chk, struct iovec* iov, int cnt, int64_t bytes);
#define sock_debug_check_t rk_sock_debug_check_t // sock_debug_check_t ./io/mock_msg.h:13 typedef struct sock_debug_check_t {
#define sk_check_io rk_sk_check_io // sk_check_io ./io/mock_msg.h:17 extern void sk_check_io(sock_debug_check_t* check, const char* buf, ssize_t bytes, uint32_t flag);
#define sk_check_iov rk_sk_check_iov // sk_check_iov ./io/mock_msg.h:18 extern void sk_check_iov(sock_debug_check_t* check, struct iovec* iov, int cnt, ssize_t bytes, uint32_t flag);
#define smc_msg_t rk_smc_msg_t // smc_msg_t ./nio/simple_msg_client.h:1 typedef msg_t smc_msg_t;
#define smc_handle_func_t rk_smc_handle_func_t // smc_handle_func_t ./nio/simple_msg_client.h:8 typedef int (*smc_handle_func_t)(const smc_msg_t* resp);
#define smc_g_t rk_smc_g_t // smc_g_t ./nio/simple_msg_client.h:9 typedef struct smc_g_t smc_g_t;
#define smc_cfg_t rk_smc_cfg_t // smc_cfg_t ./nio/simple_msg_client.h:10 typedef struct smc_cfg_t {
#define smc_start rk_smc_start // smc_start ./nio/simple_msg_client.h:15 extern smc_g_t* smc_start(int n_thread, smc_cfg_t* arg);
#define smc_post rk_smc_post // smc_post ./nio/simple_msg_client.h:16 extern int smc_post(smc_g_t* cl, smc_req_t* req, int io_index);
#define listenfd_t rk_listenfd_t // listenfd_t ./nio/listenfd.h:2 typedef struct listenfd_t {
#define listenfd_init rk_listenfd_init // listenfd_init ./nio/listenfd.h:8 extern int listenfd_init(eloop_t* ep, listenfd_t* s, sf_t* sf, addr_t addr);
#define mock_msg_init rk_mock_msg_init // mock_msg_init ./io/mock_msg.c:1 static msg_t* mock_msg_init(msg_t* m, uint64_t id, uint64_t s) {
#define mock_msg_create rk_mock_msg_create // mock_msg_create ./io/mock_msg.c:9 static msg_t* mock_msg_create(char* buf, uint64_t id) {
#define msg_check_fail rk_msg_check_fail // msg_check_fail ./io/mock_msg.c:21 static void msg_check_fail() {
#define mock_msg_check_buf_one rk_mock_msg_check_buf_one // mock_msg_check_buf_one ./io/mock_msg.c:34 static int64_t mock_msg_check_buf_one(mock_msg_check_t* chk, const char* buf, int64_t len) {
#define smc_sk_t rk_smc_sk_t // smc_sk_t ./nio/simple_msg_client.c:1 typedef struct smc_sk_t {
#define smc_sf_t rk_smc_sf_t // smc_sf_t ./nio/simple_msg_client.c:9 typedef struct smc_sf_t {
#define smc_t rk_smc_t // smc_t ./nio/simple_msg_client.c:13 typedef struct smc_t {
#define smc_flush_cb rk_smc_flush_cb // smc_flush_cb ./nio/simple_msg_client.c:23 static void smc_flush_cb(smc_t* io, smc_req_t* r) {
#define smc_sk_do_decode rk_smc_sk_do_decode // smc_sk_do_decode ./nio/simple_msg_client.c:28 static int smc_sk_do_decode(smc_sk_t* s, smc_msg_t** msg) {
#define smc_sk_handle_msg rk_smc_sk_handle_msg // smc_sk_handle_msg ./nio/simple_msg_client.c:36 static int smc_sk_handle_msg(smc_sk_t* s, smc_msg_t* msg) {
#define smc_sk_init rk_smc_sk_init // smc_sk_init ./nio/simple_msg_client.c:43 static int smc_sk_init(smc_sf_t* sf, smc_sk_t* s) {
#define smc_sk_destroy rk_smc_sk_destroy // smc_sk_destroy ./nio/simple_msg_client.c:50 static void smc_sk_destroy(smc_sf_t* sf, smc_sk_t* s) {
#define smc_sf_do_init rk_smc_sf_do_init // smc_sf_do_init ./nio/simple_msg_client.c:55 static int smc_sf_do_init(smc_sf_t* sf, void* arg) {
#define smc_do_post rk_smc_do_post // smc_do_post ./nio/simple_msg_client.c:60 static void smc_do_post(smc_t* cl, smc_sk_t* sk, smc_req_t* r) {
#define smc_minit_cfg rk_smc_minit_cfg // smc_minit_cfg ./nio/simple_msg_client.c:65 static int smc_minit_cfg(smc_cfg_t* cfg, const char* name) {
#define smc_do_init rk_smc_do_init // smc_do_init ./nio/simple_msg_client.c:70 static int smc_do_init(smc_t* cl, smc_cfg_t* cfg) {
#define smc_init_arg_t rk_smc_init_arg_t // smc_init_arg_t ./nio/simple_msg_client.c:75 typedef smc_handle_func_t smc_init_arg_t;
#define smc_cb_t rk_smc_cb_t // smc_cb_t ./nio/simple_msg_client.c:80 #include "nio.t.h.gen" // #global: smc_cb_t smc_cfg_t smc_create smc_cur_resp smc_decode smc_do_cb smc_do_cb_exception smc_do_connect smc_do_init smc_do_post smc_evfd_cb smc_flush_cb smc_flush_cb_after_flush smc_flush_cb_exception smc_flush_cb_on_post_fail smc_g_t smc_get_id smc_get_sk smc_handle_one_req smc_handle_req_queue smc_init smc_minit smc_minit_cfg smc_msg_t smc_post smc_post_async smc_post_io smc_req_dispatch smc_req_t smc_resp_cb_on_msg smc_resp_cb_on_post_fail smc_resp_cb_on_sk_destroy smc_resp_cb_on_timeout smc_select_thread smc_sf_do_init smc_sf_init smc_sf_t smc_sk_alloc smc_sk_check_connect smc_sk_consume smc_sk_delete smc_sk_destroy smc_sk_do_decode smc_sk_do_flush smc_sk_flush smc_sk_free smc_sk_handle_event smc_sk_handle_event_ready smc_sk_handle_msg smc_sk_init smc_sk_msg_done smc_sk_new smc_sk_read smc_sk_t smc_start smc_t smc_thread_work smc_try_connect smc_write_queue_on_sk_destroy
#define smc_create rk_smc_create // smc_create ./nio/simple_msg_client.c:80 #include "nio.t.h.gen" // #global: smc_cb_t smc_cfg_t smc_create smc_cur_resp smc_decode smc_do_cb smc_do_cb_exception smc_do_connect smc_do_init smc_do_post smc_evfd_cb smc_flush_cb smc_flush_cb_after_flush smc_flush_cb_exception smc_flush_cb_on_post_fail smc_g_t smc_get_id smc_get_sk smc_handle_one_req smc_handle_req_queue smc_init smc_minit smc_minit_cfg smc_msg_t smc_post smc_post_async smc_post_io smc_req_dispatch smc_req_t smc_resp_cb_on_msg smc_resp_cb_on_post_fail smc_resp_cb_on_sk_destroy smc_resp_cb_on_timeout smc_select_thread smc_sf_do_init smc_sf_init smc_sf_t smc_sk_alloc smc_sk_check_connect smc_sk_consume smc_sk_delete smc_sk_destroy smc_sk_do_decode smc_sk_do_flush smc_sk_flush smc_sk_free smc_sk_handle_event smc_sk_handle_event_ready smc_sk_handle_msg smc_sk_init smc_sk_msg_done smc_sk_new smc_sk_read smc_sk_t smc_start smc_t smc_thread_work smc_try_connect smc_write_queue_on_sk_destroy
#define smc_cur_resp rk_smc_cur_resp // smc_cur_resp ./nio/simple_msg_client.c:80 #include "nio.t.h.gen" // #global: smc_cb_t smc_cfg_t smc_create smc_cur_resp smc_decode smc_do_cb smc_do_cb_exception smc_do_connect smc_do_init smc_do_post smc_evfd_cb smc_flush_cb smc_flush_cb_after_flush smc_flush_cb_exception smc_flush_cb_on_post_fail smc_g_t smc_get_id smc_get_sk smc_handle_one_req smc_handle_req_queue smc_init smc_minit smc_minit_cfg smc_msg_t smc_post smc_post_async smc_post_io smc_req_dispatch smc_req_t smc_resp_cb_on_msg smc_resp_cb_on_post_fail smc_resp_cb_on_sk_destroy smc_resp_cb_on_timeout smc_select_thread smc_sf_do_init smc_sf_init smc_sf_t smc_sk_alloc smc_sk_check_connect smc_sk_consume smc_sk_delete smc_sk_destroy smc_sk_do_decode smc_sk_do_flush smc_sk_flush smc_sk_free smc_sk_handle_event smc_sk_handle_event_ready smc_sk_handle_msg smc_sk_init smc_sk_msg_done smc_sk_new smc_sk_read smc_sk_t smc_start smc_t smc_thread_work smc_try_connect smc_write_queue_on_sk_destroy
#define smc_decode rk_smc_decode // smc_decode ./nio/simple_msg_client.c:80 #include "nio.t.h.gen" // #global: smc_cb_t smc_cfg_t smc_create smc_cur_resp smc_decode smc_do_cb smc_do_cb_exception smc_do_connect smc_do_init smc_do_post smc_evfd_cb smc_flush_cb smc_flush_cb_after_flush smc_flush_cb_exception smc_flush_cb_on_post_fail smc_g_t smc_get_id smc_get_sk smc_handle_one_req smc_handle_req_queue smc_init smc_minit smc_minit_cfg smc_msg_t smc_post smc_post_async smc_post_io smc_req_dispatch smc_req_t smc_resp_cb_on_msg smc_resp_cb_on_post_fail smc_resp_cb_on_sk_destroy smc_resp_cb_on_timeout smc_select_thread smc_sf_do_init smc_sf_init smc_sf_t smc_sk_alloc smc_sk_check_connect smc_sk_consume smc_sk_delete smc_sk_destroy smc_sk_do_decode smc_sk_do_flush smc_sk_flush smc_sk_free smc_sk_handle_event smc_sk_handle_event_ready smc_sk_handle_msg smc_sk_init smc_sk_msg_done smc_sk_new smc_sk_read smc_sk_t smc_start smc_t smc_thread_work smc_try_connect smc_write_queue_on_sk_destroy
#define smc_do_cb rk_smc_do_cb // smc_do_cb ./nio/simple_msg_client.c:80 #include "nio.t.h.gen" // #global: smc_cb_t smc_cfg_t smc_create smc_cur_resp smc_decode smc_do_cb smc_do_cb_exception smc_do_connect smc_do_init smc_do_post smc_evfd_cb smc_flush_cb smc_flush_cb_after_flush smc_flush_cb_exception smc_flush_cb_on_post_fail smc_g_t smc_get_id smc_get_sk smc_handle_one_req smc_handle_req_queue smc_init smc_minit smc_minit_cfg smc_msg_t smc_post smc_post_async smc_post_io smc_req_dispatch smc_req_t smc_resp_cb_on_msg smc_resp_cb_on_post_fail smc_resp_cb_on_sk_destroy smc_resp_cb_on_timeout smc_select_thread smc_sf_do_init smc_sf_init smc_sf_t smc_sk_alloc smc_sk_check_connect smc_sk_consume smc_sk_delete smc_sk_destroy smc_sk_do_decode smc_sk_do_flush smc_sk_flush smc_sk_free smc_sk_handle_event smc_sk_handle_event_ready smc_sk_handle_msg smc_sk_init smc_sk_msg_done smc_sk_new smc_sk_read smc_sk_t smc_start smc_t smc_thread_work smc_try_connect smc_write_queue_on_sk_destroy
#define smc_do_cb_exception rk_smc_do_cb_exception // smc_do_cb_exception ./nio/simple_msg_client.c:80 #include "nio.t.h.gen" // #global: smc_cb_t smc_cfg_t smc_create smc_cur_resp smc_decode smc_do_cb smc_do_cb_exception smc_do_connect smc_do_init smc_do_post smc_evfd_cb smc_flush_cb smc_flush_cb_after_flush smc_flush_cb_exception smc_flush_cb_on_post_fail smc_g_t smc_get_id smc_get_sk smc_handle_one_req smc_handle_req_queue smc_init smc_minit smc_minit_cfg smc_msg_t smc_post smc_post_async smc_post_io smc_req_dispatch smc_req_t smc_resp_cb_on_msg smc_resp_cb_on_post_fail smc_resp_cb_on_sk_destroy smc_resp_cb_on_timeout smc_select_thread smc_sf_do_init smc_sf_init smc_sf_t smc_sk_alloc smc_sk_check_connect smc_sk_consume smc_sk_delete smc_sk_destroy smc_sk_do_decode smc_sk_do_flush smc_sk_flush smc_sk_free smc_sk_handle_event smc_sk_handle_event_ready smc_sk_handle_msg smc_sk_init smc_sk_msg_done smc_sk_new smc_sk_read smc_sk_t smc_start smc_t smc_thread_work smc_try_connect smc_write_queue_on_sk_destroy
#define smc_do_connect rk_smc_do_connect // smc_do_connect ./nio/simple_msg_client.c:80 #include "nio.t.h.gen" // #global: smc_cb_t smc_cfg_t smc_create smc_cur_resp smc_decode smc_do_cb smc_do_cb_exception smc_do_connect smc_do_init smc_do_post smc_evfd_cb smc_flush_cb smc_flush_cb_after_flush smc_flush_cb_exception smc_flush_cb_on_post_fail smc_g_t smc_get_id smc_get_sk smc_handle_one_req smc_handle_req_queue smc_init smc_minit smc_minit_cfg smc_msg_t smc_post smc_post_async smc_post_io smc_req_dispatch smc_req_t smc_resp_cb_on_msg smc_resp_cb_on_post_fail smc_resp_cb_on_sk_destroy smc_resp_cb_on_timeout smc_select_thread smc_sf_do_init smc_sf_init smc_sf_t smc_sk_alloc smc_sk_check_connect smc_sk_consume smc_sk_delete smc_sk_destroy smc_sk_do_decode smc_sk_do_flush smc_sk_flush smc_sk_free smc_sk_handle_event smc_sk_handle_event_ready smc_sk_handle_msg smc_sk_init smc_sk_msg_done smc_sk_new smc_sk_read smc_sk_t smc_start smc_t smc_thread_work smc_try_connect smc_write_queue_on_sk_destroy
#define smc_evfd_cb rk_smc_evfd_cb // smc_evfd_cb ./nio/simple_msg_client.c:80 #include "nio.t.h.gen" // #global: smc_cb_t smc_cfg_t smc_create smc_cur_resp smc_decode smc_do_cb smc_do_cb_exception smc_do_connect smc_do_init smc_do_post smc_evfd_cb smc_flush_cb smc_flush_cb_after_flush smc_flush_cb_exception smc_flush_cb_on_post_fail smc_g_t smc_get_id smc_get_sk smc_handle_one_req smc_handle_req_queue smc_init smc_minit smc_minit_cfg smc_msg_t smc_post smc_post_async smc_post_io smc_req_dispatch smc_req_t smc_resp_cb_on_msg smc_resp_cb_on_post_fail smc_resp_cb_on_sk_destroy smc_resp_cb_on_timeout smc_select_thread smc_sf_do_init smc_sf_init smc_sf_t smc_sk_alloc smc_sk_check_connect smc_sk_consume smc_sk_delete smc_sk_destroy smc_sk_do_decode smc_sk_do_flush smc_sk_flush smc_sk_free smc_sk_handle_event smc_sk_handle_event_ready smc_sk_handle_msg smc_sk_init smc_sk_msg_done smc_sk_new smc_sk_read smc_sk_t smc_start smc_t smc_thread_work smc_try_connect smc_write_queue_on_sk_destroy
#define smc_flush_cb_after_flush rk_smc_flush_cb_after_flush // smc_flush_cb_after_flush ./nio/simple_msg_client.c:80 #include "nio.t.h.gen" // #global: smc_cb_t smc_cfg_t smc_create smc_cur_resp smc_decode smc_do_cb smc_do_cb_exception smc_do_connect smc_do_init smc_do_post smc_evfd_cb smc_flush_cb smc_flush_cb_after_flush smc_flush_cb_exception smc_flush_cb_on_post_fail smc_g_t smc_get_id smc_get_sk smc_handle_one_req smc_handle_req_queue smc_init smc_minit smc_minit_cfg smc_msg_t smc_post smc_post_async smc_post_io smc_req_dispatch smc_req_t smc_resp_cb_on_msg smc_resp_cb_on_post_fail smc_resp_cb_on_sk_destroy smc_resp_cb_on_timeout smc_select_thread smc_sf_do_init smc_sf_init smc_sf_t smc_sk_alloc smc_sk_check_connect smc_sk_consume smc_sk_delete smc_sk_destroy smc_sk_do_decode smc_sk_do_flush smc_sk_flush smc_sk_free smc_sk_handle_event smc_sk_handle_event_ready smc_sk_handle_msg smc_sk_init smc_sk_msg_done smc_sk_new smc_sk_read smc_sk_t smc_start smc_t smc_thread_work smc_try_connect smc_write_queue_on_sk_destroy
#define smc_flush_cb_exception rk_smc_flush_cb_exception // smc_flush_cb_exception ./nio/simple_msg_client.c:80 #include "nio.t.h.gen" // #global: smc_cb_t smc_cfg_t smc_create smc_cur_resp smc_decode smc_do_cb smc_do_cb_exception smc_do_connect smc_do_init smc_do_post smc_evfd_cb smc_flush_cb smc_flush_cb_after_flush smc_flush_cb_exception smc_flush_cb_on_post_fail smc_g_t smc_get_id smc_get_sk smc_handle_one_req smc_handle_req_queue smc_init smc_minit smc_minit_cfg smc_msg_t smc_post smc_post_async smc_post_io smc_req_dispatch smc_req_t smc_resp_cb_on_msg smc_resp_cb_on_post_fail smc_resp_cb_on_sk_destroy smc_resp_cb_on_timeout smc_select_thread smc_sf_do_init smc_sf_init smc_sf_t smc_sk_alloc smc_sk_check_connect smc_sk_consume smc_sk_delete smc_sk_destroy smc_sk_do_decode smc_sk_do_flush smc_sk_flush smc_sk_free smc_sk_handle_event smc_sk_handle_event_ready smc_sk_handle_msg smc_sk_init smc_sk_msg_done smc_sk_new smc_sk_read smc_sk_t smc_start smc_t smc_thread_work smc_try_connect smc_write_queue_on_sk_destroy
#define smc_flush_cb_on_post_fail rk_smc_flush_cb_on_post_fail // smc_flush_cb_on_post_fail ./nio/simple_msg_client.c:80 #include "nio.t.h.gen" // #global: smc_cb_t smc_cfg_t smc_create smc_cur_resp smc_decode smc_do_cb smc_do_cb_exception smc_do_connect smc_do_init smc_do_post smc_evfd_cb smc_flush_cb smc_flush_cb_after_flush smc_flush_cb_exception smc_flush_cb_on_post_fail smc_g_t smc_get_id smc_get_sk smc_handle_one_req smc_handle_req_queue smc_init smc_minit smc_minit_cfg smc_msg_t smc_post smc_post_async smc_post_io smc_req_dispatch smc_req_t smc_resp_cb_on_msg smc_resp_cb_on_post_fail smc_resp_cb_on_sk_destroy smc_resp_cb_on_timeout smc_select_thread smc_sf_do_init smc_sf_init smc_sf_t smc_sk_alloc smc_sk_check_connect smc_sk_consume smc_sk_delete smc_sk_destroy smc_sk_do_decode smc_sk_do_flush smc_sk_flush smc_sk_free smc_sk_handle_event smc_sk_handle_event_ready smc_sk_handle_msg smc_sk_init smc_sk_msg_done smc_sk_new smc_sk_read smc_sk_t smc_start smc_t smc_thread_work smc_try_connect smc_write_queue_on_sk_destroy
#define smc_get_id rk_smc_get_id // smc_get_id ./nio/simple_msg_client.c:80 #include "nio.t.h.gen" // #global: smc_cb_t smc_cfg_t smc_create smc_cur_resp smc_decode smc_do_cb smc_do_cb_exception smc_do_connect smc_do_init smc_do_post smc_evfd_cb smc_flush_cb smc_flush_cb_after_flush smc_flush_cb_exception smc_flush_cb_on_post_fail smc_g_t smc_get_id smc_get_sk smc_handle_one_req smc_handle_req_queue smc_init smc_minit smc_minit_cfg smc_msg_t smc_post smc_post_async smc_post_io smc_req_dispatch smc_req_t smc_resp_cb_on_msg smc_resp_cb_on_post_fail smc_resp_cb_on_sk_destroy smc_resp_cb_on_timeout smc_select_thread smc_sf_do_init smc_sf_init smc_sf_t smc_sk_alloc smc_sk_check_connect smc_sk_consume smc_sk_delete smc_sk_destroy smc_sk_do_decode smc_sk_do_flush smc_sk_flush smc_sk_free smc_sk_handle_event smc_sk_handle_event_ready smc_sk_handle_msg smc_sk_init smc_sk_msg_done smc_sk_new smc_sk_read smc_sk_t smc_start smc_t smc_thread_work smc_try_connect smc_write_queue_on_sk_destroy
#define smc_get_sk rk_smc_get_sk // smc_get_sk ./nio/simple_msg_client.c:80 #include "nio.t.h.gen" // #global: smc_cb_t smc_cfg_t smc_create smc_cur_resp smc_decode smc_do_cb smc_do_cb_exception smc_do_connect smc_do_init smc_do_post smc_evfd_cb smc_flush_cb smc_flush_cb_after_flush smc_flush_cb_exception smc_flush_cb_on_post_fail smc_g_t smc_get_id smc_get_sk smc_handle_one_req smc_handle_req_queue smc_init smc_minit smc_minit_cfg smc_msg_t smc_post smc_post_async smc_post_io smc_req_dispatch smc_req_t smc_resp_cb_on_msg smc_resp_cb_on_post_fail smc_resp_cb_on_sk_destroy smc_resp_cb_on_timeout smc_select_thread smc_sf_do_init smc_sf_init smc_sf_t smc_sk_alloc smc_sk_check_connect smc_sk_consume smc_sk_delete smc_sk_destroy smc_sk_do_decode smc_sk_do_flush smc_sk_flush smc_sk_free smc_sk_handle_event smc_sk_handle_event_ready smc_sk_handle_msg smc_sk_init smc_sk_msg_done smc_sk_new smc_sk_read smc_sk_t smc_start smc_t smc_thread_work smc_try_connect smc_write_queue_on_sk_destroy
#define smc_handle_one_req rk_smc_handle_one_req // smc_handle_one_req ./nio/simple_msg_client.c:80 #include "nio.t.h.gen" // #global: smc_cb_t smc_cfg_t smc_create smc_cur_resp smc_decode smc_do_cb smc_do_cb_exception smc_do_connect smc_do_init smc_do_post smc_evfd_cb smc_flush_cb smc_flush_cb_after_flush smc_flush_cb_exception smc_flush_cb_on_post_fail smc_g_t smc_get_id smc_get_sk smc_handle_one_req smc_handle_req_queue smc_init smc_minit smc_minit_cfg smc_msg_t smc_post smc_post_async smc_post_io smc_req_dispatch smc_req_t smc_resp_cb_on_msg smc_resp_cb_on_post_fail smc_resp_cb_on_sk_destroy smc_resp_cb_on_timeout smc_select_thread smc_sf_do_init smc_sf_init smc_sf_t smc_sk_alloc smc_sk_check_connect smc_sk_consume smc_sk_delete smc_sk_destroy smc_sk_do_decode smc_sk_do_flush smc_sk_flush smc_sk_free smc_sk_handle_event smc_sk_handle_event_ready smc_sk_handle_msg smc_sk_init smc_sk_msg_done smc_sk_new smc_sk_read smc_sk_t smc_start smc_t smc_thread_work smc_try_connect smc_write_queue_on_sk_destroy
#define smc_handle_req_queue rk_smc_handle_req_queue // smc_handle_req_queue ./nio/simple_msg_client.c:80 #include "nio.t.h.gen" // #global: smc_cb_t smc_cfg_t smc_create smc_cur_resp smc_decode smc_do_cb smc_do_cb_exception smc_do_connect smc_do_init smc_do_post smc_evfd_cb smc_flush_cb smc_flush_cb_after_flush smc_flush_cb_exception smc_flush_cb_on_post_fail smc_g_t smc_get_id smc_get_sk smc_handle_one_req smc_handle_req_queue smc_init smc_minit smc_minit_cfg smc_msg_t smc_post smc_post_async smc_post_io smc_req_dispatch smc_req_t smc_resp_cb_on_msg smc_resp_cb_on_post_fail smc_resp_cb_on_sk_destroy smc_resp_cb_on_timeout smc_select_thread smc_sf_do_init smc_sf_init smc_sf_t smc_sk_alloc smc_sk_check_connect smc_sk_consume smc_sk_delete smc_sk_destroy smc_sk_do_decode smc_sk_do_flush smc_sk_flush smc_sk_free smc_sk_handle_event smc_sk_handle_event_ready smc_sk_handle_msg smc_sk_init smc_sk_msg_done smc_sk_new smc_sk_read smc_sk_t smc_start smc_t smc_thread_work smc_try_connect smc_write_queue_on_sk_destroy
#define smc_init rk_smc_init // smc_init ./nio/simple_msg_client.c:80 #include "nio.t.h.gen" // #global: smc_cb_t smc_cfg_t smc_create smc_cur_resp smc_decode smc_do_cb smc_do_cb_exception smc_do_connect smc_do_init smc_do_post smc_evfd_cb smc_flush_cb smc_flush_cb_after_flush smc_flush_cb_exception smc_flush_cb_on_post_fail smc_g_t smc_get_id smc_get_sk smc_handle_one_req smc_handle_req_queue smc_init smc_minit smc_minit_cfg smc_msg_t smc_post smc_post_async smc_post_io smc_req_dispatch smc_req_t smc_resp_cb_on_msg smc_resp_cb_on_post_fail smc_resp_cb_on_sk_destroy smc_resp_cb_on_timeout smc_select_thread smc_sf_do_init smc_sf_init smc_sf_t smc_sk_alloc smc_sk_check_connect smc_sk_consume smc_sk_delete smc_sk_destroy smc_sk_do_decode smc_sk_do_flush smc_sk_flush smc_sk_free smc_sk_handle_event smc_sk_handle_event_ready smc_sk_handle_msg smc_sk_init smc_sk_msg_done smc_sk_new smc_sk_read smc_sk_t smc_start smc_t smc_thread_work smc_try_connect smc_write_queue_on_sk_destroy
#define smc_minit rk_smc_minit // smc_minit ./nio/simple_msg_client.c:80 #include "nio.t.h.gen" // #global: smc_cb_t smc_cfg_t smc_create smc_cur_resp smc_decode smc_do_cb smc_do_cb_exception smc_do_connect smc_do_init smc_do_post smc_evfd_cb smc_flush_cb smc_flush_cb_after_flush smc_flush_cb_exception smc_flush_cb_on_post_fail smc_g_t smc_get_id smc_get_sk smc_handle_one_req smc_handle_req_queue smc_init smc_minit smc_minit_cfg smc_msg_t smc_post smc_post_async smc_post_io smc_req_dispatch smc_req_t smc_resp_cb_on_msg smc_resp_cb_on_post_fail smc_resp_cb_on_sk_destroy smc_resp_cb_on_timeout smc_select_thread smc_sf_do_init smc_sf_init smc_sf_t smc_sk_alloc smc_sk_check_connect smc_sk_consume smc_sk_delete smc_sk_destroy smc_sk_do_decode smc_sk_do_flush smc_sk_flush smc_sk_free smc_sk_handle_event smc_sk_handle_event_ready smc_sk_handle_msg smc_sk_init smc_sk_msg_done smc_sk_new smc_sk_read smc_sk_t smc_start smc_t smc_thread_work smc_try_connect smc_write_queue_on_sk_destroy
#define smc_post_async rk_smc_post_async // smc_post_async ./nio/simple_msg_client.c:80 #include "nio.t.h.gen" // #global: smc_cb_t smc_cfg_t smc_create smc_cur_resp smc_decode smc_do_cb smc_do_cb_exception smc_do_connect smc_do_init smc_do_post smc_evfd_cb smc_flush_cb smc_flush_cb_after_flush smc_flush_cb_exception smc_flush_cb_on_post_fail smc_g_t smc_get_id smc_get_sk smc_handle_one_req smc_handle_req_queue smc_init smc_minit smc_minit_cfg smc_msg_t smc_post smc_post_async smc_post_io smc_req_dispatch smc_req_t smc_resp_cb_on_msg smc_resp_cb_on_post_fail smc_resp_cb_on_sk_destroy smc_resp_cb_on_timeout smc_select_thread smc_sf_do_init smc_sf_init smc_sf_t smc_sk_alloc smc_sk_check_connect smc_sk_consume smc_sk_delete smc_sk_destroy smc_sk_do_decode smc_sk_do_flush smc_sk_flush smc_sk_free smc_sk_handle_event smc_sk_handle_event_ready smc_sk_handle_msg smc_sk_init smc_sk_msg_done smc_sk_new smc_sk_read smc_sk_t smc_start smc_t smc_thread_work smc_try_connect smc_write_queue_on_sk_destroy
#define smc_post_io rk_smc_post_io // smc_post_io ./nio/simple_msg_client.c:80 #include "nio.t.h.gen" // #global: smc_cb_t smc_cfg_t smc_create smc_cur_resp smc_decode smc_do_cb smc_do_cb_exception smc_do_connect smc_do_init smc_do_post smc_evfd_cb smc_flush_cb smc_flush_cb_after_flush smc_flush_cb_exception smc_flush_cb_on_post_fail smc_g_t smc_get_id smc_get_sk smc_handle_one_req smc_handle_req_queue smc_init smc_minit smc_minit_cfg smc_msg_t smc_post smc_post_async smc_post_io smc_req_dispatch smc_req_t smc_resp_cb_on_msg smc_resp_cb_on_post_fail smc_resp_cb_on_sk_destroy smc_resp_cb_on_timeout smc_select_thread smc_sf_do_init smc_sf_init smc_sf_t smc_sk_alloc smc_sk_check_connect smc_sk_consume smc_sk_delete smc_sk_destroy smc_sk_do_decode smc_sk_do_flush smc_sk_flush smc_sk_free smc_sk_handle_event smc_sk_handle_event_ready smc_sk_handle_msg smc_sk_init smc_sk_msg_done smc_sk_new smc_sk_read smc_sk_t smc_start smc_t smc_thread_work smc_try_connect smc_write_queue_on_sk_destroy
#define smc_req_dispatch rk_smc_req_dispatch // smc_req_dispatch ./nio/simple_msg_client.c:80 #include "nio.t.h.gen" // #global: smc_cb_t smc_cfg_t smc_create smc_cur_resp smc_decode smc_do_cb smc_do_cb_exception smc_do_connect smc_do_init smc_do_post smc_evfd_cb smc_flush_cb smc_flush_cb_after_flush smc_flush_cb_exception smc_flush_cb_on_post_fail smc_g_t smc_get_id smc_get_sk smc_handle_one_req smc_handle_req_queue smc_init smc_minit smc_minit_cfg smc_msg_t smc_post smc_post_async smc_post_io smc_req_dispatch smc_req_t smc_resp_cb_on_msg smc_resp_cb_on_post_fail smc_resp_cb_on_sk_destroy smc_resp_cb_on_timeout smc_select_thread smc_sf_do_init smc_sf_init smc_sf_t smc_sk_alloc smc_sk_check_connect smc_sk_consume smc_sk_delete smc_sk_destroy smc_sk_do_decode smc_sk_do_flush smc_sk_flush smc_sk_free smc_sk_handle_event smc_sk_handle_event_ready smc_sk_handle_msg smc_sk_init smc_sk_msg_done smc_sk_new smc_sk_read smc_sk_t smc_start smc_t smc_thread_work smc_try_connect smc_write_queue_on_sk_destroy
#define smc_req_t rk_smc_req_t // smc_req_t ./nio/simple_msg_client.c:80 #include "nio.t.h.gen" // #global: smc_cb_t smc_cfg_t smc_create smc_cur_resp smc_decode smc_do_cb smc_do_cb_exception smc_do_connect smc_do_init smc_do_post smc_evfd_cb smc_flush_cb smc_flush_cb_after_flush smc_flush_cb_exception smc_flush_cb_on_post_fail smc_g_t smc_get_id smc_get_sk smc_handle_one_req smc_handle_req_queue smc_init smc_minit smc_minit_cfg smc_msg_t smc_post smc_post_async smc_post_io smc_req_dispatch smc_req_t smc_resp_cb_on_msg smc_resp_cb_on_post_fail smc_resp_cb_on_sk_destroy smc_resp_cb_on_timeout smc_select_thread smc_sf_do_init smc_sf_init smc_sf_t smc_sk_alloc smc_sk_check_connect smc_sk_consume smc_sk_delete smc_sk_destroy smc_sk_do_decode smc_sk_do_flush smc_sk_flush smc_sk_free smc_sk_handle_event smc_sk_handle_event_ready smc_sk_handle_msg smc_sk_init smc_sk_msg_done smc_sk_new smc_sk_read smc_sk_t smc_start smc_t smc_thread_work smc_try_connect smc_write_queue_on_sk_destroy
#define smc_resp_cb_on_msg rk_smc_resp_cb_on_msg // smc_resp_cb_on_msg ./nio/simple_msg_client.c:80 #include "nio.t.h.gen" // #global: smc_cb_t smc_cfg_t smc_create smc_cur_resp smc_decode smc_do_cb smc_do_cb_exception smc_do_connect smc_do_init smc_do_post smc_evfd_cb smc_flush_cb smc_flush_cb_after_flush smc_flush_cb_exception smc_flush_cb_on_post_fail smc_g_t smc_get_id smc_get_sk smc_handle_one_req smc_handle_req_queue smc_init smc_minit smc_minit_cfg smc_msg_t smc_post smc_post_async smc_post_io smc_req_dispatch smc_req_t smc_resp_cb_on_msg smc_resp_cb_on_post_fail smc_resp_cb_on_sk_destroy smc_resp_cb_on_timeout smc_select_thread smc_sf_do_init smc_sf_init smc_sf_t smc_sk_alloc smc_sk_check_connect smc_sk_consume smc_sk_delete smc_sk_destroy smc_sk_do_decode smc_sk_do_flush smc_sk_flush smc_sk_free smc_sk_handle_event smc_sk_handle_event_ready smc_sk_handle_msg smc_sk_init smc_sk_msg_done smc_sk_new smc_sk_read smc_sk_t smc_start smc_t smc_thread_work smc_try_connect smc_write_queue_on_sk_destroy
#define smc_resp_cb_on_post_fail rk_smc_resp_cb_on_post_fail // smc_resp_cb_on_post_fail ./nio/simple_msg_client.c:80 #include "nio.t.h.gen" // #global: smc_cb_t smc_cfg_t smc_create smc_cur_resp smc_decode smc_do_cb smc_do_cb_exception smc_do_connect smc_do_init smc_do_post smc_evfd_cb smc_flush_cb smc_flush_cb_after_flush smc_flush_cb_exception smc_flush_cb_on_post_fail smc_g_t smc_get_id smc_get_sk smc_handle_one_req smc_handle_req_queue smc_init smc_minit smc_minit_cfg smc_msg_t smc_post smc_post_async smc_post_io smc_req_dispatch smc_req_t smc_resp_cb_on_msg smc_resp_cb_on_post_fail smc_resp_cb_on_sk_destroy smc_resp_cb_on_timeout smc_select_thread smc_sf_do_init smc_sf_init smc_sf_t smc_sk_alloc smc_sk_check_connect smc_sk_consume smc_sk_delete smc_sk_destroy smc_sk_do_decode smc_sk_do_flush smc_sk_flush smc_sk_free smc_sk_handle_event smc_sk_handle_event_ready smc_sk_handle_msg smc_sk_init smc_sk_msg_done smc_sk_new smc_sk_read smc_sk_t smc_start smc_t smc_thread_work smc_try_connect smc_write_queue_on_sk_destroy
#define smc_resp_cb_on_sk_destroy rk_smc_resp_cb_on_sk_destroy // smc_resp_cb_on_sk_destroy ./nio/simple_msg_client.c:80 #include "nio.t.h.gen" // #global: smc_cb_t smc_cfg_t smc_create smc_cur_resp smc_decode smc_do_cb smc_do_cb_exception smc_do_connect smc_do_init smc_do_post smc_evfd_cb smc_flush_cb smc_flush_cb_after_flush smc_flush_cb_exception smc_flush_cb_on_post_fail smc_g_t smc_get_id smc_get_sk smc_handle_one_req smc_handle_req_queue smc_init smc_minit smc_minit_cfg smc_msg_t smc_post smc_post_async smc_post_io smc_req_dispatch smc_req_t smc_resp_cb_on_msg smc_resp_cb_on_post_fail smc_resp_cb_on_sk_destroy smc_resp_cb_on_timeout smc_select_thread smc_sf_do_init smc_sf_init smc_sf_t smc_sk_alloc smc_sk_check_connect smc_sk_consume smc_sk_delete smc_sk_destroy smc_sk_do_decode smc_sk_do_flush smc_sk_flush smc_sk_free smc_sk_handle_event smc_sk_handle_event_ready smc_sk_handle_msg smc_sk_init smc_sk_msg_done smc_sk_new smc_sk_read smc_sk_t smc_start smc_t smc_thread_work smc_try_connect smc_write_queue_on_sk_destroy
#define smc_resp_cb_on_timeout rk_smc_resp_cb_on_timeout // smc_resp_cb_on_timeout ./nio/simple_msg_client.c:80 #include "nio.t.h.gen" // #global: smc_cb_t smc_cfg_t smc_create smc_cur_resp smc_decode smc_do_cb smc_do_cb_exception smc_do_connect smc_do_init smc_do_post smc_evfd_cb smc_flush_cb smc_flush_cb_after_flush smc_flush_cb_exception smc_flush_cb_on_post_fail smc_g_t smc_get_id smc_get_sk smc_handle_one_req smc_handle_req_queue smc_init smc_minit smc_minit_cfg smc_msg_t smc_post smc_post_async smc_post_io smc_req_dispatch smc_req_t smc_resp_cb_on_msg smc_resp_cb_on_post_fail smc_resp_cb_on_sk_destroy smc_resp_cb_on_timeout smc_select_thread smc_sf_do_init smc_sf_init smc_sf_t smc_sk_alloc smc_sk_check_connect smc_sk_consume smc_sk_delete smc_sk_destroy smc_sk_do_decode smc_sk_do_flush smc_sk_flush smc_sk_free smc_sk_handle_event smc_sk_handle_event_ready smc_sk_handle_msg smc_sk_init smc_sk_msg_done smc_sk_new smc_sk_read smc_sk_t smc_start smc_t smc_thread_work smc_try_connect smc_write_queue_on_sk_destroy
#define smc_select_thread rk_smc_select_thread // smc_select_thread ./nio/simple_msg_client.c:80 #include "nio.t.h.gen" // #global: smc_cb_t smc_cfg_t smc_create smc_cur_resp smc_decode smc_do_cb smc_do_cb_exception smc_do_connect smc_do_init smc_do_post smc_evfd_cb smc_flush_cb smc_flush_cb_after_flush smc_flush_cb_exception smc_flush_cb_on_post_fail smc_g_t smc_get_id smc_get_sk smc_handle_one_req smc_handle_req_queue smc_init smc_minit smc_minit_cfg smc_msg_t smc_post smc_post_async smc_post_io smc_req_dispatch smc_req_t smc_resp_cb_on_msg smc_resp_cb_on_post_fail smc_resp_cb_on_sk_destroy smc_resp_cb_on_timeout smc_select_thread smc_sf_do_init smc_sf_init smc_sf_t smc_sk_alloc smc_sk_check_connect smc_sk_consume smc_sk_delete smc_sk_destroy smc_sk_do_decode smc_sk_do_flush smc_sk_flush smc_sk_free smc_sk_handle_event smc_sk_handle_event_ready smc_sk_handle_msg smc_sk_init smc_sk_msg_done smc_sk_new smc_sk_read smc_sk_t smc_start smc_t smc_thread_work smc_try_connect smc_write_queue_on_sk_destroy
#define smc_sf_init rk_smc_sf_init // smc_sf_init ./nio/simple_msg_client.c:80 #include "nio.t.h.gen" // #global: smc_cb_t smc_cfg_t smc_create smc_cur_resp smc_decode smc_do_cb smc_do_cb_exception smc_do_connect smc_do_init smc_do_post smc_evfd_cb smc_flush_cb smc_flush_cb_after_flush smc_flush_cb_exception smc_flush_cb_on_post_fail smc_g_t smc_get_id smc_get_sk smc_handle_one_req smc_handle_req_queue smc_init smc_minit smc_minit_cfg smc_msg_t smc_post smc_post_async smc_post_io smc_req_dispatch smc_req_t smc_resp_cb_on_msg smc_resp_cb_on_post_fail smc_resp_cb_on_sk_destroy smc_resp_cb_on_timeout smc_select_thread smc_sf_do_init smc_sf_init smc_sf_t smc_sk_alloc smc_sk_check_connect smc_sk_consume smc_sk_delete smc_sk_destroy smc_sk_do_decode smc_sk_do_flush smc_sk_flush smc_sk_free smc_sk_handle_event smc_sk_handle_event_ready smc_sk_handle_msg smc_sk_init smc_sk_msg_done smc_sk_new smc_sk_read smc_sk_t smc_start smc_t smc_thread_work smc_try_connect smc_write_queue_on_sk_destroy
#define smc_sk_alloc rk_smc_sk_alloc // smc_sk_alloc ./nio/simple_msg_client.c:80 #include "nio.t.h.gen" // #global: smc_cb_t smc_cfg_t smc_create smc_cur_resp smc_decode smc_do_cb smc_do_cb_exception smc_do_connect smc_do_init smc_do_post smc_evfd_cb smc_flush_cb smc_flush_cb_after_flush smc_flush_cb_exception smc_flush_cb_on_post_fail smc_g_t smc_get_id smc_get_sk smc_handle_one_req smc_handle_req_queue smc_init smc_minit smc_minit_cfg smc_msg_t smc_post smc_post_async smc_post_io smc_req_dispatch smc_req_t smc_resp_cb_on_msg smc_resp_cb_on_post_fail smc_resp_cb_on_sk_destroy smc_resp_cb_on_timeout smc_select_thread smc_sf_do_init smc_sf_init smc_sf_t smc_sk_alloc smc_sk_check_connect smc_sk_consume smc_sk_delete smc_sk_destroy smc_sk_do_decode smc_sk_do_flush smc_sk_flush smc_sk_free smc_sk_handle_event smc_sk_handle_event_ready smc_sk_handle_msg smc_sk_init smc_sk_msg_done smc_sk_new smc_sk_read smc_sk_t smc_start smc_t smc_thread_work smc_try_connect smc_write_queue_on_sk_destroy
#define smc_sk_check_connect rk_smc_sk_check_connect // smc_sk_check_connect ./nio/simple_msg_client.c:80 #include "nio.t.h.gen" // #global: smc_cb_t smc_cfg_t smc_create smc_cur_resp smc_decode smc_do_cb smc_do_cb_exception smc_do_connect smc_do_init smc_do_post smc_evfd_cb smc_flush_cb smc_flush_cb_after_flush smc_flush_cb_exception smc_flush_cb_on_post_fail smc_g_t smc_get_id smc_get_sk smc_handle_one_req smc_handle_req_queue smc_init smc_minit smc_minit_cfg smc_msg_t smc_post smc_post_async smc_post_io smc_req_dispatch smc_req_t smc_resp_cb_on_msg smc_resp_cb_on_post_fail smc_resp_cb_on_sk_destroy smc_resp_cb_on_timeout smc_select_thread smc_sf_do_init smc_sf_init smc_sf_t smc_sk_alloc smc_sk_check_connect smc_sk_consume smc_sk_delete smc_sk_destroy smc_sk_do_decode smc_sk_do_flush smc_sk_flush smc_sk_free smc_sk_handle_event smc_sk_handle_event_ready smc_sk_handle_msg smc_sk_init smc_sk_msg_done smc_sk_new smc_sk_read smc_sk_t smc_start smc_t smc_thread_work smc_try_connect smc_write_queue_on_sk_destroy
#define smc_sk_consume rk_smc_sk_consume // smc_sk_consume ./nio/simple_msg_client.c:80 #include "nio.t.h.gen" // #global: smc_cb_t smc_cfg_t smc_create smc_cur_resp smc_decode smc_do_cb smc_do_cb_exception smc_do_connect smc_do_init smc_do_post smc_evfd_cb smc_flush_cb smc_flush_cb_after_flush smc_flush_cb_exception smc_flush_cb_on_post_fail smc_g_t smc_get_id smc_get_sk smc_handle_one_req smc_handle_req_queue smc_init smc_minit smc_minit_cfg smc_msg_t smc_post smc_post_async smc_post_io smc_req_dispatch smc_req_t smc_resp_cb_on_msg smc_resp_cb_on_post_fail smc_resp_cb_on_sk_destroy smc_resp_cb_on_timeout smc_select_thread smc_sf_do_init smc_sf_init smc_sf_t smc_sk_alloc smc_sk_check_connect smc_sk_consume smc_sk_delete smc_sk_destroy smc_sk_do_decode smc_sk_do_flush smc_sk_flush smc_sk_free smc_sk_handle_event smc_sk_handle_event_ready smc_sk_handle_msg smc_sk_init smc_sk_msg_done smc_sk_new smc_sk_read smc_sk_t smc_start smc_t smc_thread_work smc_try_connect smc_write_queue_on_sk_destroy
#define smc_sk_delete rk_smc_sk_delete // smc_sk_delete ./nio/simple_msg_client.c:80 #include "nio.t.h.gen" // #global: smc_cb_t smc_cfg_t smc_create smc_cur_resp smc_decode smc_do_cb smc_do_cb_exception smc_do_connect smc_do_init smc_do_post smc_evfd_cb smc_flush_cb smc_flush_cb_after_flush smc_flush_cb_exception smc_flush_cb_on_post_fail smc_g_t smc_get_id smc_get_sk smc_handle_one_req smc_handle_req_queue smc_init smc_minit smc_minit_cfg smc_msg_t smc_post smc_post_async smc_post_io smc_req_dispatch smc_req_t smc_resp_cb_on_msg smc_resp_cb_on_post_fail smc_resp_cb_on_sk_destroy smc_resp_cb_on_timeout smc_select_thread smc_sf_do_init smc_sf_init smc_sf_t smc_sk_alloc smc_sk_check_connect smc_sk_consume smc_sk_delete smc_sk_destroy smc_sk_do_decode smc_sk_do_flush smc_sk_flush smc_sk_free smc_sk_handle_event smc_sk_handle_event_ready smc_sk_handle_msg smc_sk_init smc_sk_msg_done smc_sk_new smc_sk_read smc_sk_t smc_start smc_t smc_thread_work smc_try_connect smc_write_queue_on_sk_destroy
#define smc_sk_do_flush rk_smc_sk_do_flush // smc_sk_do_flush ./nio/simple_msg_client.c:80 #include "nio.t.h.gen" // #global: smc_cb_t smc_cfg_t smc_create smc_cur_resp smc_decode smc_do_cb smc_do_cb_exception smc_do_connect smc_do_init smc_do_post smc_evfd_cb smc_flush_cb smc_flush_cb_after_flush smc_flush_cb_exception smc_flush_cb_on_post_fail smc_g_t smc_get_id smc_get_sk smc_handle_one_req smc_handle_req_queue smc_init smc_minit smc_minit_cfg smc_msg_t smc_post smc_post_async smc_post_io smc_req_dispatch smc_req_t smc_resp_cb_on_msg smc_resp_cb_on_post_fail smc_resp_cb_on_sk_destroy smc_resp_cb_on_timeout smc_select_thread smc_sf_do_init smc_sf_init smc_sf_t smc_sk_alloc smc_sk_check_connect smc_sk_consume smc_sk_delete smc_sk_destroy smc_sk_do_decode smc_sk_do_flush smc_sk_flush smc_sk_free smc_sk_handle_event smc_sk_handle_event_ready smc_sk_handle_msg smc_sk_init smc_sk_msg_done smc_sk_new smc_sk_read smc_sk_t smc_start smc_t smc_thread_work smc_try_connect smc_write_queue_on_sk_destroy
#define smc_sk_flush rk_smc_sk_flush // smc_sk_flush ./nio/simple_msg_client.c:80 #include "nio.t.h.gen" // #global: smc_cb_t smc_cfg_t smc_create smc_cur_resp smc_decode smc_do_cb smc_do_cb_exception smc_do_connect smc_do_init smc_do_post smc_evfd_cb smc_flush_cb smc_flush_cb_after_flush smc_flush_cb_exception smc_flush_cb_on_post_fail smc_g_t smc_get_id smc_get_sk smc_handle_one_req smc_handle_req_queue smc_init smc_minit smc_minit_cfg smc_msg_t smc_post smc_post_async smc_post_io smc_req_dispatch smc_req_t smc_resp_cb_on_msg smc_resp_cb_on_post_fail smc_resp_cb_on_sk_destroy smc_resp_cb_on_timeout smc_select_thread smc_sf_do_init smc_sf_init smc_sf_t smc_sk_alloc smc_sk_check_connect smc_sk_consume smc_sk_delete smc_sk_destroy smc_sk_do_decode smc_sk_do_flush smc_sk_flush smc_sk_free smc_sk_handle_event smc_sk_handle_event_ready smc_sk_handle_msg smc_sk_init smc_sk_msg_done smc_sk_new smc_sk_read smc_sk_t smc_start smc_t smc_thread_work smc_try_connect smc_write_queue_on_sk_destroy
#define smc_sk_free rk_smc_sk_free // smc_sk_free ./nio/simple_msg_client.c:80 #include "nio.t.h.gen" // #global: smc_cb_t smc_cfg_t smc_create smc_cur_resp smc_decode smc_do_cb smc_do_cb_exception smc_do_connect smc_do_init smc_do_post smc_evfd_cb smc_flush_cb smc_flush_cb_after_flush smc_flush_cb_exception smc_flush_cb_on_post_fail smc_g_t smc_get_id smc_get_sk smc_handle_one_req smc_handle_req_queue smc_init smc_minit smc_minit_cfg smc_msg_t smc_post smc_post_async smc_post_io smc_req_dispatch smc_req_t smc_resp_cb_on_msg smc_resp_cb_on_post_fail smc_resp_cb_on_sk_destroy smc_resp_cb_on_timeout smc_select_thread smc_sf_do_init smc_sf_init smc_sf_t smc_sk_alloc smc_sk_check_connect smc_sk_consume smc_sk_delete smc_sk_destroy smc_sk_do_decode smc_sk_do_flush smc_sk_flush smc_sk_free smc_sk_handle_event smc_sk_handle_event_ready smc_sk_handle_msg smc_sk_init smc_sk_msg_done smc_sk_new smc_sk_read smc_sk_t smc_start smc_t smc_thread_work smc_try_connect smc_write_queue_on_sk_destroy
#define smc_sk_handle_event rk_smc_sk_handle_event // smc_sk_handle_event ./nio/simple_msg_client.c:80 #include "nio.t.h.gen" // #global: smc_cb_t smc_cfg_t smc_create smc_cur_resp smc_decode smc_do_cb smc_do_cb_exception smc_do_connect smc_do_init smc_do_post smc_evfd_cb smc_flush_cb smc_flush_cb_after_flush smc_flush_cb_exception smc_flush_cb_on_post_fail smc_g_t smc_get_id smc_get_sk smc_handle_one_req smc_handle_req_queue smc_init smc_minit smc_minit_cfg smc_msg_t smc_post smc_post_async smc_post_io smc_req_dispatch smc_req_t smc_resp_cb_on_msg smc_resp_cb_on_post_fail smc_resp_cb_on_sk_destroy smc_resp_cb_on_timeout smc_select_thread smc_sf_do_init smc_sf_init smc_sf_t smc_sk_alloc smc_sk_check_connect smc_sk_consume smc_sk_delete smc_sk_destroy smc_sk_do_decode smc_sk_do_flush smc_sk_flush smc_sk_free smc_sk_handle_event smc_sk_handle_event_ready smc_sk_handle_msg smc_sk_init smc_sk_msg_done smc_sk_new smc_sk_read smc_sk_t smc_start smc_t smc_thread_work smc_try_connect smc_write_queue_on_sk_destroy
#define smc_sk_handle_event_ready rk_smc_sk_handle_event_ready // smc_sk_handle_event_ready ./nio/simple_msg_client.c:80 #include "nio.t.h.gen" // #global: smc_cb_t smc_cfg_t smc_create smc_cur_resp smc_decode smc_do_cb smc_do_cb_exception smc_do_connect smc_do_init smc_do_post smc_evfd_cb smc_flush_cb smc_flush_cb_after_flush smc_flush_cb_exception smc_flush_cb_on_post_fail smc_g_t smc_get_id smc_get_sk smc_handle_one_req smc_handle_req_queue smc_init smc_minit smc_minit_cfg smc_msg_t smc_post smc_post_async smc_post_io smc_req_dispatch smc_req_t smc_resp_cb_on_msg smc_resp_cb_on_post_fail smc_resp_cb_on_sk_destroy smc_resp_cb_on_timeout smc_select_thread smc_sf_do_init smc_sf_init smc_sf_t smc_sk_alloc smc_sk_check_connect smc_sk_consume smc_sk_delete smc_sk_destroy smc_sk_do_decode smc_sk_do_flush smc_sk_flush smc_sk_free smc_sk_handle_event smc_sk_handle_event_ready smc_sk_handle_msg smc_sk_init smc_sk_msg_done smc_sk_new smc_sk_read smc_sk_t smc_start smc_t smc_thread_work smc_try_connect smc_write_queue_on_sk_destroy
#define smc_sk_msg_done rk_smc_sk_msg_done // smc_sk_msg_done ./nio/simple_msg_client.c:80 #include "nio.t.h.gen" // #global: smc_cb_t smc_cfg_t smc_create smc_cur_resp smc_decode smc_do_cb smc_do_cb_exception smc_do_connect smc_do_init smc_do_post smc_evfd_cb smc_flush_cb smc_flush_cb_after_flush smc_flush_cb_exception smc_flush_cb_on_post_fail smc_g_t smc_get_id smc_get_sk smc_handle_one_req smc_handle_req_queue smc_init smc_minit smc_minit_cfg smc_msg_t smc_post smc_post_async smc_post_io smc_req_dispatch smc_req_t smc_resp_cb_on_msg smc_resp_cb_on_post_fail smc_resp_cb_on_sk_destroy smc_resp_cb_on_timeout smc_select_thread smc_sf_do_init smc_sf_init smc_sf_t smc_sk_alloc smc_sk_check_connect smc_sk_consume smc_sk_delete smc_sk_destroy smc_sk_do_decode smc_sk_do_flush smc_sk_flush smc_sk_free smc_sk_handle_event smc_sk_handle_event_ready smc_sk_handle_msg smc_sk_init smc_sk_msg_done smc_sk_new smc_sk_read smc_sk_t smc_start smc_t smc_thread_work smc_try_connect smc_write_queue_on_sk_destroy
#define smc_sk_new rk_smc_sk_new // smc_sk_new ./nio/simple_msg_client.c:80 #include "nio.t.h.gen" // #global: smc_cb_t smc_cfg_t smc_create smc_cur_resp smc_decode smc_do_cb smc_do_cb_exception smc_do_connect smc_do_init smc_do_post smc_evfd_cb smc_flush_cb smc_flush_cb_after_flush smc_flush_cb_exception smc_flush_cb_on_post_fail smc_g_t smc_get_id smc_get_sk smc_handle_one_req smc_handle_req_queue smc_init smc_minit smc_minit_cfg smc_msg_t smc_post smc_post_async smc_post_io smc_req_dispatch smc_req_t smc_resp_cb_on_msg smc_resp_cb_on_post_fail smc_resp_cb_on_sk_destroy smc_resp_cb_on_timeout smc_select_thread smc_sf_do_init smc_sf_init smc_sf_t smc_sk_alloc smc_sk_check_connect smc_sk_consume smc_sk_delete smc_sk_destroy smc_sk_do_decode smc_sk_do_flush smc_sk_flush smc_sk_free smc_sk_handle_event smc_sk_handle_event_ready smc_sk_handle_msg smc_sk_init smc_sk_msg_done smc_sk_new smc_sk_read smc_sk_t smc_start smc_t smc_thread_work smc_try_connect smc_write_queue_on_sk_destroy
#define smc_sk_read rk_smc_sk_read // smc_sk_read ./nio/simple_msg_client.c:80 #include "nio.t.h.gen" // #global: smc_cb_t smc_cfg_t smc_create smc_cur_resp smc_decode smc_do_cb smc_do_cb_exception smc_do_connect smc_do_init smc_do_post smc_evfd_cb smc_flush_cb smc_flush_cb_after_flush smc_flush_cb_exception smc_flush_cb_on_post_fail smc_g_t smc_get_id smc_get_sk smc_handle_one_req smc_handle_req_queue smc_init smc_minit smc_minit_cfg smc_msg_t smc_post smc_post_async smc_post_io smc_req_dispatch smc_req_t smc_resp_cb_on_msg smc_resp_cb_on_post_fail smc_resp_cb_on_sk_destroy smc_resp_cb_on_timeout smc_select_thread smc_sf_do_init smc_sf_init smc_sf_t smc_sk_alloc smc_sk_check_connect smc_sk_consume smc_sk_delete smc_sk_destroy smc_sk_do_decode smc_sk_do_flush smc_sk_flush smc_sk_free smc_sk_handle_event smc_sk_handle_event_ready smc_sk_handle_msg smc_sk_init smc_sk_msg_done smc_sk_new smc_sk_read smc_sk_t smc_start smc_t smc_thread_work smc_try_connect smc_write_queue_on_sk_destroy
#define smc_thread_work rk_smc_thread_work // smc_thread_work ./nio/simple_msg_client.c:80 #include "nio.t.h.gen" // #global: smc_cb_t smc_cfg_t smc_create smc_cur_resp smc_decode smc_do_cb smc_do_cb_exception smc_do_connect smc_do_init smc_do_post smc_evfd_cb smc_flush_cb smc_flush_cb_after_flush smc_flush_cb_exception smc_flush_cb_on_post_fail smc_g_t smc_get_id smc_get_sk smc_handle_one_req smc_handle_req_queue smc_init smc_minit smc_minit_cfg smc_msg_t smc_post smc_post_async smc_post_io smc_req_dispatch smc_req_t smc_resp_cb_on_msg smc_resp_cb_on_post_fail smc_resp_cb_on_sk_destroy smc_resp_cb_on_timeout smc_select_thread smc_sf_do_init smc_sf_init smc_sf_t smc_sk_alloc smc_sk_check_connect smc_sk_consume smc_sk_delete smc_sk_destroy smc_sk_do_decode smc_sk_do_flush smc_sk_flush smc_sk_free smc_sk_handle_event smc_sk_handle_event_ready smc_sk_handle_msg smc_sk_init smc_sk_msg_done smc_sk_new smc_sk_read smc_sk_t smc_start smc_t smc_thread_work smc_try_connect smc_write_queue_on_sk_destroy
#define smc_try_connect rk_smc_try_connect // smc_try_connect ./nio/simple_msg_client.c:80 #include "nio.t.h.gen" // #global: smc_cb_t smc_cfg_t smc_create smc_cur_resp smc_decode smc_do_cb smc_do_cb_exception smc_do_connect smc_do_init smc_do_post smc_evfd_cb smc_flush_cb smc_flush_cb_after_flush smc_flush_cb_exception smc_flush_cb_on_post_fail smc_g_t smc_get_id smc_get_sk smc_handle_one_req smc_handle_req_queue smc_init smc_minit smc_minit_cfg smc_msg_t smc_post smc_post_async smc_post_io smc_req_dispatch smc_req_t smc_resp_cb_on_msg smc_resp_cb_on_post_fail smc_resp_cb_on_sk_destroy smc_resp_cb_on_timeout smc_select_thread smc_sf_do_init smc_sf_init smc_sf_t smc_sk_alloc smc_sk_check_connect smc_sk_consume smc_sk_delete smc_sk_destroy smc_sk_do_decode smc_sk_do_flush smc_sk_flush smc_sk_free smc_sk_handle_event smc_sk_handle_event_ready smc_sk_handle_msg smc_sk_init smc_sk_msg_done smc_sk_new smc_sk_read smc_sk_t smc_start smc_t smc_thread_work smc_try_connect smc_write_queue_on_sk_destroy
#define smc_write_queue_on_sk_destroy rk_smc_write_queue_on_sk_destroy // smc_write_queue_on_sk_destroy ./nio/simple_msg_client.c:80 #include "nio.t.h.gen" // #global: smc_cb_t smc_cfg_t smc_create smc_cur_resp smc_decode smc_do_cb smc_do_cb_exception smc_do_connect smc_do_init smc_do_post smc_evfd_cb smc_flush_cb smc_flush_cb_after_flush smc_flush_cb_exception smc_flush_cb_on_post_fail smc_g_t smc_get_id smc_get_sk smc_handle_one_req smc_handle_req_queue smc_init smc_minit smc_minit_cfg smc_msg_t smc_post smc_post_async smc_post_io smc_req_dispatch smc_req_t smc_resp_cb_on_msg smc_resp_cb_on_post_fail smc_resp_cb_on_sk_destroy smc_resp_cb_on_timeout smc_select_thread smc_sf_do_init smc_sf_init smc_sf_t smc_sk_alloc smc_sk_check_connect smc_sk_consume smc_sk_delete smc_sk_destroy smc_sk_do_decode smc_sk_do_flush smc_sk_flush smc_sk_free smc_sk_handle_event smc_sk_handle_event_ready smc_sk_handle_msg smc_sk_init smc_sk_msg_done smc_sk_new smc_sk_read smc_sk_t smc_start smc_t smc_thread_work smc_try_connect smc_write_queue_on_sk_destroy
#define queue_init rk_queue_init // queue_init ./ds/queue.c:1 void queue_init(queue_t* q) {
#define queue_push rk_queue_push // queue_push ./ds/queue.c:6 extern void queue_push(queue_t* q, link_t* n);
#define queue_pop rk_queue_pop // queue_pop ./ds/queue.c:7 extern link_t* queue_pop(queue_t* q);
#define queue_top rk_queue_top // queue_top ./ds/queue.c:8 extern link_t* queue_top(queue_t* q);
#define queue_empty rk_queue_empty // queue_empty ./ds/queue.c:9 extern bool queue_empty(queue_t* q);
#define queue_set rk_queue_set // queue_set ./ds/queue.c:10 extern void queue_set(queue_t* q, link_t* n);
#define __rb_read_tbuffer __rk_rb_read_tbuffer // __rb_read_tbuffer ./io/rbuffer.h:9 extern __thread char* __rb_read_tbuffer;
#define __rb_write_tbuffer __rk_rb_write_tbuffer // __rb_write_tbuffer ./io/rbuffer.h:10 extern __thread char* __rb_write_tbuffer;
#define rb_init rk_rb_init // rb_init ./io/rbuffer.h:12 extern void rb_init(rbuffer_t* rb);
#define rb_size rk_rb_size // rb_size ./io/rbuffer.h:13 extern int64_t rb_size(rbuffer_t* rb);
#define rb_alloc rk_rb_alloc // rb_alloc ./io/rbuffer.h:14 extern void* rb_alloc(rbuffer_t* rb, int64_t size);
#define rb_ready rk_rb_ready // rb_ready ./io/rbuffer.h:15 extern void rb_ready(rbuffer_t* rb, char* buf, int64_t size);
#define rb_read rk_rb_read // rb_read ./io/rbuffer.h:16 extern void* rb_read(rbuffer_t* rb, int64_t size);
#define rb_read_for_io rk_rb_read_for_io // rb_read_for_io ./io/rbuffer.h:17 extern char* rb_read_for_io(rbuffer_t* rb, int64_t* size);
#define rb_consumed rk_rb_consumed // rb_consumed ./io/rbuffer.h:18 extern void rb_consumed(rbuffer_t* rb, int64_t size);
#define rb_iov_alloc rk_rb_iov_alloc // rb_iov_alloc ./io/rbuffer.h:20 extern int rb_iov_alloc(rbuffer_t* rb, struct iovec* iov);
#define rb_iov_ready rk_rb_iov_ready // rb_iov_ready ./io/rbuffer.h:21 extern void rb_iov_ready(rbuffer_t* rb, int64_t size);
#define rb_iov_read rk_rb_iov_read // rb_iov_read ./io/rbuffer.h:22 extern int rb_iov_read(rbuffer_t* rb, struct iovec* iov);
#define queue_t rk_queue_t // queue_t ./ds/queue.h:1 typedef struct queue_t {
#define __align __rk_align // __align ./io/rbuffer.c:4 static int64_t __align(int64_t x, int64_t size) { return x & ~(size - 1); }
#define __padding __rk_padding // __padding ./io/rbuffer.c:5 static int64_t __padding(int64_t x, int64_t size) { return (-x) & (size - 1); }
#define __mask __rk_mask // __mask ./io/rbuffer.c:6 static int64_t __mask(int64_t x, int64_t size) { return x & (size - 1); } 
#define __rb_is_wrap __rk_rb_is_wrap // __rb_is_wrap ./io/rbuffer.c:8 static bool __rb_is_wrap(int64_t start, int64_t end) { return __align(end - 1, RBUFFER_SIZE) > start; }
#define __rb_pos __rk_rb_pos // __rb_pos ./io/rbuffer.c:9 static int64_t __rb_pos(int64_t x) { return __mask(x, RBUFFER_SIZE); }
#define __rb_copy_to __rk_rb_copy_to // __rb_copy_to ./io/rbuffer.c:11 static char* __rb_copy_to(const char* rb, int64_t start, int64_t end, char* dest) {
#define __rb_copy_from __rk_rb_copy_from // __rb_copy_from ./io/rbuffer.c:19 static char* __rb_copy_from(char* rb, int64_t start, int64_t end, char* src) {
#define rb_get_read_tbuffer rk_rb_get_read_tbuffer // rb_get_read_tbuffer ./io/rbuffer.c:26 static char* rb_get_read_tbuffer() {
#define rb_get_write_tbuffer rk_rb_get_write_tbuffer // rb_get_write_tbuffer ./io/rbuffer.c:30 static char* rb_get_write_tbuffer() {
#define rb_fill_iov rk_rb_fill_iov // rb_fill_iov ./io/rbuffer.c:89 static int rb_fill_iov(struct iovec* iov, char* buf, int64_t start, int64_t end) {
#define addr_t rk_addr_t // addr_t ./nio/addr.h:4 typedef struct addr_t {
#define check_connect_result rk_check_connect_result // check_connect_result ./nio/inet.c:1 int check_connect_result(int fd) {
#define async_connect rk_async_connect // async_connect ./nio/inet.c:16 int async_connect(addr_t dest) {
#define listen_create rk_listen_create // listen_create ./nio/inet.c:30 int listen_create(addr_t src) {
#define tcp_accept rk_tcp_accept // tcp_accept ./nio/inet.c:45 int tcp_accept(int fd) {
#define set_tcp_reuse_addr rk_set_tcp_reuse_addr // set_tcp_reuse_addr ./nio/inet.c:49 int set_tcp_reuse_addr(int fd) {
#define set_tcp_linger_on rk_set_tcp_linger_on // set_tcp_linger_on ./nio/inet.c:54 int set_tcp_linger_on(int fd) {
#define set_tcp_nodelay rk_set_tcp_nodelay // set_tcp_nodelay ./nio/inet.c:61 int set_tcp_nodelay(int fd) {
#define set_tcp_recv_buf rk_set_tcp_recv_buf // set_tcp_recv_buf ./nio/inet.c:66 int set_tcp_recv_buf(int fd, int size) {
#define set_tcp_send_buf rk_set_tcp_send_buf // set_tcp_send_buf ./nio/inet.c:70 int set_tcp_send_buf(int fd, int size) {
#define sock_fd_str rk_sock_fd_str // sock_fd_str ./nio/inet.c:74 const char* sock_fd_str(format_t* f, int fd) {
#define idm_item_t rk_idm_item_t // idm_item_t ./ds/id_map.h:1 typedef struct idm_item_t {
#define idm_t rk_idm_t // idm_t ./ds/id_map.h:6 typedef struct idm_t {
#define idm_init rk_idm_init // idm_init ./ds/id_map.h:12 extern void idm_init(idm_t* idm, int64_t capacity);
#define idm_get rk_idm_get // idm_get ./ds/id_map.h:13 inline void* idm_get(idm_t* idm, uint64_t id) {
#define idm_set rk_idm_set // idm_set ./ds/id_map.h:17 extern uint64_t idm_set(idm_t* idm, void* data);
#define idm_del rk_idm_del // idm_del ./ds/id_map.h:18 extern void idm_del(idm_t* idm, uint64_t id);
#define fixed_queue_t rk_fixed_queue_t // fixed_queue_t ./ds/fixed_queue.h:1 typedef struct fixed_queue_t {
#define fixed_queue_init rk_fixed_queue_init // fixed_queue_init ./ds/fixed_queue.h:8 void fixed_queue_init(fixed_queue_t* q, void* buf, int64_t bytes);
#define fixed_queue_push rk_fixed_queue_push // fixed_queue_push ./ds/fixed_queue.h:9 inline int fixed_queue_push(fixed_queue_t* q, void* p) {
#define fixed_queue_pop rk_fixed_queue_pop // fixed_queue_pop ./ds/fixed_queue.h:28 inline void* fixed_queue_pop(fixed_queue_t* q) {
#define hash_t rk_hash_t // hash_t ./ds/hash_map.h:1 typedef struct hash_t {
#define hash_create rk_hash_create // hash_create ./ds/hash_map.h:6 extern hash_t* hash_create(int64_t capacity);
#define hash_init rk_hash_init // hash_init ./ds/hash_map.h:7 extern void hash_init(hash_t* h, int64_t capacity);
#define hash_insert rk_hash_insert // hash_insert ./ds/hash_map.h:8 extern link_t* hash_insert(hash_t* map, link_t* k);
#define hash_del rk_hash_del // hash_del ./ds/hash_map.h:9 extern link_t* hash_del(hash_t* map, str_t* k);
#define hash_get rk_hash_get // hash_get ./ds/hash_map.h:10 extern link_t* hash_get(hash_t* map, str_t* k);
#define atomic_msg_t rk_atomic_msg_t // atomic_msg_t ./nio/atomic_msg.h:1 typedef struct atomic_msg_t {
#define atomic_msg_init rk_atomic_msg_init // atomic_msg_init ./nio/atomic_msg.h:7 extern void atomic_msg_init(atomic_msg_t* m);
#define atomic_msg_read rk_atomic_msg_read // atomic_msg_read ./nio/atomic_msg.h:8 extern int64_t atomic_msg_read(atomic_msg_t* m, char* buf, int64_t* seq);
#define atomic_msg_write rk_atomic_msg_write // atomic_msg_write ./nio/atomic_msg.h:9 extern void atomic_msg_write(atomic_msg_t* m, const char* buf, int64_t size);
#define do_log rk_do_log // do_log ./r0/log.c:1 void do_log(int level, const char* file, int lineno, const char* func, const char* format, ...) {
#define gettid rk_gettid // gettid ./r0/log.c:8 pid_t gettid() { return syscall(SYS_gettid); }
#define get_log_level_str rk_get_log_level_str // get_log_level_str ./r0/log.c:10 static const char* get_log_level_str(int level) {
#define format_ts rk_format_ts // format_ts ./r0/log.c:15 static const char* format_ts(char* buf, int64_t limit, int64_t time_us) {
#define log_print rk_log_print // log_print ./r0/log.c:30 static void log_print(const char* s) { fprintf(stderr, "%s\n", s); }
#define default_log_func rk_default_log_func // default_log_func ./r0/log.c:31 void default_log_func(int level, const char* file, int lineno, const char* func, const char* format, va_list ap) {
#define g_log_level rk_g_log_level // g_log_level ./r0/log.c:39 int g_log_level = LOG_LEVEL_INFO;
#define g_log_func rk_g_log_func // g_log_func ./r0/log.c:40 log_func_t g_log_func = default_log_func;
#define __hash_calc __rk_hash_calc // __hash_calc ./ds/hash_map.c:13 static uint64_t __hash_calc(link_t* k) { return str_hash((str_t*)(k + 1)); }
#define __hash_locate __rk_hash_locate // __hash_locate ./ds/hash_map.c:14 static link_t* __hash_locate(hash_t* map, link_t* k) { return &map->table[__hash_calc(k) % map->capacity]; }
#define __hash_cmp __rk_hash_cmp // __hash_cmp ./ds/hash_map.c:15 static int __hash_cmp(link_t* s1, link_t* s2) { return str_cmp((str_t*)(s1 + 1), (str_t*)(s2 + 1)); }
#define __hash_list_search __rk_hash_list_search // __hash_list_search ./ds/hash_map.c:16 static link_t* __hash_list_search(link_t* start, link_t* k, link_t** prev) {
#define lbt rk_lbt // lbt ./r0/lbt.h:1 char* lbt();
#define idm_locate rk_idm_locate // idm_locate ./ds/id_map.c:1 static idm_item_t* idm_locate(idm_t* idm, uint64_t id) { return idm->table + (id % idm->capacity); }
#define idm_item_recycle rk_idm_item_recycle // idm_item_recycle ./ds/id_map.c:2 static void idm_item_recycle(idm_item_t* item, uint64_t capacity) {
#define sc_queue_init rk_sc_queue_init // sc_queue_init ./ds/sc_queue.c:1 void sc_queue_init(sc_queue_t* q) {
#define sc_queue_top rk_sc_queue_top // sc_queue_top ./ds/sc_queue.c:6 extern link_t* sc_queue_top(sc_queue_t* q);
#define sc_queue_push rk_sc_queue_push // sc_queue_push ./ds/sc_queue.c:7 extern bool sc_queue_push(sc_queue_t* q, link_t* n);
#define sc_queue_pop rk_sc_queue_pop // sc_queue_pop ./ds/sc_queue.c:8 extern link_t* sc_queue_pop(sc_queue_t* q);
#define timerfd_t rk_timerfd_t // timerfd_t ./io/timerfd.h:2 typedef struct timerfd_t {
#define listenfd_handle_event rk_listenfd_handle_event // listenfd_handle_event ./nio/listenfd.c:1 int listenfd_handle_event(listenfd_t* s) {
#define parray rk_parray // parray ./r0/lbt.c:2 static char* parray(char* buf, int64_t len, int64_t* array, int size)
#define sc_queue_t rk_sc_queue_t // sc_queue_t ./ds/sc_queue.h:1 typedef struct sc_queue_t {
#else
#pragma pop_macro("counter_add")
#pragma pop_macro("counter_fetch")
#pragma pop_macro("__counter_report")
#pragma pop_macro("page_t")
#pragma pop_macro("pool_direct_alloc")
#pragma pop_macro("pool_direct_free")
#pragma pop_macro("POOL_PAGE_SIZE")
#pragma pop_macro("page_create")
#pragma pop_macro("page_alloc")
#pragma pop_macro("pool_create")
#pragma pop_macro("pool_destroy")
#pragma pop_macro("pool_tail_page")
#pragma pop_macro("pool_alloc")
#pragma pop_macro("cfg")
#pragma pop_macro("cfgi")
#pragma pop_macro("cfg2")
#pragma pop_macro("cfg2i")
#pragma pop_macro("max")
#pragma pop_macro("min")
#pragma pop_macro("pool_t")
#pragma pop_macro("str_next")
#pragma pop_macro("skset")
#pragma pop_macro("skclear")
#pragma pop_macro("sktest")
#pragma pop_macro("sf_init")
#pragma pop_macro("sk_init")
#pragma pop_macro("pktc_wait_cb")
#pragma pop_macro("pktc_wait")
#pragma pop_macro("strms_sk_t")
#pragma pop_macro("strms_sf_t")
#pragma pop_macro("strms_t")
#pragma pop_macro("strms_init")
#pragma pop_macro("strms_signal")
#pragma pop_macro("__STRMS_SIGNAL_FUNC")
#pragma pop_macro("__STRMS_READ_FUNC_DEF")
#pragma pop_macro("STRMS")
#pragma pop_macro("pktc_sk_t")
#pragma pop_macro("pktc_sf_t")
#pragma pop_macro("pktc_t")
#pragma pop_macro("pktc_msg_t")
#pragma pop_macro("pktc_decode")
#pragma pop_macro("pktc_get_id")
#pragma pop_macro("pktc_sk_read")
#pragma pop_macro("pktc_flush_cb")
#pragma pop_macro("pktc_do_cb")
#pragma pop_macro("pktc_do_cb_exception")
#pragma pop_macro("pktc_sk_msg_done")
#pragma pop_macro("pktc_sk_init")
#pragma pop_macro("pktc_sk_destroy")
#pragma pop_macro("pktc_sf_do_init")
#pragma pop_macro("pktc_req_dispatch")
#pragma pop_macro("pktc_minit_cfg")
#pragma pop_macro("pktc_do_init")
#pragma pop_macro("__tns_nio_opt__")
#pragma pop_macro("tns")
#pragma pop_macro("pktc_cb_t")
#pragma pop_macro("pktc_cfg_t")
#pragma pop_macro("pktc_create")
#pragma pop_macro("pktc_cur_resp")
#pragma pop_macro("pktc_do_connect")
#pragma pop_macro("pktc_do_post")
#pragma pop_macro("pktc_evfd_cb")
#pragma pop_macro("pktc_flush_cb_after_flush")
#pragma pop_macro("pktc_flush_cb_exception")
#pragma pop_macro("pktc_flush_cb_on_post_fail")
#pragma pop_macro("pktc_g_t")
#pragma pop_macro("pktc_get_sk")
#pragma pop_macro("pktc_handle_one_req")
#pragma pop_macro("pktc_handle_req_queue")
#pragma pop_macro("pktc_init")
#pragma pop_macro("pktc_minit")
#pragma pop_macro("pktc_post")
#pragma pop_macro("pktc_post_async")
#pragma pop_macro("pktc_post_io")
#pragma pop_macro("pktc_req_t")
#pragma pop_macro("pktc_resp_cb_on_msg")
#pragma pop_macro("pktc_resp_cb_on_post_fail")
#pragma pop_macro("pktc_resp_cb_on_sk_destroy")
#pragma pop_macro("pktc_resp_cb_on_timeout")
#pragma pop_macro("pktc_select_thread")
#pragma pop_macro("pktc_sf_init")
#pragma pop_macro("pktc_sk_alloc")
#pragma pop_macro("pktc_sk_check_connect")
#pragma pop_macro("pktc_sk_consume")
#pragma pop_macro("pktc_sk_delete")
#pragma pop_macro("pktc_sk_do_decode")
#pragma pop_macro("pktc_sk_do_flush")
#pragma pop_macro("pktc_sk_flush")
#pragma pop_macro("pktc_sk_free")
#pragma pop_macro("pktc_sk_handle_event")
#pragma pop_macro("pktc_sk_handle_event_ready")
#pragma pop_macro("pktc_sk_handle_msg")
#pragma pop_macro("pktc_sk_new")
#pragma pop_macro("pktc_start")
#pragma pop_macro("pktc_thread_work")
#pragma pop_macro("pktc_try_connect")
#pragma pop_macro("pktc_write_queue_on_sk_destroy")
#pragma pop_macro("pktc_flush_cb_func_t")
#pragma pop_macro("__PKTC_CB_FUNC_DEF")
#pragma pop_macro("PKTC")
#pragma pop_macro("cur_th_gen_id")
#pragma pop_macro("gen_id")
#pragma pop_macro("g_seq_id")
#pragma pop_macro("gen_seq_id")
#pragma pop_macro("msg_init")
#pragma pop_macro("s2rpc")
#pragma pop_macro("ihash_insert")
#pragma pop_macro("ihash_del")
#pragma pop_macro("ihash_get")
#pragma pop_macro("DEBUG")
#pragma pop_macro("debug_pause")
#pragma pop_macro("debug")
#pragma pop_macro("check")
#pragma pop_macro("link_t")
#pragma pop_macro("link_init")
#pragma pop_macro("link_is_empty")
#pragma pop_macro("link_insert")
#pragma pop_macro("link_delete")
#pragma pop_macro("link_pop")
#pragma pop_macro("link_for_each")
#pragma pop_macro("COUNTER")
#pragma pop_macro("COUNTER_DEF")
#pragma pop_macro("COUNTER_ADD")
#pragma pop_macro("stat_reg_t")
#pragma pop_macro("STAT_DEF")
#pragma pop_macro("get_pc")
#pragma pop_macro("start_stat_report")
#pragma pop_macro("stat_count")
#pragma pop_macro("stat_get")
#pragma pop_macro("stat_format")
#pragma pop_macro("stat_format_all")
#pragma pop_macro("mod_report")
#pragma pop_macro("__stat_thread_func")
#pragma pop_macro("timerfd_set_interval")
#pragma pop_macro("timerfd_init")
#pragma pop_macro("thread_channel_t")
#pragma pop_macro("tch_handle_queue_def")
#pragma pop_macro("tch_evfd_cb_def")
#pragma pop_macro("tch_init")
#pragma pop_macro("tch_post")
#pragma pop_macro("N_COND")
#pragma pop_macro("multi_cond_t")
#pragma pop_macro("multi_cond_init")
#pragma pop_macro("multi_cond_alloc")
#pragma pop_macro("multi_cond_signal")
#pragma pop_macro("BARRIER")
#pragma pop_macro("MBARRIER")
#pragma pop_macro("SPIN_PAUSE")
#pragma pop_macro("LOAD")
#pragma pop_macro("STORE")
#pragma pop_macro("FAA")
#pragma pop_macro("AAF")
#pragma pop_macro("TAS")
#pragma pop_macro("VCAS")
#pragma pop_macro("BCAS")
#pragma pop_macro("__ihash_calc")
#pragma pop_macro("__ihash_locate")
#pragma pop_macro("__ihash_key")
#pragma pop_macro("__ihash_list_search")
#pragma pop_macro("tls_i64")
#pragma pop_macro("tls_add")
#pragma pop_macro("tls_sumo")
#pragma pop_macro("tls_suma")
#pragma pop_macro("pkts_sk_t")
#pragma pop_macro("pkts_sf_t")
#pragma pop_macro("pkts_t")
#pragma pop_macro("pkts_msg_t")
#pragma pop_macro("pkts_decode")
#pragma pop_macro("pkts_flush_cb")
#pragma pop_macro("pkts_sk_read")
#pragma pop_macro("pkts_sk_handle_msg")
#pragma pop_macro("pkts_sk_init")
#pragma pop_macro("pkts_sk_destroy")
#pragma pop_macro("pkts_sf_do_init")
#pragma pop_macro("pkts_do_init")
#pragma pop_macro("pkts_get_sk")
#pragma pop_macro("pkts_do_post")
#pragma pop_macro("pkts_minit_cfg")
#pragma pop_macro("pkts_cb_t")
#pragma pop_macro("pkts_cfg_t")
#pragma pop_macro("pkts_create")
#pragma pop_macro("pkts_cur_resp")
#pragma pop_macro("pkts_do_cb")
#pragma pop_macro("pkts_do_cb_exception")
#pragma pop_macro("pkts_do_connect")
#pragma pop_macro("pkts_evfd_cb")
#pragma pop_macro("pkts_flush_cb_after_flush")
#pragma pop_macro("pkts_flush_cb_exception")
#pragma pop_macro("pkts_flush_cb_on_post_fail")
#pragma pop_macro("pkts_g_t")
#pragma pop_macro("pkts_get_id")
#pragma pop_macro("pkts_handle_one_req")
#pragma pop_macro("pkts_handle_req_queue")
#pragma pop_macro("pkts_init")
#pragma pop_macro("pkts_minit")
#pragma pop_macro("pkts_post")
#pragma pop_macro("pkts_post_async")
#pragma pop_macro("pkts_post_io")
#pragma pop_macro("pkts_req_dispatch")
#pragma pop_macro("pkts_req_t")
#pragma pop_macro("pkts_resp_cb_on_msg")
#pragma pop_macro("pkts_resp_cb_on_post_fail")
#pragma pop_macro("pkts_resp_cb_on_sk_destroy")
#pragma pop_macro("pkts_resp_cb_on_timeout")
#pragma pop_macro("pkts_select_thread")
#pragma pop_macro("pkts_sf_init")
#pragma pop_macro("pkts_sk_alloc")
#pragma pop_macro("pkts_sk_check_connect")
#pragma pop_macro("pkts_sk_consume")
#pragma pop_macro("pkts_sk_delete")
#pragma pop_macro("pkts_sk_do_decode")
#pragma pop_macro("pkts_sk_do_flush")
#pragma pop_macro("pkts_sk_flush")
#pragma pop_macro("pkts_sk_free")
#pragma pop_macro("pkts_sk_handle_event")
#pragma pop_macro("pkts_sk_handle_event_ready")
#pragma pop_macro("pkts_sk_msg_done")
#pragma pop_macro("pkts_sk_new")
#pragma pop_macro("pkts_start")
#pragma pop_macro("pkts_thread_work")
#pragma pop_macro("pkts_try_connect")
#pragma pop_macro("pkts_write_queue_on_sk_destroy")
#pragma pop_macro("pkts_flush_cb_func_t")
#pragma pop_macro("__PKTS_HANDLE_FUNC_DEF")
#pragma pop_macro("PKTS")
#pragma pop_macro("sms_g_t")
#pragma pop_macro("sms_cfg_t")
#pragma pop_macro("sms_start")
#pragma pop_macro("__SMS_HANDLE_FUNC_DEF")
#pragma pop_macro("SMS")
#pragma pop_macro("make_fd_nonblocking")
#pragma pop_macro("is_pipe")
#pragma pop_macro("uintr_pread")
#pragma pop_macro("uintr_pwrite")
#pragma pop_macro("fsize")
#pragma pop_macro("fmap")
#pragma pop_macro("uintr_read")
#pragma pop_macro("uintr_readv")
#pragma pop_macro("uintr_write")
#pragma pop_macro("uintr_writev")
#pragma pop_macro("sk_read")
#pragma pop_macro("sk_readv")
#pragma pop_macro("sk_write")
#pragma pop_macro("sk_writev")
#pragma pop_macro("sk_try_read_rb")
#pragma pop_macro("sk_try_write_rb")
#pragma pop_macro("sk_write_rb")
#pragma pop_macro("sk_read_with_rb")
#pragma pop_macro("sk_alloc_with_rb")
#pragma pop_macro("sk_translate_io_error")
#pragma pop_macro("sk_after_io")
#pragma pop_macro("sk_after_iov")
#pragma pop_macro("sk_after_read")
#pragma pop_macro("sk_after_write")
#pragma pop_macro("sk_after_readv")
#pragma pop_macro("sk_after_writev")
#pragma pop_macro("sms_msg_t")
#pragma pop_macro("sms_sk_t")
#pragma pop_macro("sms_sf_t")
#pragma pop_macro("sms_t")
#pragma pop_macro("sms_sk_do_flush")
#pragma pop_macro("sms_sk_do_decode")
#pragma pop_macro("sms_sk_handle_msg")
#pragma pop_macro("sms_sk_init")
#pragma pop_macro("sms_sk_destroy")
#pragma pop_macro("sms_minit_cfg")
#pragma pop_macro("sms_sf_do_init")
#pragma pop_macro("sms_do_init")
#pragma pop_macro("sms_cb_t")
#pragma pop_macro("sms_create")
#pragma pop_macro("sms_cur_resp")
#pragma pop_macro("sms_decode")
#pragma pop_macro("sms_do_cb")
#pragma pop_macro("sms_do_cb_exception")
#pragma pop_macro("sms_do_connect")
#pragma pop_macro("sms_do_post")
#pragma pop_macro("sms_evfd_cb")
#pragma pop_macro("sms_flush_cb")
#pragma pop_macro("sms_flush_cb_after_flush")
#pragma pop_macro("sms_flush_cb_exception")
#pragma pop_macro("sms_flush_cb_on_post_fail")
#pragma pop_macro("sms_get_id")
#pragma pop_macro("sms_get_sk")
#pragma pop_macro("sms_handle_one_req")
#pragma pop_macro("sms_handle_req_queue")
#pragma pop_macro("sms_init")
#pragma pop_macro("sms_minit")
#pragma pop_macro("sms_post")
#pragma pop_macro("sms_post_async")
#pragma pop_macro("sms_post_io")
#pragma pop_macro("sms_req_dispatch")
#pragma pop_macro("sms_req_t")
#pragma pop_macro("sms_resp_cb_on_msg")
#pragma pop_macro("sms_resp_cb_on_post_fail")
#pragma pop_macro("sms_resp_cb_on_sk_destroy")
#pragma pop_macro("sms_resp_cb_on_timeout")
#pragma pop_macro("sms_select_thread")
#pragma pop_macro("sms_sf_init")
#pragma pop_macro("sms_sk_alloc")
#pragma pop_macro("sms_sk_check_connect")
#pragma pop_macro("sms_sk_consume")
#pragma pop_macro("sms_sk_delete")
#pragma pop_macro("sms_sk_flush")
#pragma pop_macro("sms_sk_free")
#pragma pop_macro("sms_sk_handle_event")
#pragma pop_macro("sms_sk_handle_event_ready")
#pragma pop_macro("sms_sk_msg_done")
#pragma pop_macro("sms_sk_new")
#pragma pop_macro("sms_sk_read")
#pragma pop_macro("sms_thread_work")
#pragma pop_macro("sms_try_connect")
#pragma pop_macro("sms_write_queue_on_sk_destroy")
#pragma pop_macro("pktc_wait_t")
#pragma pop_macro("MODULE")
#pragma pop_macro("__start_module")
#pragma pop_macro("__start_modules")
#pragma pop_macro("tls_co")
#pragma pop_macro("tls_get")
#pragma pop_macro("tls_o")
#pragma pop_macro("tls_a")
#pragma pop_macro("for_each_module")
#pragma pop_macro("__do_start_module")
#pragma pop_macro("__start_all_modules")
#pragma pop_macro("ref_alloc")
#pragma pop_macro("ref_free")
#pragma pop_macro("addr_str")
#pragma pop_macro("addr_build")
#pragma pop_macro("addr_init")
#pragma pop_macro("addr_set")
#pragma pop_macro("get_remote_addr")
#pragma pop_macro("get_local_addr")
#pragma pop_macro("make_unix_sockaddr")
#pragma pop_macro("make_sockaddr")
#pragma pop_macro("evfd_signal")
#pragma pop_macro("evfd_drain")
#pragma pop_macro("evfd_init")
#pragma pop_macro("sock_t")
#pragma pop_macro("SOCK_FACTORY_COMMON")
#pragma pop_macro("sf_t")
#pragma pop_macro("handle_event_t")
#pragma pop_macro("SOCK_COMMON")
#pragma pop_macro("EPOLLPENDING")
#pragma pop_macro("sks")
#pragma pop_macro("skt")
#pragma pop_macro("skc")
#pragma pop_macro("evfd_t")
#pragma pop_macro("g_thread_array")
#pragma pop_macro("g_thread_count")
#pragma pop_macro("cth")
#pragma pop_macro("thread_base")
#pragma pop_macro("__thread_setup")
#pragma pop_macro("__thread_work")
#pragma pop_macro("prepare_thread")
#pragma pop_macro("__start_thread0")
#pragma pop_macro("__start_thread")
#pragma pop_macro("__start_thread_group")
#pragma pop_macro("__wait_threads")
#pragma pop_macro("thread_calloc")
#pragma pop_macro("threads_minit")
#pragma pop_macro("ntfs_sk_t")
#pragma pop_macro("ntfs_sf_t")
#pragma pop_macro("ntfs_t")
#pragma pop_macro("ntfs_init")
#pragma pop_macro("ntfs_start")
#pragma pop_macro("ntfs_update")
#pragma pop_macro("__NOTIFY_FUNC")
#pragma pop_macro("NTFS")
#pragma pop_macro("alloc_head_t")
#pragma pop_macro("mod_update")
#pragma pop_macro("mod_alloc")
#pragma pop_macro("mod_free")
#pragma pop_macro("salloc")
#pragma pop_macro("sfree")
#pragma pop_macro("dalloc")
#pragma pop_macro("dfree")
#pragma pop_macro("TIME_WHEEL_SLOT_NUM")
#pragma pop_macro("TIME_WHEEL_SLOT_INTERVAL")
#pragma pop_macro("time_wheel_t")
#pragma pop_macro("tw_init")
#pragma pop_macro("tw_regist")
#pragma pop_macro("tw_check")
#pragma pop_macro("timerfd_init_tw")
#pragma pop_macro("ntfs_sk_handle_event")
#pragma pop_macro("ntfs_sk_init")
#pragma pop_macro("ntfs_sk_destroy")
#pragma pop_macro("ntfs_sf_do_init")
#pragma pop_macro("ntfs_cfg_t")
#pragma pop_macro("ntfs_resp_cb_on_sk_destroy")
#pragma pop_macro("ntfs_sf_init")
#pragma pop_macro("ntfs_sk_alloc")
#pragma pop_macro("ntfs_sk_delete")
#pragma pop_macro("ntfs_sk_free")
#pragma pop_macro("ntfs_sk_new")
#pragma pop_macro("ntfs_write_queue_on_sk_destroy")
#pragma pop_macro("__ntfs_broadcast")
#pragma pop_macro("ntfs_evfd_cb")
#pragma pop_macro("ntfs_svr_minit")
#pragma pop_macro("tw_align_time")
#pragma pop_macro("tw_get_slot")
#pragma pop_macro("tw_get_expire_us")
#pragma pop_macro("tw_fire")
#pragma pop_macro("tw_check_node")
#pragma pop_macro("tw_sweep_slot")
#pragma pop_macro("timerfd_handle_tw")
#pragma pop_macro("__fhmix")
#pragma pop_macro("fasthash64")
#pragma pop_macro("futex")
#pragma pop_macro("futex_wake")
#pragma pop_macro("futex_wait")
#pragma pop_macro("THREAD_SETUP")
#pragma pop_macro("cond_queue_init")
#pragma pop_macro("cond_queue_push")
#pragma pop_macro("cond_queue_pop")
#pragma pop_macro("__unused")
#pragma pop_macro("__release__")
#pragma pop_macro("MAX_PATH_SIZE")
#pragma pop_macro("MAX_SYM_SIZE")
#pragma pop_macro("MAX_THREAD_NUM")
#pragma pop_macro("MAX_RPC_BUFFER_SIZE")
#pragma pop_macro("PAGE_SIZE")
#pragma pop_macro("PAGE_ALIGNED")
#pragma pop_macro("CACHE_ALIGN_SIZE")
#pragma pop_macro("CACHE_ALIGNED")
#pragma pop_macro("CONSTRUCTOR")
#pragma pop_macro("unused")
#pragma pop_macro("structof")
#pragma pop_macro("arrlen")
#pragma pop_macro("ef")
#pragma pop_macro("el")
#pragma pop_macro("STR")
#pragma pop_macro("XSTR")
#pragma pop_macro("WEAK")
#pragma pop_macro("cond_queue_t")
#pragma pop_macro("CMD")
#pragma pop_macro("__argc")
#pragma pop_macro("__argv")
#pragma pop_macro("__do_cmd")
#pragma pop_macro("__handle_cmd")
#pragma pop_macro("NIO_OPT_LISTEN")
#pragma pop_macro("NIO_OPT_CONNECT")
#pragma pop_macro("NIO_OPT_POST")
#pragma pop_macro("NIO_OPT_RESP_CB")
#pragma pop_macro("NIO_OPT_DECODE")
#pragma pop_macro("NIO_OPT_WRITE_QUEUE")
#pragma pop_macro("nio_test")
#pragma pop_macro("for_each_cmd")
#pragma pop_macro("__find_cmd")
#pragma pop_macro("__help")
#pragma pop_macro("__try_do_cmd")
#pragma pop_macro("write_queue_t")
#pragma pop_macro("wq_init")
#pragma pop_macro("wq_push")
#pragma pop_macro("wq_flush")
#pragma pop_macro("str_match")
#pragma pop_macro("str_t")
#pragma pop_macro("str_hash")
#pragma pop_macro("str_cmp")
#pragma pop_macro("strms_sk_handle_event")
#pragma pop_macro("strms_sk_init")
#pragma pop_macro("strms_sk_destroy")
#pragma pop_macro("strms_cfg_t")
#pragma pop_macro("strms_sf_do_init")
#pragma pop_macro("strms_resp_cb_on_sk_destroy")
#pragma pop_macro("strms_sf_init")
#pragma pop_macro("strms_sk_alloc")
#pragma pop_macro("strms_sk_delete")
#pragma pop_macro("strms_sk_free")
#pragma pop_macro("strms_sk_new")
#pragma pop_macro("strms_write_queue_on_sk_destroy")
#pragma pop_macro("__strms_broadcast")
#pragma pop_macro("strms_evfd_cb")
#pragma pop_macro("strms_svr_minit")
#pragma pop_macro("sfl")
#pragma pop_macro("iov_from_blist")
#pragma pop_macro("sk_flush_blist")
#pragma pop_macro("wq_consume")
#pragma pop_macro("USECTION_NAME")
#pragma pop_macro("USECTION_BEGIN")
#pragma pop_macro("USECTION_END")
#pragma pop_macro("USECTION_DEF")
#pragma pop_macro("USECTION")
#pragma pop_macro("USECTION_SIZE")
#pragma pop_macro("for_each_str_in_section")
#pragma pop_macro("iov_set")
#pragma pop_macro("iov_set_from_str")
#pragma pop_macro("iov_consume_one")
#pragma pop_macro("EXPORT")
#pragma pop_macro("sym")
#pragma pop_macro("sym_vital")
#pragma pop_macro("addr2sym")
#pragma pop_macro("rand64")
#pragma pop_macro("PERF")
#pragma pop_macro("__timeit")
#pragma pop_macro("TIMEIT")
#pragma pop_macro("self_handle")
#pragma pop_macro("__open_self_dlhandle")
#pragma pop_macro("dlink_is_empty")
#pragma pop_macro("dlink_init")
#pragma pop_macro("__dlink_insert")
#pragma pop_macro("__dlink_delete")
#pragma pop_macro("dlink_insert")
#pragma pop_macro("dlink_delete")
#pragma pop_macro("ibuffer_t")
#pragma pop_macro("ib_init")
#pragma pop_macro("ib_consumed")
#pragma pop_macro("sk_read_with_ib")
#pragma pop_macro("ib_ref")
#pragma pop_macro("eloop_init")
#pragma pop_macro("eloop_regist")
#pragma pop_macro("eloop_fire")
#pragma pop_macro("eloop_refire")
#pragma pop_macro("sock_destroy")
#pragma pop_macro("eloop_handle_sock_event")
#pragma pop_macro("eloop_thread_run")
#pragma pop_macro("eloop_run")
#pragma pop_macro("eloop_minit")
#pragma pop_macro("format_init")
#pragma pop_macro("format_reset")
#pragma pop_macro("format_gets")
#pragma pop_macro("format_vsf")
#pragma pop_macro("format_append")
#pragma pop_macro("format_sf")
#pragma pop_macro("format_overwrite")
#pragma pop_macro("ib_alloc")
#pragma pop_macro("ib_retire")
#pragma pop_macro("ib_reset")
#pragma pop_macro("ib_set")
#pragma pop_macro("ib_create")
#pragma pop_macro("ib_replace")
#pragma pop_macro("ib_prepare_buffer")
#pragma pop_macro("ib_read")
#pragma pop_macro("dlink_t")
#pragma pop_macro("dlink_for")
#pragma pop_macro("format_t")
#pragma pop_macro("strf")
#pragma pop_macro("g_format")
#pragma pop_macro("T2S")
#pragma pop_macro("eloop_t")
#pragma pop_macro("__ELOOP_CMD")
#pragma pop_macro("__ELOOP_MODULE")
#pragma pop_macro("__ELOOP_INIT_FUNC")
#pragma pop_macro("EVLOOP")
#pragma pop_macro("msg_decode")
#pragma pop_macro("msg_get_id")
#pragma pop_macro("thread_func_t")
#pragma pop_macro("thread_t")
#pragma pop_macro("cur_thread_t")
#pragma pop_macro("prepare_therad")
#pragma pop_macro("THREAD_ALLOC")
#pragma pop_macro("THREAD")
#pragma pop_macro("make_seq")
#pragma pop_macro("gen_rand")
#pragma pop_macro("perf_thread_ctx_t")
#pragma pop_macro("__perf_loop_thread_func")
#pragma pop_macro("__prepare_hook")
#pragma pop_macro("perf_minit")
#pragma pop_macro("str_head")
#pragma pop_macro("get_us")
#pragma pop_macro("get_corse_us")
#pragma pop_macro("mock_msg_check_t")
#pragma pop_macro("mock_msg_new")
#pragma pop_macro("mock_msg_check")
#pragma pop_macro("mock_msg_check_buf")
#pragma pop_macro("mock_msg_check_iov")
#pragma pop_macro("sock_debug_check_t")
#pragma pop_macro("sk_check_io")
#pragma pop_macro("sk_check_iov")
#pragma pop_macro("smc_msg_t")
#pragma pop_macro("smc_handle_func_t")
#pragma pop_macro("smc_g_t")
#pragma pop_macro("smc_cfg_t")
#pragma pop_macro("smc_start")
#pragma pop_macro("smc_post")
#pragma pop_macro("__SMC_HANDLE_FUNC_DEF")
#pragma pop_macro("SMC")
#pragma pop_macro("listenfd_t")
#pragma pop_macro("listenfd_init")
#pragma pop_macro("mock_msg_init")
#pragma pop_macro("mock_msg_create")
#pragma pop_macro("msg_check_fail")
#pragma pop_macro("mock_msg_check_buf_one")
#pragma pop_macro("smc_sk_t")
#pragma pop_macro("smc_sf_t")
#pragma pop_macro("smc_t")
#pragma pop_macro("smc_flush_cb")
#pragma pop_macro("smc_sk_do_decode")
#pragma pop_macro("smc_sk_handle_msg")
#pragma pop_macro("smc_sk_init")
#pragma pop_macro("smc_sk_destroy")
#pragma pop_macro("smc_sf_do_init")
#pragma pop_macro("smc_do_post")
#pragma pop_macro("smc_minit_cfg")
#pragma pop_macro("smc_do_init")
#pragma pop_macro("smc_init_arg_t")
#pragma pop_macro("smc_cb_t")
#pragma pop_macro("smc_create")
#pragma pop_macro("smc_cur_resp")
#pragma pop_macro("smc_decode")
#pragma pop_macro("smc_do_cb")
#pragma pop_macro("smc_do_cb_exception")
#pragma pop_macro("smc_do_connect")
#pragma pop_macro("smc_evfd_cb")
#pragma pop_macro("smc_flush_cb_after_flush")
#pragma pop_macro("smc_flush_cb_exception")
#pragma pop_macro("smc_flush_cb_on_post_fail")
#pragma pop_macro("smc_get_id")
#pragma pop_macro("smc_get_sk")
#pragma pop_macro("smc_handle_one_req")
#pragma pop_macro("smc_handle_req_queue")
#pragma pop_macro("smc_init")
#pragma pop_macro("smc_minit")
#pragma pop_macro("smc_post_async")
#pragma pop_macro("smc_post_io")
#pragma pop_macro("smc_req_dispatch")
#pragma pop_macro("smc_req_t")
#pragma pop_macro("smc_resp_cb_on_msg")
#pragma pop_macro("smc_resp_cb_on_post_fail")
#pragma pop_macro("smc_resp_cb_on_sk_destroy")
#pragma pop_macro("smc_resp_cb_on_timeout")
#pragma pop_macro("smc_select_thread")
#pragma pop_macro("smc_sf_init")
#pragma pop_macro("smc_sk_alloc")
#pragma pop_macro("smc_sk_check_connect")
#pragma pop_macro("smc_sk_consume")
#pragma pop_macro("smc_sk_delete")
#pragma pop_macro("smc_sk_do_flush")
#pragma pop_macro("smc_sk_flush")
#pragma pop_macro("smc_sk_free")
#pragma pop_macro("smc_sk_handle_event")
#pragma pop_macro("smc_sk_handle_event_ready")
#pragma pop_macro("smc_sk_msg_done")
#pragma pop_macro("smc_sk_new")
#pragma pop_macro("smc_sk_read")
#pragma pop_macro("smc_thread_work")
#pragma pop_macro("smc_try_connect")
#pragma pop_macro("smc_write_queue_on_sk_destroy")
#pragma pop_macro("queue_init")
#pragma pop_macro("queue_push")
#pragma pop_macro("queue_pop")
#pragma pop_macro("queue_top")
#pragma pop_macro("queue_empty")
#pragma pop_macro("queue_set")
#pragma pop_macro("__rb_read_tbuffer")
#pragma pop_macro("__rb_write_tbuffer")
#pragma pop_macro("rb_init")
#pragma pop_macro("rb_size")
#pragma pop_macro("rb_alloc")
#pragma pop_macro("rb_ready")
#pragma pop_macro("rb_read")
#pragma pop_macro("rb_read_for_io")
#pragma pop_macro("rb_consumed")
#pragma pop_macro("rb_iov_alloc")
#pragma pop_macro("rb_iov_ready")
#pragma pop_macro("rb_iov_read")
#pragma pop_macro("queue_t")
#pragma pop_macro("STREAM_IO")
#pragma pop_macro("MSG_IO")
#pragma pop_macro("PACKET_IO")
#pragma pop_macro("__align")
#pragma pop_macro("__padding")
#pragma pop_macro("__mask")
#pragma pop_macro("__rb_is_wrap")
#pragma pop_macro("__rb_pos")
#pragma pop_macro("__rb_copy_to")
#pragma pop_macro("__rb_copy_from")
#pragma pop_macro("rb_get_read_tbuffer")
#pragma pop_macro("rb_get_write_tbuffer")
#pragma pop_macro("rb_fill_iov")
#pragma pop_macro("addr_t")
#pragma pop_macro("check_connect_result")
#pragma pop_macro("async_connect")
#pragma pop_macro("listen_create")
#pragma pop_macro("tcp_accept")
#pragma pop_macro("set_tcp_reuse_addr")
#pragma pop_macro("set_tcp_linger_on")
#pragma pop_macro("set_tcp_nodelay")
#pragma pop_macro("set_tcp_recv_buf")
#pragma pop_macro("set_tcp_send_buf")
#pragma pop_macro("sock_fd_str")
#pragma pop_macro("idm_item_t")
#pragma pop_macro("idm_t")
#pragma pop_macro("idm_init")
#pragma pop_macro("idm_get")
#pragma pop_macro("idm_set")
#pragma pop_macro("idm_del")
#pragma pop_macro("fixed_queue_t")
#pragma pop_macro("fixed_queue_init")
#pragma pop_macro("fixed_queue_push")
#pragma pop_macro("fixed_queue_pop")
#pragma pop_macro("hash_t")
#pragma pop_macro("hash_create")
#pragma pop_macro("hash_init")
#pragma pop_macro("hash_insert")
#pragma pop_macro("hash_del")
#pragma pop_macro("hash_get")
#pragma pop_macro("atomic_msg_t")
#pragma pop_macro("atomic_msg_init")
#pragma pop_macro("atomic_msg_read")
#pragma pop_macro("atomic_msg_write")
#pragma pop_macro("do_log")
#pragma pop_macro("gettid")
#pragma pop_macro("get_log_level_str")
#pragma pop_macro("format_ts")
#pragma pop_macro("log_print")
#pragma pop_macro("default_log_func")
#pragma pop_macro("g_log_level")
#pragma pop_macro("g_log_func")
#pragma pop_macro("__hash_calc")
#pragma pop_macro("__hash_locate")
#pragma pop_macro("__hash_cmp")
#pragma pop_macro("__hash_list_search")
#pragma pop_macro("log_macro")
#pragma pop_macro("error")
#pragma pop_macro("info")
#pragma pop_macro("fatal")
#pragma pop_macro("lbt")
#pragma pop_macro("idm_locate")
#pragma pop_macro("idm_item_recycle")
#pragma pop_macro("sc_queue_init")
#pragma pop_macro("sc_queue_top")
#pragma pop_macro("sc_queue_push")
#pragma pop_macro("sc_queue_pop")
#pragma pop_macro("timerfd_t")
#pragma pop_macro("listenfd_handle_event")
#pragma pop_macro("parray")
#pragma pop_macro("sc_queue_t")
#line 15 "alloc/pool.c"
#define RK_POOL_PAGE_SIZE (1<<16)
#line 1 "r0/utility.h"
#define rk_cfg(k, v) (getenv(k)?: v)
#line 2 "r0/utility.h"
#define rk_cfgi(k, v) atoll(rk_cfg(k, v))
#line 3 "r0/utility.h"
#define rk_cfg2(k1, k2, v) rk_cfg(k1, rk_cfg(k2, v))
#line 4 "r0/utility.h"
#define rk_cfg2i(k1, k2, v) atoll(rk_cfg2(k1, k2, v))
#line 6 "r0/utility.h"
#define rk_max(a,b) ({ typeof (a) _a = (a), _b = (b); _a > _b ? _a : _b; })
#line 7 "r0/utility.h"
#define rk_min(a,b) ({ typeof (a) _a = (a), _b = (b); _a < _b ? _a : _b; })
#line 27 "nio/stream_server.h"
#define __RK_STRMS_SIGNAL_FUNC(name) void name ## _signal() { return rk_strms_signal(&__ ## name ## _strms_svr); }
#line 28 "nio/stream_server.h"
#define __RK_STRMS_READ_FUNC_DEF(name) RK_EXPORT int64_t __ ## name ## _read_func(char* buf, int64_t size, int64_t pos)
#line 29 "nio/stream_server.h"
#define RK_STRMS(name) RK_EXPORT rk_strms_t __ ## name ## _strms_svr; __RK_STRMS_SIGNAL_FUNC(name); RK_CMD(name, "stream server") { return rk_strms_svr_minit(#name); } __RK_STRMS_READ_FUNC_DEF(name)
#line 94 "nio/packet_client.c"
#define __rk_tns_nio_opt__ (RK_NIO_OPT_CONNECT|RK_NIO_OPT_POST|RK_NIO_OPT_RESP_CB|RK_NIO_OPT_DECODE|RK_NIO_OPT_WRITE_QUEUE)
#line 96 "nio/packet_client.c"
#define rk_tns(x) pktc ## x
#line 33 "nio/packet_client.h"
#define __RK_PKTC_CB_FUNC_DEF(name) RK_EXPORT void __ ## name ## _flush_cb_func(rk_pktc_req_t* req)
#line 34 "nio/packet_client.h"
#define RK_PKTC(name) RK_EXPORT rk_pktc_g_t* __ ## name ## _g; RK_CMD(name, "packet client"){ return rk_pktc_minit(#name); } __RK_PKTC_CB_FUNC_DEF(name)
#line 3 "r0/debug.h"
#define RK_DEBUG(...) __VA_ARGS__
#line 7 "r0/debug.h"
#define rk_debug_pause(x) RK_DEBUG(usleep(x))
#line 8 "r0/debug.h"
#define rk_debug(...) RK_DEBUG(rk_info(__VA_ARGS__))
#line 10 "r0/debug.h"
#define rk_check(expr, format, ...) if (!(expr)) rk_fatal(format, ##__VA_ARGS__)
#line 31 "ds/link.h"
#define rk_link_for_each(h, n) for(rk_link_t *lpi = h, *n = NULL; lpi && (n = lpi->next, 1);  lpi = n)
#line 2 "fw/stat.h"
#define RK_COUNTER(name) __ ## name ## _pc
#line 3 "fw/stat.h"
#define RK_COUNTER_DEF(name) RK_EXPORT __thread int64_t RK_COUNTER(name)
#line 4 "fw/stat.h"
#define RK_COUNTER_ADD(name, x) RK_COUNTER(name) += x
#line 12 "fw/stat.h"
#define RK_STAT_DEF(stat_name, show_diff) RK_COUNTER_DEF(stat_name); RK_USECTION(stat) rk_stat_reg_t __ ## stat_name ## _stat_reg = {.name=#stat_name, .off=0, .last=0, .diff=show_diff};
#line 6 "io/thread_channel.h"
#define rk_tch_handle_queue_def(name) static int name ## _tch_handle_queue(rk_thread_channel_t* tch) { \
    rk_link_t* l = NULL;                                                   \
    int cnt = 0;                                                        \
    while((l = rk_sc_queue_pop(&tch->req_queue))) {                        \
      name ## _tch_handle_one(tch, l);                                  \
      cnt++;                                                            \
    }                                                                   \
    return cnt == 0? EAGAIN: 0;                                         \
  }
#line 16 "io/thread_channel.h"
#define rk_tch_evfd_cb_def(name) static int name ## _tch_evfd_cb(rk_sock_t* s) { \
    rk_evfd_drain(s->fd);                                                  \
    return name ## _tch_handle_queue(rk_structof(s, rk_thread_channel_t, evfd)); \
  }
#line 1 "ds/multi_cond.h"
#define RK_N_COND 256
#line 1 "r0/atomic.h"
#define RK_BARRIER() asm volatile(""::: "memory")
#line 2 "r0/atomic.h"
#define RK_MBARRIER() __sync_synchronize()
#line 5 "r0/atomic.h"
#define RK_SPIN_PAUSE() asm("pause\n")
#line 10 "r0/atomic.h"
#define RK_LOAD(x) __atomic_load_n((x), __ATOMIC_ACQUIRE)
#line 11 "r0/atomic.h"
#define RK_STORE(x, v) __atomic_store_n((x), (v), __ATOMIC_RELEASE)
#line 13 "r0/atomic.h"
#define RK_FAA(val, addv) __sync_fetch_and_add((val), (addv))
#line 14 "r0/atomic.h"
#define RK_AAF(val, addv) __sync_add_and_fetch((val), (addv))
#line 15 "r0/atomic.h"
#define RK_TAS(val, newv) __sync_lock_test_and_set((val), (newv))
#line 16 "r0/atomic.h"
#define RK_VCAS(val, cmpv, newv) __sync_val_compare_and_swap((val), (cmpv), (newv))
#line 17 "r0/atomic.h"
#define RK_BCAS(val, cmpv, newv) __sync_bool_compare_and_swap((val), (cmpv), (newv))
#line 26 "nio/packet_server.h"
#define __RK_PKTS_HANDLE_FUNC_DEF(name) RK_EXPORT int __ ## name ## _handle_func(void* udata, void* req_handle, const char* b, int64_t s, uint64_t chid)
#line 27 "nio/packet_server.h"
#define RK_PKTS(name) RK_EXPORT rk_pkts_g_t* __ ## name ## _g; RK_CMD(name, "packet server"){ return rk_pkts_minit(#name); } __RK_PKTS_HANDLE_FUNC_DEF(name)
#line 10 "nio/simple_msg_server.h"
#define __RK_SMS_HANDLE_FUNC_DEF(name) RK_EXPORT int __ ## name ## _handle_func(const msg_t* req, msg_t* resp)
#line 11 "nio/simple_msg_server.h"
#define RK_SMS(name) RK_EXPORT rk_sms_t* __ ## name ## _g; RK_CMD(name, "simple msg server"){ return rk_sms_minit(#name); } __RK_SMS_HANDLE_FUNC_DEF(name)
#line 3 "fw/module.h"
#define RK_MODULE(t, n) RK_USECTION(module) const char __ ## n ## _module_desc[] = #n "\0" #t;
#line 2 "fw/module.c"
#define rk_for_each_module(m) rk_for_each_str_in_section(m, module)
#line 3 "io/sock.h"
#define RK_SOCK_FACTORY_COMMON                       \
  struct rk_sock_t* (*create)(struct rk_sf_t*);         \
  void (*destroy)(struct rk_sf_t*, struct rk_sock_t*);
#line 12 "io/sock.h"
#define RK_SOCK_COMMON                             \
  rk_sock_debug_check_t debug_check;                  \
  struct rk_sf_t* fty;                             \
  rk_handle_event_t handle_event;                  \
  rk_dlink_t ready_link;                           \
  int fd;                                       \
  uint32_t mask;                                \
  uint8_t conn_ok:1
#line 26 "io/sock.h"
#define RK_EPOLLPENDING EPOLLONESHOT
#line 30 "io/sock.h"
#define rk_sks(s, flag) rk_skset((rk_sock_t*)s, EPOLL ## flag)
#line 31 "io/sock.h"
#define rk_skt(s, flag) rk_sktest((rk_sock_t*)s, EPOLL ## flag)
#line 32 "io/sock.h"
#define rk_skc(s, flag) rk_skclear((rk_sock_t*)s, EPOLL ## flag)
#line 26 "nio/notify_server.h"
#define __RK_NOTIFY_FUNC(name) void name ## _notify(const char* msg, int64_t size) { return rk_ntfs_update(&__ ## name ## _ntfs_svr, msg, size); }
#line 27 "nio/notify_server.h"
#define RK_NTFS(name) RK_EXPORT rk_ntfs_t __ ## name ## _ntfs_svr; __RK_NOTIFY_FUNC(name); RK_CMD(name, "notify server") { return rk_ntfs_svr_minit(#name); }
#line 1 "io/time_wheel.h"
#define RK_TIME_WHEEL_SLOT_NUM (1<<16)
#line 2 "io/time_wheel.h"
#define RK_TIME_WHEEL_SLOT_INTERVAL 1024
#line 1 "ds/hash.c"
#define __rk_fhmix(h) ({                           \
      (h) ^= (h) >> 23;                         \
      (h) *= 0x2127599bf4325c37ULL;             \
      (h) ^= (h) >> 47; })
#line 1 "fw/thread_init_hook.h"
#define RK_THREAD_SETUP(func) static void __thread_setup_ ## func(); RK_USECTION(thread_setup) void* __thread_setup_ ## func ## _ptr = (void*)__thread_setup_ ## func; static void __thread_setup_ ## func()
#line 11 "r0/define.h"
#define  RK_MAX_PATH_SIZE  1024
#line 12 "r0/define.h"
#define  RK_MAX_SYM_SIZE  256
#line 13 "r0/define.h"
#define  RK_MAX_THREAD_NUM  1024
#line 14 "r0/define.h"
#define  RK_MAX_RPC_BUFFER_SIZE  (1<<21)
#line 16 "r0/define.h"
#define RK_PAGE_SIZE 4096
#line 17 "r0/define.h"
#define RK_PAGE_ALIGNED __attribute__((aligned(RK_PAGE_SIZE)))
#line 18 "r0/define.h"
#define RK_CACHE_ALIGN_SIZE 64
#line 19 "r0/define.h"
#define RK_CACHE_ALIGNED __attribute__((aligned(RK_CACHE_ALIGN_SIZE)))
#line 20 "r0/define.h"
#define RK_CONSTRUCTOR __attribute__((constructor))
#line 23 "r0/define.h"
#define rk_unused(args...) __rk_unused(NULL, args)
#line 24 "r0/define.h"
#define rk_structof(p, T, m) (T*)((char*)p - offsetof(T, m))
#line 25 "r0/define.h"
#define rk_arrlen(x) (sizeof(x)/sizeof(x[0]))
#line 26 "r0/define.h"
#define rk_ef(x) if ((x)) goto rk_el
#line 27 "r0/define.h"
#define rk_el() rk_el:
#line 29 "r0/define.h"
#define RK_STR(x) RK_XSTR(x)
#line 30 "r0/define.h"
#define RK_XSTR(x) #x
#line 31 "r0/define.h"
#define RK_WEAK __attribute__((weak))
#line 1 "fw/cmd.h"
#define RK_CMD(name, doc) RK_USECTION(cmd) const char __ ## name ## _cmd_desc[] = #name ": " doc;  RK_EXPORT int __ ## name ## _cmd_func()
#line 1 "nio/nio_opt.h"
#define RK_NIO_OPT_LISTEN 1
#line 2 "nio/nio_opt.h"
#define RK_NIO_OPT_CONNECT 2
#line 3 "nio/nio_opt.h"
#define RK_NIO_OPT_POST 4
#line 4 "nio/nio_opt.h"
#define RK_NIO_OPT_RESP_CB 8
#line 5 "nio/nio_opt.h"
#define RK_NIO_OPT_DECODE 16
#line 6 "nio/nio_opt.h"
#define RK_NIO_OPT_WRITE_QUEUE 32
#line 8 "nio/nio_opt.h"
#define rk_nio_test(xxx) (__rk_tns_nio_opt__ & NIO_OPT_ ## xxx)
#line 4 "fw/cmd.c"
#define rk_for_each_cmd(c) rk_for_each_str_in_section(c, cmd)
#line 11 "lds/lds.h"
#define RK_USECTION_NAME(name) .u.name
#line 12 "lds/lds.h"
#define RK_USECTION_BEGIN(name) _ ## name ## _section_start
#line 13 "lds/lds.h"
#define RK_USECTION_END(name) _ ## name ## _section_end
#line 15 "lds/lds.h"
#define RK_USECTION_DEF(name) char RK_USECTION_BEGIN(name), RK_USECTION_END(name)
#line 16 "lds/lds.h"
#define RK_USECTION(name) __attribute__((used,section(".u." #name),aligned(1)))
#line 17 "lds/lds.h"
#define RK_USECTION_SIZE(name) ((char*)&RK_USECTION_END(name) - (char*)&RK_USECTION_BEGIN(name))
#line 18 "lds/lds.h"
#define rk_for_each_str_in_section(s, sec) for(const char* s = &RK_USECTION_BEGIN(sec); s < &RK_USECTION_END(sec); s = rk_str_next(s))
#line 3 "fw/dlsym.h"
#define RK_EXPORT __attribute__((visibility ("default")))
#line 10 "fw/perf.h"
#define RK_PERF(func) RK_STAT_DEF(func, 1);\
  RK_CMD(func, "perf " #func) { return rk_perf_minit(#func); }; \
  RK_EXPORT void __ ## func ##_perf()
#line 15 "fw/perf.h"
#define RK_TIMEIT(func) \
 RK_CMD(func, "timeit " #func) { __rk_timeit(#func); return 0; } \
 RK_EXPORT void __ ## func ## _perf()
#line 36 "ds/dlink.h"
#define rk_dlink_for(head, p) for(rk_dlink_t* p = (head)->next, *_np = p->next; p != (head); p = _np, _np = p->next)
#line 16 "r0/format.h"
#define RK_T2S(type, obj) type ## _str(&rk_g_format, obj)
#line 12 "io/eloop.h"
#define __RK_ELOOP_CMD(name) RK_CMD(name, "eloop " #name) { __rk_start_module(#name); return 0; }
#line 13 "io/eloop.h"
#define __RK_ELOOP_MODULE(name) RK_EXPORT rk_eloop_t __ ## name ## _eloop; RK_MODULE(eloop, name)
#line 14 "io/eloop.h"
#define __RK_ELOOP_INIT_FUNC(name) RK_EXPORT int __ ## name ## _eloop_init(rk_eloop_t* ep)
#line 15 "io/eloop.h"
#define RK_EVLOOP(name) __RK_ELOOP_CMD(name); __RK_ELOOP_MODULE(name); __RK_ELOOP_INIT_FUNC(name)
#line 26 "fw/thread.h"
#define RK_THREAD_ALLOC(o) (o = rk_thread_calloc(sizeof(*o)))
#line 28 "fw/thread.h"
#define RK_THREAD(func) RK_MODULE(threads, func); int func ## _thread_func(void* arg)
#line 18 "nio/simple_msg_client.h"
#define __RK_SMC_HANDLE_FUNC_DEF(name) RK_EXPORT int __ ## name ## _handle_func(const rk_smc_msg_t* resp)
#line 19 "nio/simple_msg_client.h"
#define RK_SMC(name) RK_EXPORT rk_smc_g_t* __ ## name ## _g; RK_CMD(name, "packet client"){ return rk_smc_minit(#name); } __RK_SMC_HANDLE_FUNC_DEF(name)
#line 1 "feature.h"
#define RK_STREAM_IO 1
#line 2 "feature.h"
#define RK_MSG_IO 2
#line 3 "feature.h"
#define RK_PACKET_IO 4
#line 12 "r0/log.h"
#define rk_log_macro(level, ...) if (LOG_LEVEL_ ## level <= rk_g_log_level)  rk_do_log(LOG_LEVEL_ ## level, __FILE__, __LINE__, __func__, ##__VA_ARGS__)
#line 13 "r0/log.h"
#define rk_error(...) rk_log_macro(ERROR, ##__VA_ARGS__)
#line 14 "r0/log.h"
#define rk_info(...) rk_log_macro(INFO, ##__VA_ARGS__)
#line 15 "r0/log.h"
#define rk_fatal(...) { rk_error(__VA_ARGS__); exit(1); }
#endif
