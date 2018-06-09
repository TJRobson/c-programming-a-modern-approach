/* Chapter 8 Programming Project 8 */
#include <stdio.h>

int main(void)
{
  int i, j, total_grade, low = 0, high = 0,
      total, i_arr[5][5];

  for(i = 0; i < 5; i++){
    printf("Enter student %d's grades (x5): ", i+1);
    scanf("%d %d %d %d %d", &i_arr[i][0], &i_arr[i][1],
              &i_arr[i][2], &i_arr[i][3], &i_arr[i][4]);
  }
  printf("\n");

  for(i = 0; i < 5; i++){
    total_grade = 0;
    for(j = 0; j < 5; j++){
      total_grade += i_arr[i][j];
    }
    low == 0 ? low = total_grade: low;
    total_grade < low ? low = total_grade : low;
    total_grade > high ? high = total_grade : high;

    total += total_grade;
    printf("Student %d | Total Score: %d | Adverage Score: %0.2f\n"
          , i+1, total_grade, (float) total_grade / 5);
  }

  printf("\nAverage Quiz Score: %0.2f | ", (float) total / 5);
  printf("Highest Quiz Score: %d | ", high);
  printf("Lowest Quiz Score: %d\n", low);

  return 0;
}
