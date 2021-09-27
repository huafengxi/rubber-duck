#define __FEATURE__ ~0
#include "all.c"
#include STR(SRC)

#include <locale.h>
static CONSTRUCTOR void __set_local() { setlocale(LC_ALL, ""); }
static CONSTRUCTOR void __ignore_sigpipe() { signal(SIGPIPE, SIG_IGN); }

CMD(start, "start multiple cmd") {
  for(int i = 1; i < __argc; i++) {
    __do_cmd(__argv[i]);
  }
  return 0;
}

CMD(stat, "start stat reporter") {
  start_stat_report();
  return 0;
}

int main(int argc, const char** argv)
{
  int err = __handle_cmd(argc, argv);
  __wait_threads();
  return err;
}
