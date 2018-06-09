/* Chapter 9 Exercise 7 */
#include <stdio.h>

int f(int a, int b);

int main(void)
{
  int i, x;

  i = f(83, 12);
  printf("\n%d\n", i);
  x = f(83, 12);
  printf("%d\n", x);
  i = f(3.15, 9.28);
  printf("%d\n", i);
  x = f(3.15, 9.28);
  printf("%d\n", x);
  f(83, 12);

  return 0;
}

int f(int a, int b) {
  return a + b;
}
