/* Chapter 16 Programming Project 5 */
#include <stdio.h>
#include <stdlib.h>

#define HR 60
#define NUM_FLIGHTS (int) (sizeof(flight_times) / sizeof(flight_times[0]))

int main(void)
{
  const struct {
    int departure;
    int arrival;
  }  flight_times[] = {
    {8  * HR     , 10 * HR + 16},
    {9  * HR + 43, 11 * HR + 52},
    {11 * HR + 19, 13 * HR + 31},
    {12 * HR + 47, 15 * HR     },
    {14 * HR     , 16 * HR +  8},
    {15 * HR + 45, 17 * HR + 55},
    {19 * HR     , 21 * HR + 20},
    {21 * HR + 45, 23 * HR + 58},
  };

  int hour, minute, mins_since_midnight;
  printf("\nPlease enter a time(hh:mm): ");
  scanf("%2d:%2d", &hour, &minute);

  mins_since_midnight = (hour * 60) + minute;

  int p, c;
  for (p = 0, c = 1; c <= NUM_FLIGHTS; p++, c++) {
    if ((abs(mins_since_midnight - flight_times[c].departure) >=
        abs(mins_since_midnight - flight_times[p].departure))) {
         break;
       }
  }

  printf("Closest Departure Time: %.2d:%.2d\n"
         "Flight Arriving At:     %.2d:%.2d\n",
          flight_times[p].departure / HR, flight_times[p].departure % HR,
          flight_times[p].arrival / HR, flight_times[p].departure % HR);

  return 0;
}
