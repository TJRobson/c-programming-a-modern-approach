/* Chapter 3 Exercises 3, 4, 5 */
#include <stdio.h>

int main(void) {
  /* Exercise 3 */
  // int i, j, k;
  // printf("Enter an int: ");
  // scanf("%d", &i);
  // printf("Enter another int: ");
  // scanf(" %d", &j);
  // printf("%d,%d", i, j);
  // printf("Enter 3 ints: ");
  // scanf("%d -%d -%d", &i, &j, &k);
  // float a, b;
  // printf("Enter two floats: ");
  // scanf("%f, %f", &a, &b);

  /* Exercise 4 */
  int i;
  float x, y;

  // printf("type in: 10.3 5 6  :");
  // scanf("%d%f%d", &i, &x, &j);
  // printf("%d|%f|%d", i, x, j); /* As Expected */

  printf("type in: 12.3 45.6 789  :");
  scanf("%f%d%f", &x, &i, &y);
  printf("%f|%d|%f", x, i, y); /* As Expected */
  
  return 0;
}
