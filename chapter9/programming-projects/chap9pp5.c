/* Chapter 9 Programming Project 5 */

/* Chapter 8 Programming Project 17 With
   create_magic_square func &
   print_magic_square func.
*/
#include <stdio.h>

#define N_SQR n * n
#define EMPTY 0
#define NXT_ROW ((row % n) + n) % n
#define NXT_COL col % n
#define INPUT_CHECK (size < 1 || size > 99 || size % 2 == 0)

void create_magic_square(int n, char magic_square[n][n]);
void print_magic_square(int n, char magic_square[n][n]);

int main(void)
{
  int size;

  printf("\nThis program creates a magic square of a specific size.\n"
          "The size must be an odd number between 1 and 99.\n"
          "Enter size of magic square: ");
  scanf("%d", &size);

  if(INPUT_CHECK) {
    printf("\nSize must be odd and between 1 and 99.\n");
    return 0;
  }

  char magic_sqr[size][size];

  create_magic_square(size, magic_sqr);
  print_magic_square(size, magic_sqr);

  printf("\n");

  return 0;
}

void create_magic_square(int n, char magic_square[n][n]) {
  int i, row, col;
  /* Zero out magic_square array */
  for (row = 0; row < n; row++) {
    for (col = 0; col < n; col++) {
      magic_square[row][col] = 0;
    }
  }
  /* Populates the magic_square array with numbers from 1 to n^2 */
  for(i = 1, row = 0, col = n / 2; i <= N_SQR; row--, col++, i++) {
    if (magic_square[NXT_ROW][NXT_COL] != EMPTY) {   /* See marcos */
      row += 2; col -= 1;
      magic_square[NXT_ROW][NXT_COL] = i;
    } else {
      magic_square[NXT_ROW][NXT_COL] = i;
    }
  }
}

void print_magic_square(int n, char magic_square[n][n]) {
  int row, col;
  for (row = 0; row < n; row++) {
    for (col = 0; col < n; col++) {
      printf("_");
      printf("%3d |", magic_square[row][col]);
      printf("_");
    }
    printf("\n");
  }
}
