#ifndef EMU_CORE_H
#define EMU_CORE_H
#include "calc-stack.h"
#include "emu-conf.h"
#include <stddef.h>
#include <stdint.h>

enum trig_mode_E {
  TRIG_RADS = 0,
  TRIG_GRADS,
  TRIG_DEGS = 2
};

enum prog_mode_E {
  PROG_AUTO = 0,
  PROG_MAN = 1
};

struct calc_mode_S {
  enum trig_mode_E trig_mode;
  enum prog_mode_E prog_mode;
};

struct calc_core_S {
  struct calc_mode_S mode;
  uint32_t prog_counter;
  struct calc_stack_S stack;
  double regs[REGISTER_NUM];
};

int machineReset(void);

#endif
