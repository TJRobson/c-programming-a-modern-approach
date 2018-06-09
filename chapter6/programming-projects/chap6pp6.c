/* Chapter 6 Programming Project 6 */
#include <stdio.h>

int main(void)
{
  int input, i;

  printf("\nEnter limit on maximum square: ");
  scanf("%d", &input);

  for (i = 2; i * i <= input; i += 2) {
    printf("%d\n", i * i);
  }

  return 0;
}
