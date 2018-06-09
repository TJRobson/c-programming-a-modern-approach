/* Chapter 8 Exercise 6 */

/* Calculators, watches, and other electronic devices often rely on
 * seven-segment displays for numerical output. To form a digit, such devices
 * "turn on" some of the seven segments while leaving others "off":
 *  _       _   _       _   _   _   _   _
 * | |   |  _|  _| |_| |_  |_    | |_| |_|
 * |_|   | |_   _|   |  _| |_|   | |_|  _|
 *
 * Suppose that we want to set up an array that remembers which segments should
 * be "on" for each digit. Let's number the segments as follows.
 *   __
 * 5|0 |1
 *  |__|
 * 4|6 |2
 *  |__|
 *   3
 *
 * Here's what that array might look like, with each row representing one
 * digit:
 *
 * const int segments[10][7] = {{1, 1, 1, 1, 1, 1, 0}, ...};
 *
 * I've given you the first ro of the initializer; fill in the rest.
 */

/* Answer: */
int main(void)
{
  const int segments[10][7] = {{1, 1, 1, 1, 1, 1, 0},
                               {0, 1, 1, 0, 0, 0, 0},
                               {1, 1, 0, 1, 1, 0, 1},
                               {1, 1, 1, 1, 0, 0, 1},
                               {0, 1, 1, 0, 0, 1, 1},
                               {1, 0, 1, 1, 0, 1, 1},
                               {1, 0, 1, 1, 1, 1, 1},
                               {1, 1, 1, 0, 0, 0, 0},
                               {1, 1, 1, 1, 1, 1, 1},
                               {1, 1, 1, 1, 0, 1, 1}};
  return 0;
}
