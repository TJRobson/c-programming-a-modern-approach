/* Chapter 16 Exercise 5 */
#include <stdio.h>
#include <stdbool.h>

struct date {
  int month;
  int day;
  int year;
};

int day_of_year(struct date d);
bool leap_year(int year);
int compare_dates(struct date d1, struct date d2);

int main(void)
{
  struct date d1, d2;

  printf("\nEnter a date one (mm/dd/yyyy): ");
  scanf("%2d/%2d/%4d", &d1.month, &d1.day, &d1.year);

  printf("Enter a date two (mm/dd/yyyy): ");
  scanf("%2d/%2d/%4d", &d2.month, &d2.day, &d2.year);

  printf("Date one compared with Date two: %d\n",
                           compare_dates(d1, d2));

  return 0;
}

bool leap_year(int year)
{
  if(year % 4 == 0 && year % 100 != 0) {
    return true;
  } else if (year % 400 == 0) {
    return true;
  }
  return false;
}

int day_of_year(struct date d)
{
                /* Jan Feb Mar Apr May Jun */
  int months[12] = {31, 28, 31, 30, 31, 30,
                /* Jul Aug Sep Oct Nov Dec */
                    31, 31, 30, 31, 30, 30};
  int i, day = d.day;

  if (leap_year(d.year)) {
    months[1]++;
  }

  for(i = 0; i < d.month - 1; i++) {
    day += months[i];
  }

  return day;
}

int compare_dates(struct date d1, struct date d2)
{
  int d1_day = day_of_year(d1);
  int d2_day = day_of_year(d2);

  if (d1_day < d2_day) {
    return -1;
  } else if (d1_day > d2_day) {
    return 1;
  } else {
    return 0;
  }
}
