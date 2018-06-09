/* Chapter 12 Exercise 15 */
/* Search fucntion from Ex.7 and 14 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define DAYS 7
#define HOURS 24

int main(void)
{
  int *ptr, day, temp, *hr;
  int temps[DAYS][HOURS];

  srand((unsigned) time(NULL));
  temp = 24;
  /*Populate the array wtih random temps */
  for (ptr = &temps[0][0]; ptr <= &temps[DAYS-1][HOURS-1]; ptr++) {
    *ptr = temp + rand() % 10;
  }

  day = rand() % DAYS;
  printf("\nTemperature for day %d: ", day);

  for (hr = temps[day-1]; hr < temps[day-1] + HOURS; hr++) {
    printf("%d ", *hr);
  }
  printf("\n");


  return 0;
}
