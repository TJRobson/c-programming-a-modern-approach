/* Chapter 20 Exercise 14 */
#include <stdio.h>

struct fp_val {
  unsigned int fraction: 23;
  unsigned int exponent: 8;
  unsigned int sign_bit: 1;
};

int main(void)
{
  struct fp_val fv;

  fv.sign_bit = 1;
  fv.exponent = 111;
  fv.fraction = 1987;

  printf("\n%zu\n", sizeof(struct fp_val));
  printf("%x\n", fv.sign_bit);
  printf("%x\n", fv.exponent);
  printf("%x\n", fv.fraction);

  return 0;
}
