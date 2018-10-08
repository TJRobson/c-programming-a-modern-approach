/* Chapter 18 Exercise 6 */

/* The following function is suppose to print an error message. Each
 * message is preceded be an integer, indicating the number of times
 * the function has been called. Unfortunately, the function always
 * displays 1 as the number of the error message. Locate the error and
 * show how to fix it without making any changes outside the function.
*/

void print_error(const char *message)
{
  int n = 1;
  printf("Error: %d: %s\n", n++, message);
}

/* Fixed */
void print_error(const char *message)
{
  static int n = 1;
  printf("Error: %d: %s\n", n++, message);
}
