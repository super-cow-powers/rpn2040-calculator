#ifndef STACK_MAN_H
#define STACK_MAN_H
#include "emu-conf.h"
#include <stdint.h>

struct calc_stack_S {
  double data[STACK_SIZE];
};

/** Init stack. Clear memory. */
int stackInit(struct calc_stack_S* stack);

/** Push value to stack. Values fall off of end. */
int stackPush(struct calc_stack_S* stack, double value);

/** Swap X and Y values */
int swapXY(struct calc_stack_S *stack);

/** Rolldown stack. X goes to the other end. */
int rolldown(struct calc_stack_S *stack);

#endif
