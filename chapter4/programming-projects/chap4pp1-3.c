/* Chapter 4 programming projects 1-3 */
#include <stdio.h>

int main(void) {
  /* Project 1: User inputs two a two digit number, program returns them in reverse */
  // int p1;
  // printf("Enter a two-digit number: ");
  // scanf("%d", &p1);
  // printf("%d%d", p1%10, p1/10); /* works */

  /* Project 2: same but with three numbers */
  // printf("Enter a three-digit number: ");
  // scanf("%d", &p1);
  // printf("%d%d%d", p1%10, (p1%100)/10, p1/100); /* works */

  /* Project 3: same as, sans the arithemtic */
  int one, two, three;
  printf("Enter a three-digit number: ");
  scanf("%1d%1d%1d", &one, &two, &three);
  printf("%d%d%d", three, two, one); /* works, needs and 1 in %1d */

  return 0;
}
