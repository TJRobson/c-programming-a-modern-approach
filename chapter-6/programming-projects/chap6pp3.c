/* Chapter 6 Programming Project 3 */
#include <stdio.h>

int main(void)
{
  int m, n, r, numer, denom;
  printf("\nEnter a fraction (a/b): ");
  scanf("%d/%d", &numer, &denom);

  m = numer; n = denom;

  while (n != 0) {
    r = m % n;
    m = n; n = r;
  }

  numer /= m; denom /= m;

  printf("In lowest form: %d/%d\n", numer, denom);

  return 0;
}
