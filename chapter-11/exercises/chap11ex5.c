/* Chapter 11 Exercise 5 */
#include <stdio.h>
#include <stdlib.h>

#define MAX_SECS 86399

void split_time(long total_sec, int *hr, int *min, int *sec) {
  *hr = total_sec / 3600;
  total_sec %=  3600;
  *min = total_sec / 60;
  *sec = total_sec % 60;
}

int main(void)
{
  long total_seconds;
  int hours, minutes, seconds;

  printf("\nEnter number of seconds since midnight: ");
  scanf("%ld", &total_seconds);

  if (total_seconds > MAX_SECS) {
    printf("Too many seconds.\n");
    exit(EXIT_FAILURE);
  }

  split_time(total_seconds, &hours, &minutes, &seconds);
  printf("Hours: %d Minutes: %d Seconds: %d\n", hours, minutes, seconds);

  return 0;
}
