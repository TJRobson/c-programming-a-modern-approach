/* Chapter 11 Exercise 6 */
#include <stdio.h>

#define SIZE 10

void find_two_largest(int a[], int n, int *largest, int *second_largest) {
  int i;

  *largest = *second_largest = a[0];

  for (i = 1; i < n; i++) {
    if (a[i] > *largest) {
      *second_largest = *largest;
      *largest = a[i];
    } else if (a[i] < *largest && a[i] > *second_largest) {
      *second_largest = a[i];
    }
  }
}

int main(void)
{
  int i, largest, next_largest, arr[SIZE];

  printf("\nEnter %d ints: ", SIZE);
  for (i = 0; i < SIZE; i++) {
    scanf(" %d", &arr[i]);
  }

  find_two_largest(arr, i, &largest, &next_largest);
  printf("Largest: %d Second Largest: %d\n", largest, next_largest);

  return 0;
}
