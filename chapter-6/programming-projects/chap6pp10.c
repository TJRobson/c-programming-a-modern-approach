/* chapter 6 Programming Project 10 */
#include <stdio.h>

int main(void)
{

  int month, day, year, e_mn = 0, e_day = 0, e_yr = 0;

  do {
    printf("Enter a date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month, &day, &year);

    if (e_mn == 0 && e_day == 0 && e_yr == 0){
      e_yr = year; e_mn = month; e_day = day;
    }
    if ( month != 0 && day != 0 && year != 0) {
      if ( year > e_yr) {
        continue;
      } else if ( year < e_yr) {
        e_yr = year; e_mn = month; e_day = day;
      } else {
        if(month < e_mn) {
          e_yr = year; e_mn = month; e_day = day;
        } else if (month == e_mn) {
          if (day < e_day) {
             e_yr = year; e_mn = month; e_day = day;
           }
        }
      }
    }
  } while(month != 0 && day != 0 && year != 0);

  printf("\n%d/%d/%d is the earliest date\n", e_mn, e_day, e_yr);

  return 0;
}
