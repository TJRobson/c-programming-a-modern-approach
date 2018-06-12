/* Chapter 14 Exercise 6a 6b */

/* a) Write a macro DISP(f, x) that expands into a call of printf that displays
 * the value of the function f when callled with argument x. For example,
 * DISP(sqrt, 3.0);
 * should expand into
 * printf("sqrt(%g) = %g\n", 3.0, sqrt(3.0));
 *
 * b) Write a macro DISP2(f,x,y) that's similar to DISP but works with two
 * arguments.
*/
#include <stdio.h>
#include <math.h>

#define DISP(f,x) (printf("\n%s(%g) = %g\n", (#f), (x), (f(x))))
#define DISP2(f,x,y) (printf("%s(%g,%g) = %g\n", (#f), (x), (y), (f((x),(y)))))

int main(void)
{
  double x = 763;

  DISP(sqrt, x);

  double y = 9;
  x = 12;

  DISP2(pow, x, y);

  return 0;
}
