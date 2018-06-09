/* Chapter 5 Programming Project 5 */
#include <stdio.h>

int main(void)
{

  float income, tax;

  printf("Enter amount of taxable income: ");
  scanf("%f", &income);

  income <= 750 ? tax = 0.01 * income
                : income <= 2250.00 ? tax = (income - 750)  * .02f + 7.5f
                : income <= 3750.00 ? tax = (income - 2250) * .03f + 37.5f
                : income <= 5250.00 ? tax = (income - 3750) * .04f + 82.5f
                : income <= 7000.00 ? tax = (income - 5250) * .05f + 142.5f
                : income > 7000.00 ? tax  = (income - 7000) * .06f + 230.0f
                : printf("you're a c\n");

  printf("Tax due: $%.2f\n", tax);

  return 0;
}
