/* Chapter 10 Programming Project 7 */
#include <stdio.h>
#include <stdlib.h>

/* macros */
#define MAX_DIGITS 10
#define NUM_ROWS 4
#define NUM_COLS (4 * 10)
#define COLUMN (col % 4)
#define DIGIT_POS digits[row][col]

/* prototypes */
void clear_digits_array(void);
void process_digit(int digit, int position);
void print_digits_array(void);

/* external variables */
int segments[10][7] = {{1, 1, 1, 1, 1, 1, 0}, /* 0 */
                       {0, 1, 1, 0, 0, 0, 0}, /* 1 */
                       {1, 1, 0, 1, 1, 0, 1}, /* 2 */
                       {1, 1, 1, 1, 0, 0, 1}, /* 3 */
                       {0, 1, 1, 0, 0, 1, 1}, /* 4 */
                       {1, 0, 1, 1, 0, 1, 1}, /* 5 */
                       {1, 0, 1, 1, 1, 1, 1}, /* 6 */
                       {1, 1, 1, 0, 0, 0, 0}, /* 7 */
                       {1, 1, 1, 1, 1, 1, 1}, /* 8 */
                       {1, 1, 1, 1, 0, 1, 1}};/* 9 */

int digits[NUM_ROWS][NUM_COLS];

int main(void)
{
  int pos;
  char ch;

  clear_digits_array();

  printf("\nEnter a number (max = %d): ", MAX_DIGITS);

  for (pos = 0; (ch = getchar()) != '\n' && pos < MAX_DIGITS; pos++) {
    if (ch >= '0' && ch <= '9') {
      process_digit(ch - '0', pos);
    }
    else {
      pos--;
    }
  }
  print_digits_array();
  return 0;
}

void clear_digits_array(void) {
  int row, col;
  for (row = 0; row < NUM_ROWS; row++) {
    for (col = 0; col < MAX_DIGITS - 1; col++) {

    }
  }
}

void process_digit(int digit, int position) {
  int row, col, new_pos = position * 4;
  for(row = 0; row < NUM_ROWS; row++) {
      for (col = new_pos; col < new_pos + 4; col++) {
        switch (row) {
          case 0: switch (COLUMN) {
            case 0: DIGIT_POS = segments[digit][5]; break;
            case 1: DIGIT_POS = segments[digit][0]; break;
            case 2: DIGIT_POS = segments[digit][1]; break;
            case 3: DIGIT_POS = 0; break;
          } break;
          case 1: switch (COLUMN) {
            case 0: DIGIT_POS = segments[digit][5]; break;
            case 1: DIGIT_POS = segments[digit][6]; break;
            case 2: DIGIT_POS = segments[digit][1]; break;
            case 3: DIGIT_POS = 0; break;
          } break;
          case 2: switch (COLUMN) {
            case 0: DIGIT_POS = segments[digit][4]; break;
            case 1: DIGIT_POS = 0; break;
            case 2: DIGIT_POS = segments[digit][2]; break;
            case 3: DIGIT_POS = 0; break;
          } break;
          case 3: switch (COLUMN) {
            case 0: DIGIT_POS = segments[digit][4]; break;
            case 1: DIGIT_POS = segments[digit][3]; break;
            case 2: DIGIT_POS = segments[digit][2]; break;
            case 3: DIGIT_POS = 0; break;
          } break;
      }
    }
  }
}

void print_digits_array(void) {
  int col, row, state;

  printf("\n");
  /* prints the top portion of the digit */
  for (col = 0; col < NUM_COLS; col++) {
    if (COLUMN == 1) {
      state = digits[0][col];
      state == 1 ? printf("_") : printf(" ");
    } else {
      printf(" ");
    }
  }
  printf("\n");
  /* prints the rest (minus the top) */
  for (row = 0; row < NUM_ROWS; row++) {
    for(col = 0; col < NUM_COLS; col++) {
      state = DIGIT_POS;
      switch (state) {
        case 0: printf(" "); break;
        case 1: if (COLUMN == 1 && row != 0) {
                  printf("_"); break;
                } else if ( COLUMN != 1){
                  printf("|"); break;
                } else {
                  printf(" "); break;
                }
      }
    }
    printf("\n");
  }
}
