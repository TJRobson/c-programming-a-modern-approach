/* from Chapter 10 Prgramming Project 6 */
/* Reverse Polish Notation Calculator */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "stack.h"

/* prototype */
void eval_expression(char ch);

int main(void)
{
  char ch;
  
  printf("\nEnter an RPN expression: ");
  while ((ch = getchar())!= '\n' && ch != EOF) {
    eval_expression(ch);
  }

  return 0;
}

void eval_expression(char ch) {
  if (ch >= '0' && ch <= '9') {
    push(ch - '0');
  } else {
    int op1, op2;
    switch (ch) {
      case '+': op2 = pop(); op1 = pop();
                push(op1 + op2); break;
      case '-': op2 = pop(); op1 = pop();
                push(op1 - op2); break;
      case '*': op2 = pop(); op1 = pop();
                push(op1 * op2); break;
      case '/': op2 = pop(); op1 = pop();
                push(op1 / op2); break;
      case '=': printf("\nValue of expression: %d\n", pop()); break;
      case ' ': break;
      default: printf("\nPlease enter numbers and operands.\n");
               exit(EXIT_FAILURE);
    }
  }
}
