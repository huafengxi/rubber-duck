void multi_cond_init(multi_cond_t* mc)
{
  mc->wait = 0;
  mc->wakeup = 0;
  memset(mc->seq, 0, sizeof(mc->seq));
}

extern int32_t* multi_cond_alloc(multi_cond_t* mc);
extern void multi_cond_signal(multi_cond_t* mc);
