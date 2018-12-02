#include <stdio.h>
#include <string.h>
#include "stackADT3.h"

#define MAX_SENTENCE 250

void *token_stack_push(Stack s, char *message);

int main(void)
{
  char ch;
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

  char *message, *saveptr;
  printf("\nEnter a sentence to push  on to stack 2: ");
  fgets(message, MAX_SENTENCE, stdin);

  /* Remove the '\n' newline character from message. */
  message[strcspn(message, "\n")] = '\0';

  /*Brakes message into seperate words and pushes them onto stack 2. */
  char *word = strtok_r(message, " ", &saveptr);
  while (word != NULL) {
    push(s2, word);
    word = strtok_r(NULL, " ", &saveptr);
  }

  printf("\nLength of Stack 2: %d\n", length(s2));
  while (!is_empty(s2)) {
    printf("Stack 2 Popped: %s\n", (char *)pop(s2));
  }
  printf("Length of Stack 2: %d\n", length(s2));

  destroy(s2);

  return 0;
}

void *token_stack_push(Stack s, char *message)
{
  
}
