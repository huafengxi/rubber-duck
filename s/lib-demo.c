#include "../all.h"
#include "../ns.h"

RK_CMD(hello, "say hello") {
  rk_info("hello from rk_cmd");
  return 0;
}

int main(int argc, const char** argv)
{
  int err = __rk_handle_cmd(argc, argv);
  return err;
}

