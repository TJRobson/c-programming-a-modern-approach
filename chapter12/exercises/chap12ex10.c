/* Chapter 12 Exercise 10 */
#include <stdio.h>

int *find_middle(int a[], int n);

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
  printf("Middle is: %d\n", *find_middle(arr, n));

  return 0;
}

int *find_middle(int a[], int n) {
  int *ptr = a;
  return ptr += (n / 2);
}
