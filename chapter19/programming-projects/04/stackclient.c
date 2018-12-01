#include <stdio.h>
#include <string.h>
#include "stackADT3.h"

#define MAX_SENTENCE 250

int main(void)
{
  char ch, *message;
  int i;

  Stack s1 = create();
  Stack s2 = create();


  printf("\nEnter ints to push on to stack 1: ");
  do {
    scanf("%d", &i);
    push(s1, &i);
  } while ((ch = getchar()) != '\n');

  printf("\nLength of Stack 1: %d\n", length(s1));
  printf("Stack 1 popped: %d\n", *(int *)pop(s1));
  printf("Empty Stack 1.\n");
  make_empty(s1);
  printf("Length of Stack 1: %d\n", length(s1));
  destroy(s1);

  printf("\nEnter a sentence to push  on to stack 2: ");
  fgets(message, MAX_SENTENCE, stdin);
  char *word = strtok(message, " ");
  while (word != NULL) {
    push(s2, word);
    word = strtok(NULL, " ");
  }

  printf("\nLength of Stack 2: %d\n", length(s2));
  while (!is_empty(s2)) {
    printf("Stack 2 Popped: %s\n", (char *)pop(s2));
  }
  printf("Length of Stack 2: %d\n", length(s2));

  destroy(s2);



  return 0;
}
