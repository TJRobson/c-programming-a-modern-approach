/* Chapter 9 Exercise 12 */
#include <stdio.h>

#define N 5

double inner_product(double a[], double b[], int n);

int main(void) {
  double a[N] = {123.0098, 23.4569395439, 5.32, 2.4444444349802334, 5.23333339};
  double b[N] = {44.484884, 929.9292929, 4.44444, 6.64321, 12.8888888};

  printf("\nInner Production: %lf\n", inner_product(a, b, N));

  return 0;
}

double inner_product(double a[], double b[], int n) {
  if(n == 0) {
    return 1;
  } else {
    return a[n-1] * b[n-1] + inner_product(a, b, n-1);
  }
}
