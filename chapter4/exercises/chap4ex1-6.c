/* Chapter 4 exercises 1 to 6 */
#include <stdio.h>

int main(void)
{
  int i=5, j=3, x=2, y=3, a=7, b=8, c=9, m=1, n=2, o=3;
  /* Q1 */
  printf("%d %d\n", i/j, i%j);
  printf("%d\n", (x + 10) % y);
  printf("%d\n", (a + 10) % b / c);
  printf("%d\n", (m + 5) % (n + 2) /o);
  /* Q2 */
  printf("%d, %d\n", -(i)/j, -(i/j));
  /* Q3 & Q4 */
  printf("%d, %d, %d, %d\n", 8/5, -8/5, 8/-5, -8/-5);
  /* Q5 & Q6 */
  printf("%d, %d, %d, %d\n", 8%5, -8%5, 8%-5, -8%-5);

  return 0;
}
