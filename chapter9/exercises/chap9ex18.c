/* Chapter 9 Exercise 18 */
/* GCD func with recursion */
#include <stdio.h>

int gcd(int m, int n);

int main(void)
{
  int m, n;

  printf("\nGCD - Enter two intergers: ");
  scanf("%d %d", &m, &n);
  printf("Greatest common divisor of %d and %d is: %d\n", m, n, gcd(m, n));

  return 0;
}

int gcd(int m, int n) {
  return n == 0 ? m : gcd(n, m % n);
}

// int gcd(int m, int n) {
//   int temp;
//   while (n != 0) {
//     temp = m % n;
//     m = n; n = temp;
//   }
//   return m;
// }
