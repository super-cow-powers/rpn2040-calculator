#include "calc-stack.h"
#include "emu-conf.h"

int stackInit(struct calc_stack_S* stack) {
  for (unsigned int i = 0; i < STACK_SIZE; i++) {
    stack->data[i] = 0;
  }
  return 0;
}

int stackPush(struct calc_stack_S *stack, double value) {
  //Pushing overwrites the end value. This stack does not grow.
  for (unsigned int i = STACK_SIZE - 2; i >= 0; i--) {
    stack->data[i+1] = stack->data[i];
  }
  stack->data[0] = value;
  return 0;
}

int swapXY(struct calc_stack_S *stack) {
  double x = stack->data[0];
  stack->data[0] = stack->data[1];
  stack->data[1] = x;
  return 0;
}

int rolldown(struct calc_stack_S *stack) {
  //Rolldown should send x to the other end of the stack
  double x = stack->data[0];
  for (int i=0; i<STACK_SIZE-1; i++) {
    stack->data[i] = stack->data[i+1];
  }
  stack->data[STACK_SIZE-1] = x;
  return 0;
}
