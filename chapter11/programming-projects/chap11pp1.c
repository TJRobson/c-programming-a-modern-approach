/* Chapter 11 Programming Project 1 */
/* From Chapter 2 Programming Project 7 */
#include <stdio.h>

void pay_ammount(int dollars, int *twenties, int *tens, int *fives, int *ones);

int main(void)
{
  int dollars, twenties, tens, fives, ones;

  printf("\nEnter a dollar ammount: ");
  scanf("%d", &dollars);

  pay_ammount(dollars, &twenties, &tens, &fives, &ones);
  printf("%dx $20 bills\t%dx $10 bills\t%dx $5 bills\t%dx $1 bills\n",
          twenties, tens, fives, ones);

  return 0;
}

void pay_ammount(int dollars, int *twenties, int *tens, int *fives, int *ones) {
  *twenties = dollars / 20;  dollars %= 20;
  *tens     = dollars / 10;  dollars %= 10;
  *fives    = dollars / 5;   *ones = dollars % 5;
}
