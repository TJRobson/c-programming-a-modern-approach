/* Chapter 10 Prgramming Project 6 */
/* Reverse Polish Notation Calculator */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define STACK_SIZE 50
/* Global variables */
int expression[STACK_SIZE];
int top = 0;

/* prototype */
void eval_expression(char ch);

/* Stack functions */
int stack_overflow(void) {
  printf("\nExpression is too complex.\n");
  exit(EXIT_FAILURE);
}

void stack_underflow(void) {
  printf("\nNot enough operands in expressin.\n");
  exit(EXIT_FAILURE);
}

bool is_empty(void) {
  return top == 0;
}

bool is_full(void) {
  return top == STACK_SIZE;
}

void push(int ch) {
  if (is_full()) {
    stack_overflow();
  } else {
    expression[top++] = ch;
  }
}

int pop(void) {
  if (is_empty()) {
    stack_underflow();
  } else {
    return expression[--top];
  }
}

int main(void)
{
  char ch;

  printf("\nEnter an RPN expression: ");
  while ((ch = getchar())!= '\n') {
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
