/* Chapter 7 Programming Project */
#include <stdio.h>

int main(void)
{
  double n, sum = 0.0;

  printf("This program sums a series of double floats.\n");
  printf("Enter integers (0 to terminate): \n");

  scanf("%lf", &n);
  while (n != 0)
  {
      sum += n;
      scanf("%lf", &n);
  }
  printf("The sum is: %lf\n", sum);

  return 0;
}
