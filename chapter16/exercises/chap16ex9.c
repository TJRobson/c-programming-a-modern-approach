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
  int red_one, green_one, blue_one, red_two, green_two, blue_two;

  printf("\nColour one. Enter an int value for each RGB, (R G B): ");
  scanf("%d %d %d", &red_one, &green_one, &blue_one);
  printf("Colour two. Enter an int value for each RGB, (R G B): ");
  scanf("%d %d %d", &red_two, &green_two, &blue_two);

  struct colour one = make_colour(red_one, green_one, blue_one);
  struct colour two = make_colour(red_two, green_two, blue_two);

  printf("\nColour One == Colour Two: %s\n",
          equal_colour(one, two) ? "True" : "False");

  struct colour bright_one = brightner(one);
  struct colour darker_two = darkner(two);

  printf("\nBrightened Colour One:\nR: %d G: %d B: %d\n",
          bright_one.red, bright_one.green, bright_one.blue);

  printf("\nDarker Colour Two:\nR: %d G: %d B: %d\n",
          darker_two.red, darker_two.green, darker_two.blue);


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
  if (c.red == 0 && c.green == 0 && c.blue == 0) {
    struct colour darker = {3, 3, 3};
    return darker;
  }

  struct colour darker;

  if (c.red > 0 && c.red < 3) {
    c.red = 3;
  }
  if (c.green > 0 && c.green < 3) {
    c.green = 3;
  }
  if (c.blue > 0 && c.blue < 3) {
    c.blue = 3;
  }

  darker.red = (int) (c.red * 0.7);
  if (darker.red > 255) {
    darker.red = 255;
  }
  darker.green = (int) (c.green * 0.7);
  if (darker.green > 255) {
    darker.green = 255;
  }
  darker.blue = (int) (c.blue * 0.7);
  if (darker.blue > 255) {
    darker.blue = 255;
  }

  return darker;
}
