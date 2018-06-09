/* Chapter 8 Exercise 9 */

/* Using the array of Exercise 8, write a program fragment that computes the
 * average temperature for a month (averaged over all the days of the month and
 * all hours of the day).
 */

#include <stdio.h>

int main(void)
{
  int day, hour, temperature_readings[30][24];
  float day_ave[30], month_ave;

  for(day = 0; day < 30; day++) {
    int temp;
    for(hour = 0; hour < 24; hour++){
      temp += temperature_readings[day][hour];
    }
    day_ave[day] = temp / 24;
  }

  for(day = 0; day < 30; day++){
    month_ave += day_ave[day];
  }

  month_ave /= 30;

  printf("Average temperature over month: %.0f", month_ave);

  return 0;
}
