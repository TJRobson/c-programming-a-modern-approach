/* Chapter 9 Exercise 7 */

/* Using the shortcuts descirbed in Section 8.2, shrink the intitializer for
 * the segments array (Exercise 6) as much as you can.
 */

int main(void)
{
  const int segments[10][7] = {{1, 1, 1, 1, 1, 1},
                               {0, 1, 1},
                               {1, 1, 0, 1, 1, 0, 1},
                               {1, 1, 1, 1, 0, 0, 1},
                               {0, 1, 1, 0, 0, 1, 1},
                               {1, 0, 1, 1, 0, 1, 1},
                               {1, 0, 1, 1, 1, 1, 1},
                               {1, 1, 1},
                               {1, 1, 1, 1, 1, 1, 1},
                               {1, 1, 1, 1, 0, 1, 1}};
  return 0;
}
