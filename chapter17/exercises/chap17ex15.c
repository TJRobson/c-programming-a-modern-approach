/* Chapter 17 Exercise 15 */
/* Show the output of the following program and explain what is does. */
#include <stdio.h>

int f1(int (*f) (int));
int f2(int i);

int main(void)
{
  printf("\nAnswer: %d\n", f1(f2));
}

int f1(int (*f) (int))
{
  int n = 0;

  while ((*f) (n)) {
    n++;
  }
  return n;
}

int f2(int i)
{
  return i * i + i - 12;
}

/* Answer: 3
 *
 * f1 has one parameter, a pointer to a function that take and returns an int.
 * f2 has one parameter, an int and returns and int.
 *
 * f1's function body contains a while loop that increments n, whilst the
 * testing whether the return value of the function called with n is
 * non-zero. Once the return value is 0 and the while loop temimates and
 * f1 returns the value of n.
 *
 * When n = 0 f2 returns 0 * 0 + 0 - 12; = -12
 *
 * When n = 1 f2 returns 1 * 1 + 1 - 12; = -10
 *
 * When n = 2 f2 returns 2 * 2 + 2 - 12; = -6
 *
 * When n = 3 f2 returns 3 * 3 + 3 - 12; = 0 and
 *
*/
