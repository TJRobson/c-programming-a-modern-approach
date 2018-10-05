/* Chapter 18 Exercise 4 */

/* Let f be the following function. What will be the value of f(10) if f
 * has never been callled before? What will the value of f(10) be if f
 * has been called five times previously?
*/

int f(int i)
{
  static int j = 0;
  return i * j++;
}

/* 1. Never called before - Answer 0 */

/* 2. Called fives times previously - Answer 50 */
