/* Chapter 8 Programming Project 9 */
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <time.h>

#define LEN ((int) (sizeof(alpha) / sizeof(alpha[0])))
#define NUM_ROWS 10
#define NUM_COLS 10
#define EMPTY '.'

#define LEFT 0
#define UP 1
#define RIGHT 2
#define DOWN 3

#define BLOCKED (blocked[LEFT] && blocked[UP] && blocked[RIGHT] && blocked[DOWN])

int main(void)
{
  int i, row, col, dir;
  char ten_by_ten[NUM_ROWS][NUM_COLS];
  const char alpha[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H',
                          'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P',
                          'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X',
                          'Y', 'Z'};
  bool blocked[4] = {false};

  srand((unsigned) time(NULL));

  for (row = 0; row < NUM_ROWS; row++) {
    for(col = 0; col < NUM_COLS; col++) {
      ten_by_ten[row][col] = '.';
    }
  }
  row = 0; col = 0;
  ten_by_ten[row][col] = alpha[0];

  for (i = 1; i < LEN; i++) {
    if ( BLOCKED ) { break; }
    while (!BLOCKED) {
      dir = rand() % 4;
      switch (dir) {
        case LEFT:
            if (col - 1 >= 0 && ten_by_ten[row][col-1] == EMPTY) {
              col--; break;
            } else {
              blocked[LEFT] = true; continue;
            }
        case   UP:
            if (row - 1 >= 0 && ten_by_ten[row-1][col] == EMPTY) {
              row--; break;
            } else {
              blocked[UP] = true; continue;
            }
        case RIGHT:
            if (col + 1 < NUM_COLS && ten_by_ten[row][col+1] == EMPTY) {
              col++; break;
            } else {
              blocked[RIGHT] = true; continue;
            }
        case DOWN:
            if (row + 1 < NUM_ROWS && ten_by_ten[row+1][col] == EMPTY) {
              row++; break;
            } else {
              blocked[DOWN] = true; continue;
            }
      }
      blocked[0] = false; blocked[1] = false;
      blocked[2] = false; blocked[3] = false;
      break;
    }
    if (!BLOCKED) { ten_by_ten[row][col] = alpha[i]; }
  }
  printf("\n");
  for (row = 0; row < NUM_ROWS; row++) {
    for (col = 0; col < NUM_COLS; col++) {
      printf(" %c ", ten_by_ten[row][col]);
    }
    printf("\n");
  }
  return 0;
}
