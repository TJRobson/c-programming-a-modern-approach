/* Chapter 16 Exercise 13a-f */

/* Suppose that  s  is the following strucure (point is a structure tag
 * declared is Exercise 10)
*/

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

/* If the shape_kind is RECTANGLE, the height and width members store the
 * dimentions of a rectangle. If the value of shape_kind is CIRCLE, the radius
 * member stores the radius of a circle. Indicate which of the following
 * statements are legal and show how to repair the ones that aren't.
*/

/* a) s.shape_kind = RECTANGLE;
 * Answer: legal.
 *
 * b) s.center.x = 10;
 * Anwer: legal.
 *
 * c) s.height = 25;
 * Answer: Illegal -- s.u.rectangle.height = 25;
 *
 * d) s.u.rectangle.width = 8;
 * Anwer: legal.
 *
 * e) s.u.circle = 5;
 * Answer: Illegal -- s.u.circle.radius = 5;
 *
 * d) s.u.radius = 5;
 * Answer: Illegal -- s.u.circle.radius = 5;
 *
*/
