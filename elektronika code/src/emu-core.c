#include "emu-core.h"
#include "calc-stack.h"
#include "emu-conf.h"
#include <stddef.h>
#include <stdint.h>

struct calc_core_S core_state;

int machineReset() {
  //Reset the stack
  stackInit(&(core_state.stack));
  //Reset the registers
  for (unsigned int i = 0; i < REGISTER_NUM; i++) {
    core_state.regs[i] = 0;
  }
  core_state.mode.prog_mode = PROG_AUTO; //"Auto" mode on reset
  
  return 0;
}
