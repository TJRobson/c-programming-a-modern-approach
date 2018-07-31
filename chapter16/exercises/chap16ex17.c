/* Chapter 16 Exercise 17 */

/* Suppose that  b  and  i  are declared as follows: */

enum {FALSE, TRUE} b;
int i;

/* Which of the following statements are legal? Which ones are "safe"
 * (always yield a meaningful result?)?
 *
 * a) b = FALSE; -- Legal - safe.
 *
 * b) b = i; -- Legal - is not safe.
 *
 * c) b++; -- Legal - is not safe.
 *
 * d) i = b; -- Legal - safe.
 *
 * e) i = 2 * b + 1; -- Legal - safe.
 *
*/
