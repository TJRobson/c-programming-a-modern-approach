#include <stdio.h>
#include <stdbool.h>
#include "stack.h"

int main(void)
{
  char ch;
  Item i;

  Stack s1 = create();
  Stack s2 = create();

  printf("Enter ints to push to stack 1: ");
  while ((ch = getchar()) != '\n') {
    scanf("%d", &i);
    push(s1, i);
  }

  printf("Enter ints to push to stack 2: ");
  while ((ch = getchar()) != '\n') {
    scanf("%d", &i);
    push(s2, i);
  }

  printf("Stack 1 popped: %d\n", pop(s1));
  printf("Stack 2 popped: %d\n", pop(s2));

  destroy(s1);
  destroy(s2);

  return 0;
}
