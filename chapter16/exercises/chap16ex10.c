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
  struct point p1, p2;

  printf("\nEnter an x, y pair for point 1 (x, y): ");
  scanf("%d, %d", &p1.x, &p1.y);
  printf("Enter an x, y pair for point 1 (x, y): ");
  scanf("%d, %d", &p2.x, &p2.y);

  struct rectangle r = {p1, p2};
  struct point center_of_r = find_center(r);

  printf("\nArea of rectangle: %d\n", compute_area(r));
  printf("Center of rectangle: x = %d, y = %d\n",
          center_of_r.x, center_of_r.y);

  int shift_x, shift_y;

  printf("Enter x direction shift amount (int): ");
  scanf("%d", &shift_x);
  printf("Enter y direction shift amount (int): ");
  scanf("%d", &shift_y);

  r = shift_rectangle(r, shift_x, shift_y);
  center_of_r = find_center(r);

  printf("\nCenter of shifted rectangle: x = %d, y = %d",
         center_of_r.x, center_of_r.y);

  struct point is_point;

  printf("\nEnter a x, y to check for in rectangle (x, y): ");
  scanf("%d, %d", &is_point.x, &is_point.y);

  printf("Point is in rectangle: %s\n",
         contains_point(r, is_point) ? "True":"False");


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

struct point find_center(struct rectangle r)
{
  return (struct point) {r.lower_right.x + (compute_width(r) / 2),
                         r.lower_right.y + (compute_height(r) / 2)};
}

struct rectangle shift_rectangle(struct rectangle r, int x, int y)
{
  r.upper_left.x  += x;
  r.lower_right.x += x;
  r.upper_left.y  += y;
  r.lower_right.y += y;

  return r;
}

bool contains_point(struct rectangle r, struct point p)
{
  return ((p.x >= r.upper_left.x && p.x <= r.lower_right.x) &&
          (p.y >= r.upper_left.y && p.y <= r.lower_right.y));
}
