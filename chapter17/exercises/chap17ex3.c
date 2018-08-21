/* Chapter 17 Exercise 3 */
#include <stdio.h>
#include <stdlib.h>

int *create_array(int n, int initial_value)
{
  int *new_array, *ptr;

  if ((new_array = malloc(n * sizeof(int))) == NULL) {
    return NULL;
  }

  for (ptr = new_array; ptr < new_array + n; ptr++) {
    *ptr = initial_value;
  }

  return new_array;
}

int main(void)
{
  int *arr = create_array(13, 9);
  int *ptr;

  printf("\n\t");

  for (ptr = arr; ptr < arr + 13; ptr++) {
    printf("%d ", *arr);
  }

  printf("\n");

  return 0;
}
