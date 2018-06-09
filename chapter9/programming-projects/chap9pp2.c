/* Chapter 9 Programming Project 2 */
/* Chapter 5 Programming Project 5 - done with function */
#include <stdio.h>

float tax_payable(float income);

int main()
{
  float income;

  printf("\nEnter amount of taxable income: $");
  scanf("%f", &income);

  printf("Tax due: $%.2f\n", tax_payable(income));

  return 0;
}

float tax_payable(float income) {
  float tax = 0;
  return  income <= 750.00  ? tax = 0.01 * income
        : income <= 2250.00 ? tax = (income - 750)  * .02f + 7.5f
        : income <= 3750.00 ? tax = (income - 2250) * .03f + 37.5f
        : income <= 5250.00 ? tax = (income - 3750) * .04f + 82.5f
        : income <= 7000.00 ? tax = (income - 5250) * .05f + 142.5f
        : income > 7000.00  ? tax  = (income - 7000) * .06f + 230.0f
        : tax;
}
