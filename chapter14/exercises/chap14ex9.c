/* Chapter 14 Exercises 9a 9b 9c */

/* Write the following macros.
 * a) CHECK(x,y,n) - Has the value 1 if x & y between 0 and n-1, inclusive
 * b) MEDIAN(x,y,z) - Finds the median of x, y and z.
 * c) POLYNOMIAL(x) - Computes the polynomial  3x^5+2x^4-5x^3-x^2+7x-6
*/
#include <stdio.h>
#include <math.h>

#define CHECK(x,y,n) ((0 <= (x) && (x) <= (n)-1) && 0 <= (y) && (y) <= (n)-1)

#define MEDIAN(x,y,z) (((x)<(y)&&(y)<(z)) ? (y)    \
                    : ((y)<(x)&&(x)<(z)) ? (x) : (z))

#define POLYNOMIAL(x) ((3*pow((x), 5))+2*(pow((x),4))-5*pow(x,3)-pow(x,2) \
                       +7*(x)-6)

int main(void)
{
  int x = 3, y = 6, z = 12, n = 9;

  printf("\nx = %d, y = %d, z = %d, n = %d\n", x, y, z, n);
  printf("CHECK(%d,%d,%d) = %s\n", x, y, n, CHECK(x,y,n) ? "T" : "F");
  printf("MEDIAN(%d,%d,%d) = %d\n", z, y, n, MEDIAN(z,y,n));
  printf("POLYNOMIAL(%d) = %.3f\n", x, POLYNOMIAL(x));

  return 0;
}
