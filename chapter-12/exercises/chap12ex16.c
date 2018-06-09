/* Chapter 12 Exercise 16 */
/* Uses find_largest func from Ex.11 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define DAYS 7
#define HOURS 24

int *find_largest(int a[], int n);

int main(void)
{
  int *ptr, day, *day_hi, *wk_hi;
  int temps[DAYS][HOURS];

  srand((unsigned) time(NULL));
  int t_one = 0, t_two = 0;
  /*Populate the array wtih random temps */
  for (ptr = &temps[0][0]; ptr <= &temps[DAYS-1][HOURS-1]; ptr++) {
    t_one = rand() % 99;
    t_two = rand() % 99;
    *ptr = t_one + t_two;
  }
  printf("\n");
  wk_hi = &temps[0][0];
  for (day = 0; day < DAYS; day++) {
     day_hi = find_largest(temps[day], HOURS);
     printf("Day %d high: %d\n", day + 1, *day_hi);
    if (*wk_hi < *day_hi) {
      wk_hi = day_hi;
    }
  }

  printf("\nWeek high: %d\n", *wk_hi);

  return 0;
}

int *find_largest(int a[], int n) {
  int *ptr, *biggest = a;

  for (ptr = a + 1; ptr < a + n; ptr++) {
    if (*biggest < *ptr) {
      biggest = ptr;
    }
  }
  return biggest;
}
