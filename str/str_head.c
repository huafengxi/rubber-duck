const char* str_head(char* b, char sep, const char* s) {
  char* t = b;
  while(*s != sep && (*t++ = *s++))
    ;
  *t = 0;
  return b;
}
