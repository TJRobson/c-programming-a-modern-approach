/* Chapter 5 Programming Project 4 */

#include <stdio.h>

int main(void)
{
  int knots;

  printf("Enter wind speed in knots: ");
  scanf("%d", &knots);

  knots >= 64 ? printf("Hurricane")
    : knots >= 48 ? printf("Storm")
    : knots >= 28 ? printf("Gale")
    : knots >= 4 ? printf("Breeze")
    : knots >= 1 ? printf("Light air")
    : knots >= 0 ? printf("calm")
    : printf("Please enter pos numbers");

  printf("\n");

  return 0;
}
