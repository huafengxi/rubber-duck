
#define COUNTER(name) __ ## name ## _pc
#define COUNTER_DEF(name) EXPORT __thread int64_t COUNTER(name)
#define COUNTER_ADD(name, x) COUNTER(name) += x

typedef struct stat_reg_t {
  const char* name;
  uint64_t off;
  int64_t last;
  int diff;
} stat_reg_t;
#define STAT_DEF(stat_name, show_diff) COUNTER_DEF(stat_name); USECTION(stat) stat_reg_t __ ## stat_name ## _stat_reg = {.name=#stat_name, .off=0, .last=0, .diff=show_diff};

extern int64_t* get_pc(const char* name);
extern void start_stat_report();
