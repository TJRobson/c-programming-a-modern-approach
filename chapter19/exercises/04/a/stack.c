#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "stack.h"

#define STACK_SIZE 100

struct stack_type {
  Item contents[STACK_SIZE];
  int top;
};

static void terminate(const char *message)
{
  printf("\n%s\n", message);
  exit(EXIT_FAILURE);
}

Stack create(void)
{
  Stack s = malloc(sizeof(struct stack_type));
  if (s == NULL) {
    terminate("Error in create: stack could not be created.");
  }
  s->top = 0;
  return s;
}

void destroy(Stack s)
{
  free(s);
}
void make_empty(Stack s)
{
  s->top = 0l
}

bool is_empty(const Stack s)
{
  return s->top == 0;
}

bool is_full(const Stack s)
{
  return s->top == STACK_SIZE;
}

void push(Stack s, Item i)
{
  if (is_full()) {
    terminate("Error is push: stack overflow.");
  }
  s->contents[s->top++] = i;
}

Item pop(Stack s)
{
  if (is_empty()) {
    terminate("Error is pop: stack underflow.");
  }
  return s->conetents[--s->top];
}
