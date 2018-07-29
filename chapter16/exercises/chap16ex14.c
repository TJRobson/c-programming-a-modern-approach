/* Chapter 16 Exercise 14 */
#include <stdio.h>
#include <math.h>

#define M_PI acos(-1.0)
#define RECTANGLE 0
#define CIRCLE 1

struct point { int x, y; };

struct shape {
  int shape_kind;       /* RECTANGLE  or CIRCLE */
  struct point center;  /* coordinates of center */
  union {
    struct {
      int height, width;
    } rectangle;
    struct {
      int radius;
    } circle;
  } u;
} s;

double compute_area(struct shape s);
struct shape move_shape(struct shape s, int x, int y);
struct shape scale_shape(struct shape s, double c); /* c is scale factor */

int main(void)
{
  s.shape_kind = CIRCLE;
  s.u.circle.radius = 7;

  printf("\nComputer area of circle, radius = %d: %.2lf\n",
         s.u.circle.radius, compute_area(s));

  s.shape_kind = RECTANGLE;
  s.center.x = 9;
  s.center.y = 9;
  s.u.rectangle.height = 18;
  s.u.rectangle.width = 18;

  printf("Center of rectangle: %d, %d\n", s.center.x, s.center.y);
  printf("Area of rectangle with height %d and width %d: %.2lf\n",
          s.u.rectangle.height, s.u.rectangle.width, compute_area(s));

  s = move_shape(s, 2, 8);

  printf("Center of shifted rectangle: %d, %d\n",
          s.center.x, s.center.y);

  s.shape_kind = CIRCLE;
  s.u.circle.radius = 7;
  s = scale_shape(s, 0.8);
  printf("Circle radius after being scaled by 0.8: %d\n",
          s.u.circle.radius);

  return 0;
}

double compute_area(struct shape s)
{
  if (s.shape_kind == RECTANGLE) {

    return s.u.rectangle.height * s.u.rectangle.height;

  } else if (s.shape_kind == CIRCLE) {

    return M_PI * s.u.circle.radius * s.u.circle.radius;

  }
}

struct shape move_shape(struct shape s, int x, int y)
{
  s.center.x += x;
  s.center.y += y;

  return s;
}

struct shape scale_shape(struct shape s, double c)
{
  if (s.shape_kind == RECTANGLE) {

    s.u.rectangle.height *= c;
    s.u.rectangle.width *= c;

  } else if (s.shape_kind == CIRCLE) {

    s.u.circle.radius *= c;

  }
  return s;
}
