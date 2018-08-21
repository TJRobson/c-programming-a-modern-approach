/* Chapter 17 Exercise 2 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 50

char *duplicate(char *str)
{
  char *copy;

  if ((copy = malloc(strlen(str) + 1)) == NULL) {
    printf("\nError: malloc failed\n");
  }

  strcpy(copy, str);

  return copy;
}

int main(void)
{
  char str[N+1];

  printf("\nEnter a short string: ");
  fgets(str, N, stdin);

  char *str_copy = duplicate(str);

  printf("Dulicated string: %s\n", str_copy);

  return 0;
}
