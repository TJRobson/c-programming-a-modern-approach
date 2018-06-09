/* Chapter 11 Exercise 8 */
#include <stdio.h>
#include <stdlib.h>

#define SIZE 6

int *find_largest(int a[], int n);

int main(void)
{
  int i, arr[SIZE];

  printf("\nEnter %d ints: ", SIZE);

  for (i = 0; i < SIZE; i++) {
    scanf(" %d", &arr[i]);
  }

  printf("The biggest is: %d\n", *find_largest(arr, SIZE));

  return 0;
}

int *find_largest(int a[], int n) {
  int i, biggest = 0;

  for (i = 1; i < n; i++) {
    if (a[biggest] < a[i]) {
      biggest = i;
    }
  }
  return &a[biggest];
}
