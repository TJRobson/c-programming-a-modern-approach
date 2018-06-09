/* Chapter 9 Exercise 5 */
/* Counts how many digits are in a positive Int */
#include <stdio.h>

int num_digits(int n);

int main(void)
{
  int number, n_digits;

  printf("\nEnter a positive number: ");
  scanf("%d", &number);

  if (number >= 0) {
    n_digits = num_digits(number);
    printf("%d has: %d digit%s\n", number,
                                   n_digits,
                                   n_digits == 1 ? "" : "s");
    return 0;
  } else {
    printf("Number not positive.\n");
    return 0;
  }
}

int num_digits(int n) {
  int i = 0;
  do {
    n /= 10;
    i++;
  } while(n != 0);
  return i;
}
