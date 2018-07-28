/* Chapter 16 Exercise 11 */

/* Suppose that  s  is the following struct */

struct {
  double a;
  union {
    char b[4];
    double b;
    int d;
  } e;
  char f[4];
} s;

/* If char values occupy one byte, int values occupy 4 bytes, and a double
 * values occupy 8 bytes, how much space will a C compiler allocate for s?
 * (Assume that the compiler leaves no "holes" between members.)
*/

/* Anwer a = 8 + b = 8 (largest type is double) + 4
 * total: 20
*/
