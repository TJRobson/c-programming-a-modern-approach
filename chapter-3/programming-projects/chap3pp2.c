/* Chapter 3 Programming Project 2 */
#include <stdio.h>

int main(void)
{
  int item, month, day, year;
  float price;

  printf("Enter a item number: ");
  scanf("%d", &item);

  printf("Enter a unit price: ");
  scanf("%f", &price);

  printf("Enter a purchase date (mm/dd/yyyy): ");
  scanf("%d/%d/%d", &month, &day, &year);

  printf("Item\tUnit\tPurchase\n\tPrice\tDate\n%d\t$%6.2f\t%d/%d/%d", item, price, month, day, year);

  return 0;
}
