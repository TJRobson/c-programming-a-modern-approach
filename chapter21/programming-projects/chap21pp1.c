/* Chapter 21 Programming Project 1 */
#include <stdio.h>
#include <stddef.h>

struct s {
  char a;
  int b[2];
  float c;
} s1;

int main(void)
{
  printf("\nSize of struct s: %ld\n", sizeof(struct s));
  printf("Size and offset of member a: %ld | %ld\n",
         sizeof(s1.a), offsetof(struct s, a));
  printf("Size and offset of member b: %ld | %ld\n",
         sizeof(s1.b), offsetof(struct s, b));
  printf("Size and offset of member c: %ld | %ld\n\n",
         sizeof(s1.c), offsetof(struct s, c));

  printf("Hole between a and b: %ld\n", offsetof(struct s, b) - sizeof(s1.a));
  printf("Hole between b and c: %ld\n", (offsetof(struct s, c) - sizeof(s1.b))
                                       - offsetof(struct s, b));

  return 0;
}

/* List of "holes":
 * 3 byte hole after member a (offset of b[0] is 4)
 * No other holes present in struct s
 */
