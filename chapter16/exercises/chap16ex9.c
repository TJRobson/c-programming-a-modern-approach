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
bool equal_colour(struct colour colour1, struct colour colour2);
struct colour brightner(struct colour c);
struct colour darkner(struct colour c);

int main(void)
{
  return 0;
}

struct colour make_colour(int red, int green, int blue)
{
  struct colour c {.red = red, .green = green, .blue = blue};

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

}

bool equal_colour(struct colour colour1, struct colour colour2)
{

}

struct colour brightner(struct colour c)
{

}

struct colour darkner(struct colour c)
{

}
