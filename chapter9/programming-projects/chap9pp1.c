/* Chapter 9 Programming Project 1 */
#include <stdio.h>
#include <ctype.h>

#define LAST_INDEX (n - 1)
#define NUM 8

void selection_sort(int a[], int n);

int main(void)
{
  int i, n = NUM, a[n];

  printf("\nEnter %d ints: ", n);
  for (i = 0; i < n; i++) {
    scanf(" %d", &a[i]);
  }

  selection_sort(a, n);

  printf("Sorted Array: ");
  for (i = 0; i < n; i++) {
    printf("%d ", a[i]);
  }
  printf("\n");

  return 0;
}

void selection_sort(int a[], int n) {
  if (n == 0) { return ; }

  int i, big_i = 0;
  for( i = 1; i <= LAST_INDEX; i++) {
    if (a[i] > a[big_i]) { big_i = i; }
  }
  int big = a[big_i];
  a[big_i] = a[LAST_INDEX];
  a[LAST_INDEX] = big;

  selection_sort(a, n-1);
}
