/* Chapter 12 Exercise 8 */

void store_zeros(int a[], int n) {
  int *p;
  for (p = a; p < a + n; p++) {
    *p == 0;
  }
}
