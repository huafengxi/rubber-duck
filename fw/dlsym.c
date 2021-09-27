void* self_handle;
CONSTRUCTOR void __open_self_dlhandle() { self_handle = dlopen(NULL, RTLD_LAZY); }

void* sym(const char *f, ...) {
  char buf[MAX_SYM_SIZE];
  va_list ap;
  va_start(ap, f);
  vsnprintf(buf, sizeof(buf), f, ap);
  va_end(ap);
  return dlsym(self_handle, buf);
}

void* sym_vital(const char* f, ...) {
  char buf[MAX_SYM_SIZE];
  va_list ap;
  va_start(ap, f);
  vsnprintf(buf, sizeof(buf), f, ap);
  va_end(ap);
  void* p = dlsym(self_handle, buf);
  check(p, "sym %s not defined", buf);
  return p;
}

const char* addr2sym(void* addr) {
  Dl_info info;
  dladdr(addr, &info);
  return info.dli_sname;
}
