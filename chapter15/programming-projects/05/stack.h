#ifndef STACK_H
#define STACK_H

/* Clears the stack */
void make_empty(void);

/* Returns bool, true if stack is empty */
bool is_empty(void);

/* Returns bool, true if stack is full */
bool is_full(void);

/* Pushes a int value onto the stack */
void push(int i);

/* Pops off the top value from the stack and returns it */
int pop(void);

#endif
