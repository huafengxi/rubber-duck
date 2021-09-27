SECTIONS {
.u.cmd : {
_cmd_section_start = .;
KEEP(*(.u.cmd));
_cmd_section_end = .;
}
.u.module : {
_module_section_start = .;
KEEP(*(.u.module));
_module_section_end = .;
}
.u.stat : {
_stat_section_start = .;
KEEP(*(.u.stat));
_stat_section_end = .;
}
.u.thread_setup : {
_thread_setup_section_start = .;
KEEP(*(.u.thread_setup));
_thread_setup_section_end = .;
}
}
INSERT BEFORE .bss;
