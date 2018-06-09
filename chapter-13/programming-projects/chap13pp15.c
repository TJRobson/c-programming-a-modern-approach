/* Chapter 13 Programming Project 15 */
/* from Chapter 10 Programming Project 6 */
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
int evaluate_RPN_expression(const char *expression);

/* Stack functions */
int stack_overflow(void) {
  printf("\nExpression is too complex.\n");
  exit(EXIT_FAILURE);
}

void stack_underflow(void) {
  printf("\nNot enough operands in expressin.\n");
  exit(EXIT_FAILURE);
}

void make_empty(void)
{
    top = 0;
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
  char expression[40+1];

  for (;;) {
    make_empty();
    printf("\nEnter an RPN expression: ");
    fgets(expression, sizeof(expression), stdin);
    printf("Result: %d\n", evaluate_RPN_expression(expression));
  }

  return 0;
}

int evaluate_RPN_expression(const char *expression)
{
  const char *p;
  int op1, op2;

  for (p = expression; *p; p++) {
    if (*p >= '0' && *p <= '9') {
      push(*p - '0');
    } else {
      switch (*p) {
        case '+': op2 = pop(); op1 = pop();
                  push(op1 + op2); break;
        case '-': op2 = pop(); op1 = pop();
                  push(op1 - op2); break;
        case '*': op2 = pop(); op1 = pop();
                  push(op1 * op2); break;
        case '/': op2 = pop(); op1 = pop();
                  push(op1 / op2); break;
        case '=': return (pop());
        case ' ': break;
        default: exit(EXIT_FAILURE);
      }
    }
  }
}
