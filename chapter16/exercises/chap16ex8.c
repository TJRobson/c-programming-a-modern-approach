/* Chapter 16 Exercise 8 */
#include <stdio.h>

struct colour {
  int red;
  int green;
  int blue;
};

int main(void) {

  const struct colour MAGENTA_A {255, 0, 255};
  const struct colour MAGENTA_B {.red = 255, .blue = 255};

  return 0;
}
