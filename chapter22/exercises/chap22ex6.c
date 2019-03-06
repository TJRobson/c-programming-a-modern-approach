/* Chapter 22 Exercise 6 */
#include <stdio.h>

int main(void)
{
  int widget = 1;

  printf("\n%d widget%s\n", widget, widget != 1 ? "s" : "");
  widget = 5;
  printf("%d widget%s\n", widget, widget != 1 ? "s" : "");

  return 0;
}
