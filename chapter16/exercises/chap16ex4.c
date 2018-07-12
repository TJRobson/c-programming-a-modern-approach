/* Chapter 17 Exercise 3 */
#include <stdio.h>

typedef struct {
  double real;
  double imaginary;
} Complex;

Complex make_complex(double r, double i);
Complex add_complex(Complex one, Complex two);

int main(void)
{
  Complex  c1, c2, c3;
  double a = 0, b = 0;

  printf("\nEnter two float values for Complex c1: ");
  scanf("%lf %lf", &c1.real, &c1.imaginary);
  printf("Enter two more float values: ");
  scanf("%lf %lf", &a, &b);

  c2 = make_complex(a, b);

  c3 = add_complex(c1, c2);

  printf("\nStuct c2: c2.real = %.3lf : c2.imaginary = %.3lf\n",
                                        c2.real, c2.imaginary);

  printf("\nComplex c1 added to c2, making c3\n");
  printf("Complex c3: c3.real = %.3lf : c3.imaginary = %.3lf\n",
                                    c3.real, c3.imaginary);


  return 0;
}

Complex make_complex(double r, double i)
{
  Complex c;
  c.real = r; c.imaginary = i;
  return c;
}

Complex add_complex(Complex one, Complex two)
{
  Complex c;
  c.real = one.real + two.real;
  c.imaginary = one.imaginary + two.imaginary;
  return c;
}
