/* Chapter 9 Exercise 2 */
#include <stdio.h>

int check(int x, int y, int n);

int main(void)
{
  int x, y , n;

  printf("\nEnter three ints (1 2 3): ");
  scanf("%d %d %d", &x, &y, &n);

  printf("%d\n", check(x, y, n));

  return 0;
}

int check(int x, int y, int n) {
  return (x > 0 && x < n) && (y > 0 && y < n);
}
