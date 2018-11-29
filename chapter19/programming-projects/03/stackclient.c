#include <stdio.h>
#include "stackADT3.h"

int main(void)
{
  char ch;
  Item i;

  Stack s1 = create();
  Stack s2 = create();

  printf("\nEnter ints to push to stack 1: ");
  do {
    scanf("%d", &i);
    push(s1, i);
  } while ((ch = getchar()) != '\n');

  printf("\nLength of Stack 1: %d\n", length(s1));
  printf("Stack 1 popped: %d\n", pop(s1));
  printf("Empty Stack 1.\n");
  make_empty(s1);
  printf("Length of Stack 1: %d\n", length(s1));
  destroy(s1);

  printf("\nEnter ints to push to stack 2: ");
  do {
    scanf("%d", &i);
    push(s2, i);
  } while ((ch = getchar()) != '\n');

  printf("\nLength of Stack 2: %d\n", length(s2));
  while (!is_empty(s2)) {
    printf("Popped %d from Stack 2:\n", pop(s2));
  }
  printf("Length of Stack 2: %d\n", length(s2));

  destroy(s2);

  return 0;
}
