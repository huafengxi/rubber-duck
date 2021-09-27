extern inline void counter_add(counter_t* counter, int64_t x);
extern inline int64_t counter_fetch(counter_t* counter);
extern inline void __counter_report(const char* msg, counter_t* cnt);
