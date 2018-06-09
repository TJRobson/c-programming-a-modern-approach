/* Chapter 6 Programming Project 1 */

#include <stdio.h>

int main(void)
{
  float input, high;

  do {
    printf("\nEnter a number: ");
    scanf("%f", &input);
    if (input > high ) high = input;
  } while(input > 0);

  printf("\nThe largest number entered was: %f\n", high);

  return 0;
}
