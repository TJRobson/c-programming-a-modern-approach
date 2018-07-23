/* Chapter 16 Exercise 9a-e */
#include <stdio.h>
#include <stdbool.h>

struct colour {
  int red;
  int green;
  int blue;
};

struct colour make_colour(int red, int green, int blue);
int getRed(struct colour c);
bool equal_colour(struct colour c1, struct colour c2);
struct colour brightner(struct colour c);
struct colour darkner(struct colour c);

int main(void)
{
  return 0;
}

struct colour make_colour(int red, int green, int blue)
{
  struct colour c  = {.red = red, .green = green, .blue = blue};

  if (c.red < 0) {
    c.red = 0;
  }
  if (c.green < 0) {
    c.green = 0;
  }
  if (c.blue < 0) {
    c.blue = 0;
  }
  return c;
}

int getRed(struct colour c)
{
  return c.red;
}

bool equal_colour(struct colour c1, struct colour c2)
{
  return ( c1.red == c2.red && c1.green == c2.green && c1.blue == c2.blue );
}

struct colour brightner(struct colour c)
{

  if (c.red == 0 && c.green == 0 && c.blue == 0) {
    struct colour brightner = {3, 3, 3};
    return brightner;
  }

  struct colour brighter;

  if (c.red > 0 && c.red < 3) {
    c.red = 3;
  }
  if (c.green > 0 && c.green < 3) {
    c.green = 3;
  }
  if (c.blue > 0 && c.blue < 3) {
    c.blue = 3;
  }

  brighter.red = (int) (c.red / 0.7);
  if (brighter.red > 255) {
    brighter.red = 255;
  }
  brighter.green = (int) (c.green / 0.7);
  if (brighter.green > 255) {
    brighter.green = 255;
  }
  brighter.blue = (int) (c.blue / 0.7);
  if (brighter.blue > 255) {
    brighter.blue = 255;
  }

  return brighter;
}

struct colour darkner(struct colour c)
{

}
