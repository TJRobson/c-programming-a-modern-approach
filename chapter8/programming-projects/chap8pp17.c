/* Chapter 8 Programming Project 17 */
/* Magic Number Square */
#include <stdio.h>

#define N_SQR size * size
#define EMPTY 0
#define NXT_ROW ((row % size) + size) % size
#define NXT_COL col % size
#define INPUT_CHECK (size < 1 || size > 99 || size % 2 == 0)

int main(void)
{
  int i, size, row, col;

  printf("\nThis program creates a magic square of a specific size.\n"
          "The size must be an odd number between 1 and 99.\n"
          "Enter size of magic square: ");
  scanf("%d", &size);

  if(INPUT_CHECK) {
    printf("\nSize must be odd and between 1 and 99.\n");
    return 0;
  }

  int magic_sqr[size][size];

  for (row = 0; row < size; row++) {
    for (col = 0; col < size ;col++) {
      magic_sqr[row][col] = 0;
    }
  }
  printf("\n");

  for(i = 1, row = 0, col = size / 2; i <= N_SQR; row--, col++, i++) {
    if (magic_sqr[NXT_ROW][NXT_COL] != EMPTY) {
      row += 2; col -= 1;
      magic_sqr[NXT_ROW][NXT_COL] = i;
    } else {
      magic_sqr[NXT_ROW][NXT_COL] = i;
    }
  }

  for (row = 0; row < size; row++) {
    for (col = 0; col < size ;col++) {
      printf("_");
      printf("%3d |", magic_sqr[row][col]);
      printf("_");
    }
    printf("\n");
  }
  printf("\n");

  return 0;
}
