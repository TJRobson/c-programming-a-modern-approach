/* Chapter 16 Exercise 3 */
#include <stdio.h>

struct complex {
  double real;
  double imaginary;
};

struct complex make_complex(double r, double i);
struct complex add_complex(double r, double i);

int main(void)
{
  struct complex  c1, c2, c3;

  return 0;
}

struct make_complex(double r, double i)
{
  struct complex c;
  c.real = r; c.imaginary = i;
  return c;
}

struct add_complex(struct one, struct two)
{
  struct complex c;
  c.real = one.real + two.real;
  c.imaginary = one.imaginary + two.imaginary;
  return c;
}
