/* Chapter 7 Programming Project 15 */

#include <stdio.h>

int main(void)
{
    long double input, i, factorial = 1;

    printf("\nEnter a positive integer: ");
    scanf("%Lf", &input);

    for (i = 1; i <= input; i++) {
      factorial *= i;
    }

    printf("Factorial of %Lf: %Lf\n", input, factorial);

    return 0;
  }

 //  Answer:
 // (a) short - 7
 // (b) int - 12
 // (c) long - 20
 // (d) long long - 20
 // (e) float - 34
 // (f) double - 170
 // (g) long double - 174
