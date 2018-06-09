/* Chapter 9 Exercise 6 */
/* Takes a number e.g 829
   the second is the position from the right
   e.g 1 would be the 9.
*/
#include <stdio.h>

int digit(int n, int k);
int num_digits(int n);

int main(void)
{
  int n, k, n_ds;

  printf("\nEnter two positive numbers (x y): ");
  scanf("%d %d", &n, &k);

  n_ds = num_digits(n);

  if (n >= 0 && k > 0 && n_ds >= k) {
    printf(": %d\n", digit(n, k));
  } else {
    printf(": %d\n", 0);
  }
  return 0;
}

int digit(int n, int k) {
  for (k-- ;k > 0; k--) {
    n /= 10;
  }
  return n % 10;
}

int num_digits(int n) {
  int i = 0;
  do {
    n /= 10;
    i++;
  } while(n != 0);
  return i;
}
