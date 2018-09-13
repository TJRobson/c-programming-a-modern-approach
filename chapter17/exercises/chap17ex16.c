/* Chapter 17 Exercise 16 */
#include <stdio.h>

/* Write the folling function. Then call sum(g, i, j) should return
 * g(i) + ... + g(j).
*/

int sum(int (*f) (int), int start, int end);
int square(int n);
int fact(int n);


int main(void)
{
  int start = 0, end = 0;

  printf("\nEnter a sarting int (lower) and ending int (higher) (x y): ");
  scanf("%d %d", &start, &end);

  printf("Sum of %d to %d Squared: %d\n",
          start, end, sum(square, start, end));
  printf("Sum of %d to %d Factorial: %d\n",
          start, end, sum(fact, start, end));

  return 0;
}

int sum(int (*f) (int), int start, int end)
{
  int sum = 0;

  while (start <= end) {
    sum += (*f) (start);
    start++;
  }
  return sum;
}

int square(int n)
{
  return n * n;
}

int fact(int n)
{
  return n <= 1 ? 1 : n * fact(n - 1);
}
