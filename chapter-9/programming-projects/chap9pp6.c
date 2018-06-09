/* Chapter 9 Programming Project 6 */
#include <stdio.h>

#define SQR x * x
#define CB x * x * x
#define FOUR x * x * x * x
#define FIVE x * x * x * x * x

double exercise_poly(double x); /* = 3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6 */

int main(void)
{
  double x = 0;

  printf("\nEnter a value for x: ");
  scanf("%lf", &x);
  printf("Result: %.3lf\n", exercise_poly(x));

  return 0;
}

double exercise_poly(double x) {
  return 3*FIVE + 2*FOUR - 5*CB - SQR + 7*x - 6;
}
