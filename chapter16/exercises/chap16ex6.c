/* Chapter 16 Exercise 6 */
#include <stdio.h>

struct time {
  int hours;
  int minutes;
  int seconds;
};

struct time split_time(long total_seconds);

int main(void)
{
  long total_secs = 0;

  printf("\nEnter a number of seconds since midnight: ");
  scanf("%ld", &total_secs);

  struct time t = split_time(total_secs);

  printf("Hours: %d | Minutes: %d | Seconds: %d\n",
                    t.hours, t.minutes, t.seconds);

  return 0;
}

struct time split_time(long total_seconds)
{
  struct time t;

  t.hours = total_seconds / 3600;
  t.minutes = ((total_seconds % 3600) / 60);
  t.seconds = ((total_seconds % 3600) % 60);

  return t;
}
