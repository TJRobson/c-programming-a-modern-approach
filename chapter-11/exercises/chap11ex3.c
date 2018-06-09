/* Chapter 10 Exercise 3 */
#include <stdio.h>

#define SIZE 5

void avg_sum(double a[], int n, double *avg, double *sum) {
  int i;

  *sum = 0.0;
  for (i = 0; i < n; i++) {
    *sum += a[i];
  }
  *avg = *sum / n;
}

int main(void)
{
  int i;
  double a[SIZE];
  double avg, sum;

  printf("\nEnter %d numbers: ", SIZE);
  for (i = 0; i < SIZE; i++) {
    scanf(" %lf", &a[i]);
  }

  avg_sum(a, SIZE, &avg, &sum);
  printf("\nAverage is: %0.3lf\n", avg);

  return 0;
}
