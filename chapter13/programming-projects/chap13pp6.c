/* Chapter 13 Programming Project 6 */
/* planet.c from 13.7 */
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

#define NUM_PLANETS 9

bool str_cmp_no_case(char *s1, char *s2);

int main(int argc, char *argv[])
{
  char *planets[] = {"Mercury", "Venus", "Earth",
                     "Mars", "Jupiter", "Saturn",
                     "Uranaus", "Neptune", "Pluto"};
  int i, j;

  for (i = 1; i < argc; i++) {
    for (j = 0; j < NUM_PLANETS; j++) {
      if (str_cmp_no_case(argv[i], planets[j])) {
        printf("\n%s is planet %d\n", argv[i], j + 1);
        break;
      }
    }
    if (j == NUM_PLANETS) {
      printf("\n%s is not a planet\n", argv[i]);
    }
  }
  return 0;
}

bool str_cmp_no_case(char *s1, char *s2)
{
  if (strlen(s1) != strlen(s2)) {
    return false;
  }

  while (*s1++ && *s2++) {
    if (toupper(*s1) != toupper(*s2)) {
      return false;
    }
  }
  return true;
}
