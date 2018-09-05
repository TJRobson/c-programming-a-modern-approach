/* Chapter 17 Exercise 8 */
/* Stack from 15.2 */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct node {
  int value;
  struct *node next;
};

struct node *top = NULL;

void make_empty(void);
int is_empty(void);
bool push(int i);
int pop(void);


int main(void)
{
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
