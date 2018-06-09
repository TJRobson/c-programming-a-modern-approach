/* Chapter 12 Exercise 9 */
#include <stdio.h>

#define NUM 5

double inner_product(const double *a, const double *b, int n);

int main(void)
{
  double *a, *b, arr_a[NUM], arr_b[NUM];

  printf("\nEnter %d numbers: ", NUM);
  for (a = arr_a; a < arr_a + NUM; a++) {
    scanf(" %lf", a);
  }
  printf("\nEnter %d numbers: ", NUM);
  for (b = arr_b; b < arr_b + NUM; b++) {
    scanf(" %lf", b);
  }

  printf("Inner Product: %0.3lf\n", inner_product(arr_a, arr_b, NUM));

  return 0;
}

double inner_product(const double *a, const double *b, int n) {
  double total = 0;
  const double *ptr_a = a, *ptr_b = b;

  for ( ;ptr_a < a + n && ptr_b < b + n; ptr_a++, ptr_b++) {
    total += *ptr_a * *ptr_b;
    printf("%f * %f = %f\n", *ptr_a, *ptr_b, *ptr_a * *ptr_b);
  }
  return total;
}
