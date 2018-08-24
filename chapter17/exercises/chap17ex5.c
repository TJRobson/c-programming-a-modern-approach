/* Chapter 17 Exercises 5a-d */

/* Suppose that  f  and  p  are declared as follows: */

struct {
  union {
    char a, b;
    int c;
  } d;
  int e[5];
} f, *p = &f;

/* Which of the following statements are legal?
 *
 * a) p->b = ' '; Answer: Illegal. Should be p->d.b = ' ';
 *
 * b) p->e[3] = 10; Answer: Legal.
 *
 * c) (*p).d.a = '*'; Answer: Legal.
 *
 * d) p->d->c = 20; Answer: Illegal. Should be p->d.c = 20;
 *
*/
