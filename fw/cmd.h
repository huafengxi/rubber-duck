#define CMD(name, doc) USECTION(cmd) const char __ ## name ## _cmd_desc[] = #name ": " doc;  EXPORT int __ ## name ## _cmd_func()

extern int __argc;
extern const char** __argv;
extern int __do_cmd(const char* name);
extern int __handle_cmd(int argc, const char** argv);
