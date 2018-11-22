#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "stack.h"

struct node {
  Item data;
  struct node *next;
};

struct stack_type {
  struct node *top;
};

static void terminate(const char *message)
{
  printf("\n%s\n", message);
  exit(EXIT_FAILURE);
}

Stack create(void)
{
  Stack s;
  if ((s = malloc(sizeof(struct stack_type))) == NULL) {
    terminate("Error in create: stack could not be created.");
  }
  s->top = NULL;
  return s;
}

void destroy(Stack s)
{
  make_empty(s);
  free(s);
}
void make_empty(Stack s)
{
  while (!is_empty(s)) {
    pop(s);
  }
}

bool is_empty(const Stack s)
{
  return s->top == NULL;
}

bool is_full(const Stack s)
{
  return false;
}

void push(Stack s, Item i)
{
  if (is_full(s)) {
    terminate("Error is push: stack overflow.");
  }

  struct node *new_node;
  if ((new_node = malloc(sizeof(struct node))) == NULL) {
    terminate("Error in Push: failure to push item.");
  }
  new_node->data = i;
  new_node->next = s->top;
  s->top = new_node;
}

Item pop(Stack s)
{
  if (is_empty(s)) {
    terminate("Error is pop: stack underflow.");
  }

  struct node *old_top;

  Item i = s->top->data;
  old_top = s->top;
  s->top = old_top->next;
  free(old_top);

  return i;
}
