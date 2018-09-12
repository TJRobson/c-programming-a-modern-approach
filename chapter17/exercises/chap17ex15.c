/* Chapter 17 Exercise 15 */
/* Show the output of the following program and explain what is does. */
#include <stdio.h>

int f1(int (*f) (int));
int f2(int i);

int main(void)
{
  printf("\nAnswer: %d\n", f1(f2));
}

int f1(int (*f) (int))
{
  int n = 0;

  while ((*f) (n)) {
    n++;
  }
  return n;
}

int f2(int i)
{
  return i * i + i - 12;
}

/* Answer:
 *
 *
*/
