/* Chapter 20 Exercise 15 */

/* a) Assume the the variable s has been decleared as follows: */

struct {
  int flag: 1;
} s;

/* With some compilers, executing the following statements causes 1 to be
 * displayed, with other compilers, the output is -1. Explain the reason
 * for this behavior */

 s.flag = 1;
 printf("%d\n", s.flag);


/* Answer: This happens because the usage of int is ambigious in the case
 *         of a bit field structure, because the storage of bits in a bit
 *         field is implemenation defined. In the case of int, a compiler
 *         may treat the high-order bit as a sign bit. */

/* b) How can this problem be avoided? */

/* Answer: To prevent the ambiguity caused by declaring a bit-field structure
 *         member as int, all that needs to be done is to provide it with the
 *         type specifier signed or unsigned depending on whether you want to
 *         high-order bit to be a signed-bit or not. */
