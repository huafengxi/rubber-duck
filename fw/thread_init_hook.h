#define THREAD_SETUP(func) static void __thread_setup_ ## func(); USECTION(thread_setup) void* __thread_setup_ ## func ## _ptr = (void*)__thread_setup_ ## func; static void __thread_setup_ ## func()
