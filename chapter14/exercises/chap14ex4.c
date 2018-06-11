/* Chapter 14 Exercises 4a 4b */

/* For the following macros, give an example that illustrates a problem
 * with the macro and show how to fix it.
 * a) #define AVG(x, y) (x-y)/2
 * b) #define AREA(x, y) (x) * (y)
*/
#include <stdio.h>

#define OLD_AVG(x, y) (x-y)/2
#define OLD_AREA(x, y) (x) * (y)

#define FIX_AVG(x, y) (((x)+(y))/2) /* fixed */
#define FIX_AREA(x, y) ((x)*(y))    /* fixed */

int main(void)
{
  int x, y;

  printf("\nEnter an int for x and y (x y): ");
  scanf("%d %d", &x, &y);
  printf("before: AVG(%d+%d, %d+%d): %d\n", x, x, y, y, OLD_AVG(x+x, y+y));
  printf("before: 5/AREA(%d, %d):  %d\n", x, y, 5/OLD_AREA(x, y));
  printf("fixed:  AVG(%d+%d, %d+%d): %d\n", x, x, y, y, FIX_AVG(x+x, y+y));
  printf("fixed:  5/AREA(%d, %d):  %d\n", x, y, 5/FIX_AREA(x, y));

  return 0;
}
