/* Chapter 12 Exercise 11 */
#include <stdio.h>

int *find_largest(int a[], int n);

int main(void)
{
  int n;

  printf("\nEnter a Nunber: ");
  scanf("%d", &n);

  int *p, arr[n];

  printf("\nEnter %d ints: ", n);
  for (p = arr; p < arr + n; p++) {
    scanf(" %d", p);
  }
  printf("Largest is: %d\n", *find_largest(arr, n));

  return 0;
}

int *find_largest(int a[], int n) {
  int *ptr, *biggest = a;

  for (ptr = a + 1; ptr < a + n; ptr++) {
    if (*biggest < *ptr) {
      biggest = ptr;
    }
  }
  return biggest;
}
