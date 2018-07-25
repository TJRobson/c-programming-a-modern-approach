/* Chapter 16 Exercise 10a-d */
#include <stdio.h>
#include <stdbool.h>

struct point { int x, y; };
struct rectangle { struct point upper_left, lower_right; };

int compute_height(struct rectangle r);
int compute_width(struct rectangle r);
int compute_area(struct rectangle r);
struct point find_center(struct rectangle r);
struct rectangle shift_rectangle(struct rectangle r, int x, int y);
bool contains_point(struct rectangle r, struct point p);


int main(void)
{

  return 0;
}

int compute_height(struct rectangle r)
{
  return r.lower_right.y - r.upper_left.y;
}

int compute_width(struct rectangle r)
{
  return r.lower_right.x - r.upper_left.x;
}

int compute_area(struct rectangle r)
{
  return compute_height(r) * compute_width(r);
}
