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
struct shape scale_shape(struct shape s, double c);

int main(void)
{

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
