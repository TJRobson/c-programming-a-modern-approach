/* Chapter 16 Exercise 3 */
#include <stdio.h>

struct complex {
  double real;
  double imaginary;
};

struct complex make_complex(double r, double i);
struct complex add_complex(struct complex one, struct complex two);

int main(void)
{
  struct complex  c1, c2, c3;
  double a = 0, b = 0;

  printf("\nEnter two float values for struct c1: ");
  scanf("%lf %lf", &c1.real, &c1.imaginary);
  printf("Enter two more float values: ");
  scanf("%lf %lf", &a, &b);

  c2 = make_complex(a, b);

  c3 = add_complex(c1, c2);

  printf("\nStuct c2: c2.real = %.3lf : c2.imaginary = %.3lf\n",
                                        c2.real, c2.imaginary);

  printf("\nStuct c1 added to c2, making c3\n");
  printf("Struct c3: c3.real = %.3lf : c3.imaginary = %.3lf\n",
                                    c3.real, c3.imaginary);


  return 0;
}

struct complex make_complex(double r, double i)
{
  struct complex c;
  c.real = r; c.imaginary = i;
  return c;
}

struct complex add_complex(struct complex one, struct complex two)
{
  struct complex c;
  c.real = one.real + two.real;
  c.imaginary = one.imaginary + two.imaginary;
  return c;
}
