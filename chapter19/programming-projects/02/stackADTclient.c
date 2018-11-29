/* Chapter 19 Programming Project 2 */
/* Chapter 10 Prgramming Project 6 */
/* Reverse Polish Notation Calculator */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "stackADT.h"

/* prototype */
static void eval_expression(Stack s, char ch);

int main(void)
{
  Stack s = create();
  char ch;

  printf("\nEnter an RPN expression: ");
  while ((ch = getchar())!= '\n') {
    eval_expression(s, ch);
  }

  return 0;
}

static void eval_expression(Stack s, char ch) {
  if (ch >= '0' && ch <= '9') {
    push(s, ch - '0');
  } else {
    Item op1, op2;
    switch (ch) {
      case '+': op2 = pop(s); op1 = pop(s);
                push(s, op1 + op2); break;
      case '-': op2 = pop(s); op1 = pop(s);
                push(s, op1 - op2); break;
      case '*': op2 = pop(s); op1 = pop(s);
                push(s, op1 * op2); break;
      case '/': op2 = pop(s); op1 = pop(s);
                push(s, op1 / op2); break;
      case '=': printf("\nValue of expression: %d\n", pop(s)); break;
      case ' ': break;
      default: printf("\nPlease enter numbers and operands.\n");
               exit(EXIT_FAILURE);
    }
  }
}
