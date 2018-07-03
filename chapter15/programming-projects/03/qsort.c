/* Sorts an array of intergers use Quicksort algorithm */
#include <stdio.h>
#include "quicksort.h"

#define N 10

int main(void)
{
  int a[N], *ptr;

  printf("\nEnter %d numbers to be sorted: ", N);
  for (ptr = a; ptr < a + N; ptr++) {
    scanf("%d", ptr);
  }

  quicksort(a, 0, N-1);

  printf("In sorted order: ");
  for (ptr = a; ptr < a + N; ptr++) {
    printf("%d ", *ptr);
  }
  printf("\n");

  return 0;
}
