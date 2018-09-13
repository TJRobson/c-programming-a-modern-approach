/* Chapter 17 Exercise 17 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int comparison(const void *i, const void *j);

int main(void)
{
  int a[100], i;
  srand(time(NULL));

  printf("\nUnsorted Array:\n");
  for (i = 0; i < 100; i++) {
    if (i % 10 == 0) {
      printf("\n");
    }
    a[i] = rand() % 100 + 1;
    printf("%4d ", a[i]);
  }
  printf("\n\n");

  qsort(a + (sizeof(a) / sizeof(a[0])) - 50, 50, sizeof(int), comparison);

  printf("Sorted second half of a:\n");
  for (i = 0; i < 100; i++) {
    if (i % 10 == 0) {
      printf("\n");
    }
    printf("%4d ", a[i]);
  }
  printf("\n");

  return 0;
}

int comparison(const void *i, const void *j)
{
    return *((int *)i) - *((int *)j);
}
