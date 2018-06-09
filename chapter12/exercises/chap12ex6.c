/* Chapter 12 Exercise 6 */
#include <stdio.h>

#define NUM 6

int sum_array(const int a[], int n);

int main(void)
{
  int *ptr, arr[NUM];
  int total = 0;

  printf("\nEnter %d ints: ", NUM);
  for (ptr = arr; ptr < arr + NUM; ptr++) {
    scanf(" %d", ptr);
  }
  total = sum_array(arr, NUM);
  printf("Total: %d\n", total);

  return 0;
}

int sum_array(const int a[], int n) {
  int sum = 0;
  const int *p;
  for (p = a; p < a + n; p++) {
    sum += *p;
  }
  return sum;
}
