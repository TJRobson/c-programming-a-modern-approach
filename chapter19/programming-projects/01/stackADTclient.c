/* Chapter 19 Programming Project 1 */
/* from Chapter 10 Programming Project 1 */
/* From example in chapter 10.2 */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "stackADT.h"

static void not_matching(void);
static bool matching_symbol(Stack s, Item ch);

int main(void)
{
  Stack s = create();
  Item ch;

  printf("\nEnter parentheses and/or braces: ");
  while ((ch = getchar()) != '\n') {
    switch (ch) {
      case '(': push(s, ch); break;
      case '{': push(s, ch); break;
      case ')': if (matching_symbol(s, ch)) {
                  break;
                } else {
                  not_matching();
                  break;
                }
      case '}': if (matching_symbol(s, ch)) {
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

  if (is_empty(s)) {
    printf("Parentheses and/or braces nested properly\n");
  } else{
    not_matching();
  }

  destroy(s);

  return 0;
}

static void not_matching(void)
{
  printf("\nParentheses and/or braces not nested properly\n");
  exit(EXIT_FAILURE);
}

static bool matching_symbol(Stack s, Item ch)
{
  if (ch == ')') {
    return pop(s) == '(';
  }
  if (ch == '}') {
    return pop(s) == '{';
  }
  return false;
}
