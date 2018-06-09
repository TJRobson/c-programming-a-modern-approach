/* Chapter 9 Exercise 3 */
/* Euclid's algorithim for computing the GCD
   See Project 2 Chapter 6 */
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
  int temp;
  while (n != 0) {
    temp = m % n;
    m = n; n = temp; 
  }
  return m;
}
