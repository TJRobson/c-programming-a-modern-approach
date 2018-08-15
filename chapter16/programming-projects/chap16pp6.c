/* Chapter 16 Programming Project 6 */
#include <stdio.h>
#include <stdbool.h>

#define EARLIER -1
#define SAME 0
#define LATER 1

struct date {
  int month;
  int day;
  int year;
};

bool leap_year(int year);
int day_of_year(struct date d);
int compare_dates(struct date d1, struct date d2);

int main(void)
{
  struct date date_one, date_two;

  printf("\nEnter first date (mm/dd/yy): ");
  scanf("%d/%d/%d", &date_one.month, &date_one.day, &date_one.year);
  printf("Enter second date (mm/dd/yy): ");
  scanf("%d/%d/%d", &date_two.month, &date_two.day, &date_two.year);

  switch (compare_dates(date_one, date_two)) {
    case EARLIER: printf("%d/%d/%d is earlier than %d/%d/%d\n",
                  date_one.month, date_one.day, date_one.year,
                  date_two.month, date_two.day, date_two.year);
                  break;
    case SAME:    printf("%d/%d/%d is the same as %d/%d/%d\n",
                  date_one.month, date_one.day, date_one.year,
                  date_two.month, date_two.day, date_two.year);
                  break;
    case LATER:   printf("%d/%d/%d is earlier than %d/%d/%d\n",
                  date_two.month, date_two.day, date_two.year,
                  date_one.month, date_one.day, date_one.year);
                  break;

  }
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
