/* Chapter 17 Exercise 8 */
/* Stack from 15.2 */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct node {
  int value;
  struct node *next;
};

struct node *top = NULL;

void make_empty(void);
int is_empty(void);
bool push(int i);
int pop(void);


int main(void)
{
  int i, user_input;

  printf("\n");
  for (i = 0; i <= 5; i++) {
    printf("Enter an int to push onto stack: ");
    scanf("%d", &user_input);
    push(user_input);
  }

  printf("Popped top int: %d\n", pop());

  make_empty();
  printf("Is empty? %s\n", is_empty() ? "True":"False");

  return 0;
}

void make_empty(void)
{
  struct node *next_node;

  while (top) {
    next_node = top->next;
    free(top);
    top = next_node;
  }
}

int is_empty(void)
{
  return top == NULL;
}

bool push(int i)
{
  struct node *next_node = malloc(sizeof(struct node));

  if (next_node == NULL) {
    printf("\nError: malloc failed in 'push'\n");
    return false;
  }

  next_node->value = i;
  next_node->next = top;
  top = next_node;

  return true;
}

int pop(void)
{
  if (is_empty()) {
    printf("\nError: Stack Underflow.\n");
    exit(EXIT_FAILURE);
  }

  struct node *new_top = top->next;
  int val = top->value;
  free(top);
  top = new_top;

  return val;
}
