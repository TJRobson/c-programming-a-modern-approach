/* Chapter 12 Exercise 14 */
/* Search fucntion from Ex.7 */
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

#define DAYS 7
#define HOURS 24

bool search(const int a[], int n, int key);

int main(void)
{
  int *ptr, days, key = 32;
  int temps[DAYS][HOURS];
  bool found = false;

  srand((unsigned) time(NULL));
  int temp = 23;
  /*Populate the array wtih random temps */
  for (ptr = &temps[0][0]; ptr <= &temps[DAYS-1][HOURS-1]; ptr++) {
    *ptr = temp + rand() % 10;
  }
  printf("\n");
  /* Search each row in Temps array */
  for (days = 0; days < DAYS; days++) {
    if (search(&temps[days][0], HOURS, key)) {
      printf("day: %d\n", days + 1);
      found = true;
      // break;
    }
  }

  printf("\n");
  int row, col;
  for (row = 0; row < DAYS; row++) {
    for (col = 0; col < HOURS; col++) {
      printf(" %d ", temps[row][col]);
    }
    printf("\n");
  }

  printf("\nSearch contains key: %d - %s\n", key, found ? "True":"False");

  return 0;
}

bool search(const int a[], int n, int key) {
  const int *p = a;

  while (p < a + n) {
    if (key == *p++) {
      int hr = (p - a);
      printf("hour: %d  ", hr);
      return true;
    }
  }
  return false;
}
