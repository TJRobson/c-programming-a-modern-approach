/* Chapter 11 Exercise 4 */
#include <stdio.h>

void swap(int *p, int *q) {
  int temp = *q;
  *q = *p;
  *p = temp;
}

int main(void)
{
  int i, j;

  printf("\nEnter two ints (i j): ");
  scanf("%d %d", &i, &j);

  swap(&i, &j);

  printf("Swapped ints: %d %d\n", i, j);

  return 0;
}
