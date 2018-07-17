/* Chapter 16 Exercise 7 */
#include <stdio.h>

struct fraction {
  int numerator;
  int demoninator;
};

struct fraction reduce(struct fraction f);
int fraction gcd(int one, int two); /* 7a */

struct fraction add_fractions(struct fraction f1, struct fraction f2); /* 7b */
struct fraction sub_fractions(struct fraction f1, struct fraction f2); /* 7c */
struct fraction mult_fractions(struct fraction f1, struct fraction f2);/* 7d */
struct fraction divd_fractions(struct fraction f1, struct fraction f2);/* 7e */

int main(void)
{
  return 0;
}

struct fraction reduce(struct fraction f)
{
  int gcd = gcd(f.numerator, f.demoninator);
  f.numerator /= gcd;
  f.demoninator /= gcd;
  return f;
}

struct fraction gcd(int one, int two)
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


}
struct fraction sub_fractions(struct fraction f1, struct fraction f2)
{

}
struct fraction mult_fractions(struct fraction f1, struct fraction f2)
{

}
struct fraction divd_fractions(struct fraction f1, struct fraction f2)
{

}
