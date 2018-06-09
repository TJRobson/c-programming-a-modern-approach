/* chapter 6 Programming Project 8 */
#include <stdio.h>

int main(void)
{
  int days_in_month, start_day, i;

  printf("\nEnter number of days in month: ");
  scanf("%d", &days_in_month);

  printf("\nEnter starting day of the week (1=Sun, 7=Sat): ");
  scanf("%d", &start_day);

  for (i = 1; i < start_day; i++)
    printf("   ");

  for (i = 1;i <= days_in_month; i++)
  {
    printf("%3d", i);

    if ((start_day + i - 1) % 7 == 0)
      printf("\n");
  }
  printf("\n");

  return 0;
}
