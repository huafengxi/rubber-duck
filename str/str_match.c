int str_match(const char* p, char end, const char* s) {
  while(*p && *p++ == *s++)
    ;
  return 0 == *p && *s == end;
}
