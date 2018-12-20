/* Chapter 20 Exercise 8 */

/* Let f be the following function: */

unsigned int f(unsigned int i, int m, int n)
{
  return (i >> (m + 1 - n)) & ~(~0 << n);
}

/* a) What is the value of ~(~0 << n)?
 *
 * Answer: ~0 sets all bits to 1, << n makes n bits from the right leaving
 *         them as 0's. ~(...) turns all bits to their completment.
*/

/* b) What does the function do?
 *
 * Answer: (i >> (m + 1 - n)) shifts i bits left by m + 1 - n bits.
 *         ~(~0 << n) turns n bits to 1's. The & gives the bits from i
 *         that ~(~0 << n) masked. The function returns i's bits from
 *         (m + 1 - n) to (m + 1 - n) + n
*/
