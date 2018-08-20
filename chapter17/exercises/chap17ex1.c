/* Chapter 17 Exercise 1 */
#include <stdio.h>
#include <stdlib.h>

void *my_malloc(int bytes)
{
  int *p;

  if ((p = malloc(bytes)) == NULL) {
    printf("\nError: NULL pointer, malloc failed.\n");
    exit(EXIT_FAILURE);
  }

  return p;
}


int main(void)
{
  char *p = my_malloc(12);

  return 0;
}
