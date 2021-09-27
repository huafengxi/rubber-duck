USECTION_DEF(module);
#define for_each_module(m) for_each_str_in_section(m, module)

static int __do_start_module(const char* name, const char* type) {
  int (*init)(const char* name) = (typeof(init))sym("%s%s_minit", STR(__ns_prefix__), type);
  check(init, "%s_minit not defined", type);
  info("start_module: %s.%s init=%p", name, type, init);
  return init(name);
}

int __start_module(const char* n) {
  int err = 0;
  for_each_module(m) {
    const char* name = m;
    const char* type = (m = str_next(m));
    if (strcmp(name, n)) {
      continue;
    }
    if(0 != (err = __do_start_module(name, type))) {
      error("start_module fail: %s err=%d", name, err);
      break;
    } else {
      info("start_module succ: %s", name);
    }
  }
  return err;
}

int __start_all_modules() {
  return __start_module("");
}
