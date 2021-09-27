/*
  USECTION_DEF(cmd);
  USECTION(cmd) const char* var1 = "";
  USECTION(cmd) const char* var2 = "";
  for(const char* p = USECTION_BEGIN(name); p < USECTION_END(name); p++) {
  // do xxx
  }
# objdump -t foo
*/

#define USECTION_NAME(name) .u.name
#define USECTION_BEGIN(name) _ ## name ## _section_start
#define USECTION_END(name) _ ## name ## _section_end

#define USECTION_DEF(name) char USECTION_BEGIN(name), USECTION_END(name)
#define USECTION(name) __attribute__((used,section(".u." #name),aligned(1)))
#define USECTION_SIZE(name) ((char*)&USECTION_END(name) - (char*)&USECTION_BEGIN(name))
#define for_each_str_in_section(s, sec) for(const char* s = &USECTION_BEGIN(sec); s < &USECTION_END(sec); s = str_next(s))
