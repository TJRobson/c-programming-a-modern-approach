/* Chapter 16 Exercise 7 */
#include <stdio.h>

struct fraction {
  int numerator;
  int demoninator;
};

struct fraction reduce(struct fraction f);
int get_gcd(int one, int two); /* 7a */

struct fraction add_fractions(struct fraction f1, struct fraction f2); /* 7b */
struct fraction sub_fractions(struct fraction f1, struct fraction f2); /* 7c */
struct fraction mult_fractions(struct fraction f1, struct fraction f2);/* 7d */
struct fraction divd_fractions(struct fraction f1, struct fraction f2);/* 7e */

int main(void)
{
  struct fraction f1, f2;

  printf("\nEnter 1st fraction (x/y): ");
  scanf("%d/%d", &f1.numerator, &f1.demoninator);

  printf("Enter 2nd fraction (x/y): ");
  scanf("%d/%d", &f2.numerator, &f2.demoninator);

  struct fraction addtion = add_fractions(f1, f2);
  printf("\nfraction 1 + fraction 2: %d/%d\n",
          addtion.numerator, addtion.demoninator);

  struct fraction subtraction = sub_fractions(f1, f2);
  printf("fraction 1 - fraction 2: %d/%d\n",
          subtraction.numerator, subtraction.demoninator);

  struct fraction multiplication = mult_fractions(f1, f2);
  printf("fraction 1 * fraction 2: %d/%d\n",
          multiplication.numerator, multiplication.demoninator);

  struct fraction division = divd_fractions(f1, f2);
  printf("fraction 1 / fraction 2: %d/%d\n\n",
          division.numerator, division.demoninator);

  return 0;
}

struct fraction reduce(struct fraction f)
{
  int gcd = get_gcd(f.numerator, f.demoninator);
  f.numerator /= gcd;
  f.demoninator /= gcd;
  return f;
}

int get_gcd(int one, int two)
{
  int temp;

  while (one != 0) {
    temp = two % one;
    two = one;
    one = temp;
  }
  return two;
}

struct fraction add_fractions(struct fraction f1, struct fraction f2)
{
  struct fraction sum;

  sum.numerator = (f1.numerator * f2.demoninator) +
                  (f2.numerator * f1.demoninator);
  sum.demoninator = f1.demoninator * f2.demoninator;

  sum = reduce(sum);
  return sum;
}

struct fraction sub_fractions(struct fraction f1, struct fraction f2)
{
  struct fraction sum;

  sum.numerator = (f1.numerator * f2.demoninator) -
                  (f2.numerator * f1.demoninator);
  sum.demoninator = f1.demoninator * f2.demoninator;

  sum = reduce(sum);
  return sum;
}

struct fraction mult_fractions(struct fraction f1, struct fraction f2)
{
  struct fraction product;

  product.numerator = f1.numerator * f2.numerator;
  product.demoninator = f1.demoninator * f2.demoninator;

  product = reduce(product);
  return product;
}

struct fraction divd_fractions(struct fraction f1, struct fraction f2)
{
  struct fraction quotient;

  quotient.numerator = f1.numerator * f2.demoninator;
  quotient.demoninator = f1.demoninator * f2.numerator;

  quotient = reduce(quotient);
  return quotient;
}
