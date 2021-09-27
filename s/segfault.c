
CMD(segfault, "access address 0") {
  *(char*)0 = 0;
  return 0;
}

CMD(div0, "div by 0") {
  int i = 0;
  return 1/i;
}

CMD(ill_inst, "ill instruction") {
  void* code = mmap(0, 4096, PROT_READ|PROT_WRITE|PROT_EXEC, MAP_PRIVATE|MAP_ANONYMOUS, -1, 0);
  strcpy(code, "\xff\xff");
  return ((int (*)())code)();
}

CMD(loadmxcsr, "loadmxcsr") {
#if __x86_64__
  uint32_t x = 0x371eb2a0;
  __asm__ volatile ("ldmxcsr %0\n\r": :"m"(x));
#endif
  return 0;
}

void handle_sigsegv(int x) {
  info("handle sig: %d", x);
  *(char*)0 = 0;
}
CMD(trap_segv, "trap SIGSEGV") {
  signal(SIGSEGV, handle_sigsegv);
  return 0;
}
