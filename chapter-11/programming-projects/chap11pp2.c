/* Chapter 11 Programming Project 2 */
/* From Chapter 5 Programming Project 8 */
#include <stdio.h>
#include <stdlib.h>

/* Arrival and departure time macros */
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
#define FLIGHTS 8

/* Global variables */
int departure_times[FLIGHTS] = {F1, F2, F3, F4, F5, F6, F7, F8};
int arrival_times[FLIGHTS] = {A1, A2, A3, A4, A5, A6, A7, A8};

/* Prototypes */
void closest_flight(int desired_time,
                    int *departure_time,
                    int *arrival_time);

void print_times(int depart, int arrival);

int main(void)
{
  int hrs, mins, mins_since_midnight,
      arrival = 0, departure = 0;

  printf("\nEnter a 24-hour time (hrs:mins): ");
  scanf("%d:%d", &hrs, &mins);

  mins_since_midnight = hrs * 60 + mins;

  closest_flight(mins_since_midnight, &arrival, &departure);

  if (departure) {
    print_times(arrival, departure);
  }

  return 0;

}

void closest_flight(int desired_time, int *departure_time, int *arrival_time)
{
  if (desired_time > (MAX_DAY) || desired_time < 0)
  {
    printf("\nEntered invalid time.\n");
  }
  else
  {
    int i, time_diff, smallest_diff;
    smallest_diff = MAX_DAY;

    for (i = 0; i < FLIGHTS; i++) {
      time_diff = abs(desired_time - departure_times[i]);
      if (time_diff < smallest_diff)
      {
        smallest_diff = time_diff;
        *departure_time = departure_times[i];
        *arrival_time = arrival_times[i];
      }
      else
      {
        break;
      }
    }
  }
}

void print_times(int depart, int arrival)
{
  printf("\nClosest departure time is ");
  printf("%d:%d", depart / 60,
                  depart % 60);
  depart % 60 == 0 ? printf("%d %s, ", 0,
                       depart < F3 ? "a.m":"p.m")
                     : printf(" %s, ",
                       depart < F3 ? "a.m":"p.m");
  printf("arriving at ");
  printf("%d:%d", arrival / 60,
                  arrival % 60);
  arrival % 60 == 0 ? printf("%d %s\n", 0,
                      arrival < A2 ? "a.m":"p.m")
                    : printf(" %s\n",
                      arrival < A2 ? "a.m":"p.m");
}
