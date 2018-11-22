#include <stdio.h>
#include <stdbool.h>
#include "stack.h"

int main(void)
{
  Item i;

  Stack s1 = create();
  Stack s2 = create();

  printf("\nEnter ints to push to stack 1: ");
  do {
    scanf("%d", &i);
    push(s1, i);
  } while (getchar() != '\n');

  printf("Enter ints to push to stack 2: ");
  do {
    scanf("%d", &i);
    push(s2, i);
  } while (getchar() != '\n');

  printf("Stack 1 popped: %d\n", pop(s1));
  printf("Stack 2 popped: %d\n", pop(s2));

  destroy(s1);
  destroy(s2);

  return 0;
}
