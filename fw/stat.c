USECTION_DEF(stat);
int64_t* get_pc(const char* name) {
  return (int64_t*)sym("__%s_pc", name);
}

static int stat_count() { return USECTION_SIZE(stat)/sizeof(stat_reg_t); }
static int64_t stat_get(stat_reg_t* st) {
  int64_t cur = tls_sumo(st->off?: (st->off = tls_co(get_pc(st->name))));
  int64_t report = 0;
  if (st->diff) {
    report = cur - st->last;
  } else {
    report = cur;
  }
  st->last = cur;
  return report;
}

static void stat_format(format_t* f, stat_reg_t* st) {
  int64_t report = stat_get(st);
  if (report > 0) {
    format_append(f, "%s:%'8ld ", st->name, report);
  }
}

static const char* stat_format_all(format_t* f, stat_reg_t* st, int count) {
  for(int i = 0; i < count; i++) {
    stat_format(f, st + i);
  }
  return format_gets(f);
}

void mod_report(format_t* f);

static int __stat_thread_func(void* args) {
  unused(args);
  int count = stat_count();
  format_t stat_format = {sizeof(stat_format.buf), 0, ""};
  while(1) {
    usleep(1000 * 1000);
    format_reset(&stat_format);
    const char* report = stat_format_all(&stat_format, (stat_reg_t*)&USECTION_BEGIN(stat), count);
    mod_report(&stat_format);
    info("STAT: %s", report);
  }
  return 0;
}

void start_stat_report() {
  __start_thread_group(1, __stat_thread_func, NULL);
}
