/* Chapter 8 Programming Project 10 */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define F1 8*60     /* 8.00am */
#define F2 9*60+43  /* 9.43am */
#define F3 11*60+12 /* 11.19am */
#define F4 12*60+47 /* 12.47pm */
#define F5 14*60    /* 2.00pm */
#define F6 15*60+45 /* 3.45pm */
#define F7 19*60    /* 7.00pm */
#define F8 21*60+45 /* 9.45pm */
#define A1 10*60+16 /* 10:16am */
#define A2 11*60+52 /* 11:52am */
#define A3 13*60+31 /* 1:31pm */
#define A4 15*60    /* 3.00pm */
#define A5 16*60+8  /* 4.08pm */
#define A6 17*60+55 /* 5.55pm */
#define A7 21*60+20 /* 9.20pm */
#define A8 23*60+58 /* 11.58pm */

#define MAX_DAY 24*60 /* Maximum minutes in a day */
#define FLIGHTS ((int) (sizeof(departure_times) / sizeof(departure_times[0])))

int main(void)
{
  int i, hrs, mins, mins_since_midnight,
      time_diff, smallest_diff, closest_time = 0,
      departure_times[8] = {F1, F2, F3, F4, F5, F6, F7, F8},
      arrival_times[8] = {A1, A2, A3, A4, A5, A6, A7, A8};

  bool depart = false;

  printf("\nEnter a 24-hour time (hrs:mins): ");
  scanf("%d:%d", &hrs, &mins);

  mins_since_midnight = hrs * 60 + mins;

  if (mins_since_midnight > (MAX_DAY) || mins_since_midnight < 0) {
    printf("\nEntered invalid time.\n");
  } else {
    smallest_diff = MAX_DAY;
    depart = true;
    for (i = 0; i < FLIGHTS; i++) {
      time_diff = abs(mins_since_midnight - departure_times[i]);
      if (time_diff < smallest_diff) {
        smallest_diff = time_diff; closest_time = i;
      } else {
        break;
      }
    }
  }

  if (depart) {
    printf("\nClosest departure time is ");
    printf("%d:%d", departure_times[closest_time] / 60,
                      departure_times[closest_time] % 60);
    departure_times[closest_time] % 60 == 0 ? printf("%d %s, ", 0,
                                              closest_time < 3 ? "a.m":"p.m")
                                            : printf(" %s, ",
                                              closest_time < 3 ? "a.m":"p.m");
    printf("arriving at ");
    printf("%d:%d", arrival_times[closest_time] / 60,
                    arrival_times[closest_time] % 60);
    arrival_times[closest_time] % 60 == 0 ? printf("%d %s\n", 0,
                                              closest_time < 2 ? "a.m":"p.m")
                                            : printf(" %s\n",
                                              closest_time < 2 ? "a.m":"p.m");

  }

  return 0;
}
