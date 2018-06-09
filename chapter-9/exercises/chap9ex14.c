/* Chapter 9 Exercise 14 */
#include <stdio.h>
#include <stdbool.h>

#define N 10

bool has_zero(int a[], int n);

int main(void)
{
  int a[N] = {4, 5, 13, 4, 6, 9, 0, 5, 55, 30}, /* Has Zero */
      b[N] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

  printf("\nArray 'a' Has Zero: %s", has_zero(a, N) ? "True" : "False");
  printf("\nArray 'b' Has Zero: %s\n", has_zero(b, N) ? "True" : "False");

  return 0;
}

bool has_zero(int a[], int n) {
  int i;
  for (i = 0; i < n; i++) {
    if (a[i] == 0) {
      return true;
    }
  }
  return false;
}
