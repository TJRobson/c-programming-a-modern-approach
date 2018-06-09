/* Chapter 13 Programming Project 18 */
#include <stdio.h>

int main(void)
{
  const char *months[12] = {"January", "February", "March",
                        "April", "May", "June",
                        "July", "August", "September",
                        "October", "November", "December"};

  int mm = 6, dd = 8, yyyy = 2018;

  printf("\nEnter a date (mm/dd/yyyy): ");
  scanf("%2d/%2d/%4d", &mm, &dd, &yyyy);

  printf("You entered the date %s %d, %d\n", *(months + (mm - 1)), dd, yyyy);

  return 0;
}
