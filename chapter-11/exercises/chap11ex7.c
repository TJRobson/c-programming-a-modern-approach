/* Chapter 11 Exercise 7 */
#include <stdio.h>

#define MONTHS 12

void split_date(int day_of_year, int year, int *month, int *day);

int main(void)
{
  int day_of_yr, yr, mth, day;

  printf("\nEnter a day of the year: ");
  scanf("%d", &day_of_yr);
  printf("Enter the year: ");
  scanf("%d", &yr);

  split_date(day_of_yr, yr, &mth, &day);

  printf("Day: %d of Month: %d.\n", day, mth);

  return 0;
}

void split_date(int day_of_year, int year, int *month, int *day) {
  int i, days = 0;
                       /* J   F   M   A   M   J */
  int num_of_days[12] = {31, 28, 31, 30, 31, 30,
                      /*  J   A   S   O   N   D */
                         31, 31, 30, 31, 30, 31};
 /* Check for leap year */
  if (year % 4 == 0) {
    if (year % 100 == 0) {
      if (year % 400 == 0) {
        num_of_days[1]++;
      }
    } else {
      num_of_days[1]++;
    }
  }
  for (i = 0; i < MONTHS; i++) {
    if (day_of_year > days) {
      if ((days + num_of_days[i]) >= day_of_year) {
        break;
      } else {
        days += num_of_days[i];
      }
    }
  }
  *month = i + 1;
  *day = day_of_year - days;
}
