/* Chapter 11 Programming Project 3 */
/* From Chapter 6 Programming Project 3 */
#include <stdio.h>

void reduce(int numerator, int denominator,
            int *reduced_numerator, int *reduced_denominator);

int main(void)
{
  int numer, denom, reduced_n, reduced_d;

  printf("\nEnter a fraction (a/b): ");
  scanf("%d/%d", &numer, &denom);

  reduce(numer, denom, &reduced_n, &reduced_d);
  printf("In lowest form: %d/%d\n", reduced_n, reduced_d);

  return 0;
}

void reduce(int numerator, int denominator,
            int *reduced_numerator, int *reduced_denominator)
{
  int rem;

  *reduced_numerator = numerator;
  *reduced_denominator = denominator;

  while (denominator != 0)
  {
    rem = numerator % denominator;
    numerator = denominator;
    denominator = rem;
  }
  *reduced_numerator /= numerator;
  *reduced_denominator /= numerator;
}
