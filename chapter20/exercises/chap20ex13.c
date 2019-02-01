/* Chapter 20 Exercise 13 */

/* If n is an unsigned int variable, what effect does the following
 * statement have on the bits of n? */

n &= n - 1

/* Hint: */
/* Consider the effect on n if this statement is exucuted more than once */

/* Answer: */
/*  If n = 11 (1011)
 *  n &= n - 1 is
 *   1011      1010      1000
 * & 1010    & 1001    & 0111
 * = 1010 => = 1000 => = 0000 */

/* This is an efficient way of counting the number of 1 bits in a number
*  should itbe used in a loop that terminates when n is 0. The number of
*  iterations will be dependent on the number of 1 bits, rather than the
*  total number of bits. */
