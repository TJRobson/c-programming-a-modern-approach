/* Chapter 14 Exercise 13a 13b */

/* a) Show what the following program will look like after the preprocessing.
 *    You many ignore any lines as a result of the <stdio.h> header.
*/
#include <stdio.h>

#define N 100

void f(void);

int main(void)
{
    f();
  #ifdef N
  #undef N
  #endif

  return 0;
}

void f(void)
{
  #if defined(N)
    printf("N is %d\n", N);
  #else
    printf("N is undefined\n");
  #endif
}

/* Answer :
 * void f(void);
 *
 * int main(void)
 * {
 *    f();
 *   return 0;
 * }
 *
 * void f(void)
 * {
 *    printf("N is undefined\n");
 * }
*/

/* b) What will be the output of this program?
 *
 * Answer:
 * N is undefined
 *
*/
