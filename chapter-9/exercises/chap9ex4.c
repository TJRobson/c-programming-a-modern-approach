/* Chapter 9 Exercise 4 */
/* Returns the day of the year between 1 - 366 */
#include <stdio.h>
#include <stdbool.h>

int day_of_year(int m, int d, int y);
bool is_leap_year(int y);

int main(void)
{
  int month, day, year;

  printf("\nEnter a Date (mm dd yyyy): ");
  scanf("%d %d %d", &month, &day, &year);
  printf("It was day: %d of: %d\n", day_of_year(month, day, year),
                                    is_leap_year(year) ? 366 : 365);

  return 0;
}

int day_of_year(int month, int day, int year) {
  int month_lens[12] = {31, 28, 31, 30, 31, 30,
                     /* J   F   M   A   M   J */
                        31, 31, 30, 31, 30, 31};
                     /* J   A   S   O   N   D */
  if (is_leap_year(year)) {
    month_lens[1]++;
  }
  if (month > 1) {
    for (month = month - 1; month > 0; month--) {
      day += month_lens[month-1];
    }
  }
  return day;
}

bool is_leap_year(int y) {
  if (y % 4 != 0 ) {
    return false;
  } else if (y % 100 != 0) {
    return true;
  } else if (y % 400 != 0) {
    return false;
  } else {
    return true;
  }
}
