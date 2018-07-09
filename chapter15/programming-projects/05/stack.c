#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "stack.h"

#define STACK_SIZE 50

// int stack_overflow(void);
// int stack_underflow(void);

/* Global variables */
int expression[STACK_SIZE];
int top = 0;

int stack_overflow(void) {
  printf("\nExpression is too complex.\n");
  exit(EXIT_FAILURE);
}

void stack_underflow(void) {
  printf("\nNot enough operands in expressin.\n");
  exit(EXIT_FAILURE);
}

void make_empty(void)
{
    top = 0;
}

bool is_empty(void) {
  return top == 0;
}

bool is_full(void) {
  return top == STACK_SIZE;
}

void push(int i) {
  if (is_full()) {
    stack_overflow();
  } else {
    expression[top++] = i;
  }
}

int pop(void) {
  if (is_empty()) {
    stack_underflow();
  } else {
    return expression[--top];
  }
}
