/* Chapter 8 Exercise 11 */

/* Write a program fragment that declares an 8 x 8 char array named
 * checker_board and then uses a loop to store the following data into the
 * array (one character per array element):
 *
 * B R B R B R B R
 * R B R B R B R B
 * B R B R B R B R
 * R B R B R B R B
 * B R B R B R B R
 * R B R B R B R B
 * B R B R B R B R
 * R B R B R B R B
 *
 * Hint: The element in row i, column j, should be the letter B if i + j is an
 * even number.
 */
 
#include <stdio.h>

int main(void)
{
  char checker_board[8][8];
  int row, col;

  for(row = 0; row < 8; row++){
    for(col = 0; col < 8; col++){
      checker_board[row][col] = (row + col) % 2 == 0 ? 'B' : 'R';
      printf(" %c ", checker_board[row][col]);
    }
    printf("\n");
  }
  return 0;
}
