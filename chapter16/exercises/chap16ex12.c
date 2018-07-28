/* Chapter 16 Exercise 12 */

/* Suppose that  u  is the following union */

union {
  double a;
  struct {
    char b[4];
    double c;
    int d;
  } e;
  char f[4];
} u;

/* If char values occupy one byte, int values occupy 4 bytes, and a double
 * values occupy 8 bytes, how much space will a C compiler allocate for u?
 * (Assume that the compiler leaves no "holes" between members.)
*/

/* Anwer: 16 (4 + 8 + 4)
 * the struct (e) is the largest member of the union.
*/
