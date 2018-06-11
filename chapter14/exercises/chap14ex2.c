/* Chapter 14 Exercise 2 */
#include <stdio.h>

#define NELEMS(a) ((unsigned int) sizeof(a) / sizeof(a[0]))

int main(void)
{
  double a[139] = {0};

  printf("\nNumber of elements in array a: %ld\n", NELEMS(a));

  return 0;
}
