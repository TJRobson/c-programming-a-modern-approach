/* Chapter 9 Exercise 15 */
#include <stdio.h>

double median(double x, double y, double z);

int main(void)
{
  double x, y, z;

  printf("\nEnter Three Doubles (x y z): ");
  scanf("%lf %lf %lf", &x, &y, &z);
  printf("The median is: %.3lf\n", median(x, y, z));

  return 0;
}

double median(double x, double y, double z) {
  double median = z;

  if ((x <= y && y <= z) || (z <= y && y <= x)) {
    median = y;
  }
  else if ((y <= x && x <= z) || (z <= x && x <= y)) {
    median = x;
  }
  return median;
}
