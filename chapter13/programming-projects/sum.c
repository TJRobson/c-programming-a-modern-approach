/* Chapter 13 Programming Project 5 */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  char **p;
  int total = 0;

  for (p = argv + 1; p < argv + argc; p++) {
    total += atoi(*p);
  }

  printf("\nTotal: %d\n", total);

  return 0;
}
