/* Chapter 10 Programming Project 1 */
/* From example in chapter 10.2 */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define STACK_SIZE 100
/* External Variables */
char contents[STACK_SIZE];
int top = 0;

void not_matching(void) {
  printf("Parentheses and/or braces not nested properly\n");
  exit(EXIT_FAILURE);
}

int stack_overflow(void) {
  printf("\nStack Overflow.\n");
  exit(EXIT_FAILURE);
}

void stack_underflow(void) {
  printf("\nStack Underflow.\n");
  not_matching();
}

bool is_empty(void) {
  return top == 0;
}

bool is_full(void) {
  return top == STACK_SIZE;
}

void push(char ch) {
  if (is_full()) {
    stack_overflow();
  } else {
    contents[top++] = ch;
  }
}

char pop(void) {
  if (is_empty()) {
    stack_underflow();
  } else {
    return contents[--top];
  }
}

bool matching_symbol(char ch){
  if (ch == ')') {
    return pop() == '(';
  }
  if (ch == '}') {
    return pop() == '{';
  }
  return false;
}

int main(void)
{
  char ch;

  printf("\nEnter parentheses and/or braces: ");

  while ((ch = getchar()) != '\n') {
    switch (ch) {
      case '(': push(ch); break;
      case '{': push(ch); break;
      case ')': if (matching_symbol(ch)) {
                  break;
                } else {
                  not_matching();
                  break;
                }
      case '}': if (matching_symbol(ch)) {
                  break;
                } else {
                  not_matching();
                  break;
                }
      case ' ': break;
      default: printf("Only parentheses and/or braces.\n");
               exit(EXIT_FAILURE);
    }
  }

  if (is_empty()) {
    printf("Parentheses and/or braces nested properly\n");
  } else{
    not_matching();
  }

  return 0;
}
