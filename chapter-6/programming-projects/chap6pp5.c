/* Chapter 6 Programming Project 5 */
#include <stdio.h>

int main(void)
{
  int n, i;

  printf("Enter a number: ");
  scanf("%d", &n);

  do {
    n /= 10;
    i++;
  } while(n > 0);

  printf("Your number has %d digits\n", i);

  return 0;
}
