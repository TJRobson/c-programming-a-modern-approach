/* Chapter 16 Exercise 5 */
#include <stdio.h>

struct date {
  int month;
  int day;
  int year;
};

int day_of_year(struct date d);

int compare_dates(struct date d1, struct date d2);

int main(void)
{

  return 0
}

int day_of_year(struct date d)
{
                       /* Jan Feb Mar Apr May Jun */
  const int months[12] = {31, 28, 31, 30, 31, 30,
                       /* Jul Aug Sep Oct Nov Dec */
                          31, 31, 30, 31, 30, 30}
  int i, day = d.day;

  /* Tests if year is leap year */
  if(d.year % 4 == 0) {
    if(d.year % 100 == 0) {
      if(d.year % 400 == 0) {
        /* is leap year */
        months[1]++;
      }
    } else {
      /*is leap year */
      months[1]++;
    }
  }

  for(i = 0; i < d.month; i++) {
    day += months[i];
  }

}
