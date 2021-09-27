int __argc;
const char** __argv;
USECTION_DEF(cmd);
#define for_each_cmd(c) for_each_str_in_section(c, cmd)
static const char* __find_cmd(const char* name) {
  for_each_cmd(c) {
    if (str_match(name, ':', c)) {
      return c;
    }
  }
  return NULL;
}

static int __help() {
  fprintf(stderr, "Usage:\n");
  for_each_cmd(c) {
    fprintf(stderr, "\t %s\n", c);
  }
  fprintf(stderr, "\n");
  return -EINVAL;
}

int __do_cmd(const char* name) {
  int (*func)() = (typeof(func))sym_vital("__%s_cmd_func", name);
  return func();
}

static int __try_do_cmd(const char* cmd) {
  int err = 0;
  if (!__find_cmd(cmd)) {
    info("cmd not defined: %s", cmd);
    err = __help();
  } else {
    err = __do_cmd(cmd);
  }
  return err;
}

int __handle_cmd(int argc, const char** argv) {
  int err = 0;
  if (1 == argc) {
    err = __help();
  } else {
    __argc = argc - 1;
    __argv = argv + 1;
    err = __try_do_cmd(argv[1]);
  }
  return err;
}
