/* Chapter 9 Exercise 16 */
/* Condense the 'fact' function */

// int fact(int n)
// {
//     if (n <= 1)
//         return 1;
//     else
//         return n * fact(n - 1);
// }

#include <stdio.h>

int fact(int n);

int main(void)
{
  int n;

  printf("\nEnter a positive number: ");
  scanf("%d", &n);
  printf("Factorial: %d\n", fact(n));

  return 0;
}

int fact(int n) {
  return n <= 1 ? 1 : n * fact(n - 1);
}
