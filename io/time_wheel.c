
static int64_t tw_align_time(int64_t us) { return us & ~(TIME_WHEEL_SLOT_INTERVAL - 1); }
static dlink_t* tw_get_slot(time_wheel_t* tw, int64_t us) { return tw->slot + (us/TIME_WHEEL_SLOT_INTERVAL) % TIME_WHEEL_SLOT_NUM; }
void tw_init(time_wheel_t* tw, timer_cb_t* cb) {
  for(int i = 0; i < TIME_WHEEL_SLOT_NUM; i++) {
    dlink_init(tw->slot + i);
  }
  tw->cb = cb;
  tw->finished_us = tw_align_time(get_corse_us());
}

static int64_t tw_get_expire_us(dlink_t* l) { return *(int64_t*)(l + 1); }
static void tw_fire(time_wheel_t* tw, dlink_t* l) { tw->cb(tw, l); }

static int tw_check_node(time_wheel_t* tw, dlink_t* l) {
  if (tw_get_expire_us(l) < tw->finished_us) {
    dlink_delete(l);
    tw_fire(tw, l);
    return ETIMEDOUT;
  }
  return 0;
}

int tw_regist(time_wheel_t* tw, dlink_t* l) {
  dlink_insert(tw_get_slot(tw, tw_get_expire_us(l)), l);
  return tw_check_node(tw, l);
}

static void tw_sweep_slot(time_wheel_t* tw) {
  dlink_t* slot = tw_get_slot(tw, tw->finished_us - TIME_WHEEL_SLOT_INTERVAL);
  dlink_for(slot, p) {
    tw_check_node(tw, p);
  }
}

void tw_check(time_wheel_t* tw) {
  int64_t cur_us = get_corse_us();
  while(tw->finished_us < cur_us) {
    tw->finished_us += TIME_WHEEL_SLOT_INTERVAL;
    tw_sweep_slot(tw);}
}

static int timerfd_handle_tw(timerfd_t* s) {
  time_wheel_t* tw = (time_wheel_t*)(s + 1);
  tw_check(tw);
  evfd_drain(s->fd);
  return EAGAIN;
}

int timerfd_init_tw(eloop_t* ep, timerfd_t* s) {
  int err = 0;
  ef(err = timerfd_init(ep, s, (handle_event_t)timerfd_handle_tw));
  ef(err = timerfd_set_interval(s, TIME_WHEEL_SLOT_INTERVAL));
  el();
  return err;
}
