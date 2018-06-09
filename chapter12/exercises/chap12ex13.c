/* Chapter 12 Exercise 13 */
/* Re-worked example from 8.2 */
#include <stdio.h>

#define N 10

int main(void)
{
  double *ptr, indent[N][N];
  int count = N - 1;

  for (ptr = &indent[0][0]; ptr < &indent[N-1][N-1]; ptr++) {
    if (count == N - 1) {
      *ptr = 1.0;
      count = 0;
    } else {
      *ptr = 0.0;
      count++;
    }
  }
  printf("\n");
  int row, col;
  for (row = 0; row < N; row++) {
    for (col = 0; col < N; col++) {
      printf("%0.0f ", indent[row][col]);
    }
    printf("\n");
  }

  return 0;
}
