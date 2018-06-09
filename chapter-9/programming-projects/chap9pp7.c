/* Chapter 9 Programming Project 7 */
/* Faster power function */
#include <stdio.h>

int faster_pow(int x, int n);

int main(void)
{
  int x, n;

  printf("\nEnter a base int and the exponent (x x): ");
  scanf("%d %d", &x, &n);
  printf("%d to the power of %d: %d\n", x, n, faster_pow(x, n));

  return 0;
}

int faster_pow(int x, int n) {
  if (n == 0) {
    return 1;
  } else if (n % 2 == 0) {
    return faster_pow(x, n /2) * faster_pow(x, n/2);
  } else {
    return x * faster_pow(x, n - 1);
  }
}
