/* Chapter 12 Programming Project 7 */
/* maxmin.c from Section 11.4 with pointer */
#include <stdio.h>

#define N 10

void maxmin(int *a, int n, int *max, int *min);

int main(void)
{
  int b[N], *p, big, small;

  printf("\nEnter %d numbers: ", N);
  for (p = b; p < b + N; p++) {
    scanf("%d", p);
  }

  maxmin(b, N, &big, &small);

  printf("Largest: %d\n", big);
  printf("Smallest: %d\n", small);

  return 0;
}

void maxmin(int *a, int n, int *max, int *min)
{
  int *ptr;

  *max = *min = *a;
  for (ptr = a + 1; ptr < a + n; ptr++) {
    if (*ptr > *max) {
      *max = *ptr;
    } else if (*ptr < *min) {
      *min = *ptr;
    }
  }
}
