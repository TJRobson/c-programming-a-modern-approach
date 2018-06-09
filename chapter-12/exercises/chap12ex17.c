/* Chapter 12 Exercise 17 */
#include <stdio.h>

#define ROWS 5
#define COLS 3

int sum_two_dimensional_array(const int *a, int n);

int main(void)
{
  int total = 0;
  int arr[ROWS][COLS] = {{4, 8, 3},
                         {9, 0, 3},
                         {1, 1, 1},
                         {5, 2, 9},
                         {6, 6, 6}};

  total = sum_two_dimensional_array(arr[0], ROWS * COLS);
  printf("\nSum of array: %d\n", total);

  return 0;
}

int sum_two_dimensional_array(const int *a, int n) {
  const int *ptr;
  int sum = 0;

  for (ptr = a; ptr < a + n; ptr++) {
    sum += *ptr;
  }
  return sum;
}
