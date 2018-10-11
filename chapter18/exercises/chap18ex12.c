/* Chapter 18 Exercises 12a 12b */
#include <stdio.h>

/* a) Write a complete discription of the type of the function f, assuming
 *    that it's declared as follows:
 * int (*f(float (*) (long), char *)) (double);
*/
int (*f(float (*fp) (long), char *p)) (double);

/* Answer: f is a function with two parameters,
 *        - the first parameter function pointer with one parameter of long
 *          int and returns a float.
 *        - the second parameter is of pointer to a char.
 *        f returns a  pointer to a functon, that takes in a doulbe and
 *        returns an int.
*/

/* b) Give an example of how f would be called. */

float func_one(long n)
{
  return (float) n + 2.23f;
}

int func_two(double d)
{
  return (int) d * 10;
}

int (*f(float (*fp) (long), char *p)) (double)
{
  *p = *p - fp(7);
  return func_two;
}

int main(void)
{
  char c = 'T';
  double d = 3.75;

  int n = (f(func_one, &c))(d);

  printf("\n%c, %d\n", c, n);

  return 0;
}
