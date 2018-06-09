/* Chapter 6 Programming Project - Greater Common Divisor */
#include <stdio.h>

int main(void)
{
  int m, n, r;
  printf("\nEnter two integers (ab xy): ");
  scanf("%d %d", &m, &n);

  while (n != 0) {
    r = m % n;
    m = n; n = r;
  }

  printf("Greatest common divisor : %d\n", m);

  return 0;
}
