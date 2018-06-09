/* Chapter 13 Programming Project 4 */
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
  char **p;

  printf("\n");

  for (p = argv + argc -1; p > argv; p--) {
    printf("%s ", *p);
  }

  printf("\n");

  return 0;
}
