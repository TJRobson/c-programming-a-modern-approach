/* Chapter 8 Programming Project 7 */
#include <stdio.h>

int main(void)
{
  int i, j, row, col, i_arr[5][5];

  for(i = 0; i < 5; i++){
    printf("Enter row %d: ", i+1);
    scanf("%d %d %d %d %d", &i_arr[i][0], &i_arr[i][1],
              &i_arr[i][2], &i_arr[i][3], &i_arr[i][4]);
  }

  printf("\nRow totals: ");
  for(i = 0; i < 5; i++){
    row = 0;
    for(j = 0; j < 5; j++){
      row += i_arr[i][j];
    }
    printf("%d ", row);
  }

  printf("\nColumn totals: ");
  for(j = 0; j < 5; j++){
    col = 0;
    for(i = 0; i < 5; i++){
      col += i_arr[i][j];
    }
    printf("%d ", col);
  }

  printf("\n");

  return 0;
}
