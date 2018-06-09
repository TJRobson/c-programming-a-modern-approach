/* Chapter 9 Exercise 17 */
/* fact function, without recursion */
#include <stdio.h>

int fact(int n);

int main(void)
{
  int n;

  printf("\nEnter a positive number: ");
  scanf("%d", &n);
  printf("Factioral: %d\n", fact(n));

  return 0;
}

int fact(int n) {
  int factorial = 1;
  for( ;n > 0; n--) {
    factorial *= n;
  }
  return factorial;
}
