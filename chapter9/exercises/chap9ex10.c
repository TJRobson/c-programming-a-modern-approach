/* Chapter 9 Exercise 10 */
#include <stdio.h>

int largest_e(int a[], int n);
float average(int a[], int n);
int num_of_pos(int a[], int n);

int main(void)
{
  int num = 10, a[10] = {-55, -10, 6, 11, 12, -48, 86, 42, 22, 36};

  printf("\nNumbers: ");
  for (int i = 0; i < num; i++) {
    printf("%d ", a[i]);
  }
  printf("\nLargest Element: %d\n", largest_e(a, num));
  printf("Average number: %.2f\n", average(a, num));
  printf("Number of positive elements: %d\n", num_of_pos(a, num));

  return 0;
}

int largest_e(int a[], int n) {
  int largest = a[0];
  for (n-- ;n >= 0; n--) {
    if (a[n] > largest) { largest = a[n]; }
  }
  return largest;
}

float average(int a[], int n) {
  int i, sum = 0;
  for (i = 0; i < n; i++) {
    sum += a[i];
  }
  return (float) sum / n;
}

int num_of_pos(int a[], int n) {
  int pos = 0;
  for (n-- ;n >= 0; n--) {
    if (a[n] >= 0) { pos++; }
  }
  return pos;
}
