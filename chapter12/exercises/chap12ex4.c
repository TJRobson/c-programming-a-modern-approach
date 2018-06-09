/* Chapter 12 Exercise 4 */
#include <stdbool.h>

#define STACK_SIZE 100

/* External variables */
int contents[STACK_SIZE];
int *top_ptr = &contents[0];

void make_empty(void) {
  *top_ptr = &contents[0]
}

bool is_empty(void) {
  return *top_ptr == &contents[0];
}

bool is_full(void) {
  return *top_ptr == &contents[STACK_SIZE];
}

void push(int i) {
  if (is_full()) {
    // stack_overflow();
    printf("\nStack Overflow\n");
  } else {
    *top_ptr++ = i;
  }
}

int pop(void) {
  if (is_empty()) {
    // stack_underflow();
    printf("\nStack Underflow\n");
  } else {
    return *--top_ptr;
  }
}
