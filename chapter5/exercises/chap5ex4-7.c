/* Chapter 5 Exercises 4, 5, 6 & 7 */

/*  Ex.4 - Write a single expression whose value is either -1, 0, or +1,
   depending on whether i is less than, equal to, or greater than j,
   respectively. Answer (i > j) - (i > j);
*/

/* Ex.5 - Is the folling statement legal: if (n >= 1 <= 10)
   if so, what it do when n is equal to 0?

   The above if statement is legal, however it doesn't behave as we expect
   What it evaluates to is ((n >= 1) <= 10), so when n is 0 it evaluates to:
   (0 <= 10) -> 1 (true). However we only want it to return 'true' when
   n is between 1 & 10 inclusive.
*/

/* Ex.6 - Is the following statement legal: if (n == 1-10)
   If so, what does it do when n is equal 5?

   Yes, the statement is legal.
   When n is equal to 5, it does nothing, since 5 is not equal to –9.
*/

/* Ex.7 - What does the following statement print if i has the value 17?
   What does it print if i have the value -17?
   printf("%d\n", i >= 0 ? i : -i);
   Answer: Both cases equal 17.
   If I is >= 0 it returns i
   If I is not >= 0 it returns -i or -(-17) = 17
*/

#include <stdio.h>

int main(void)
{
  int i, j, n;
  printf("Exercise 4:\n");
  i = 1, j = 2;
  printf("1st case (1>2)-(1<2) : %d\n", (i > j) - (i < j));
  i = 2, j = 1;
  printf("2nd case (2>1)-(2<1) : %d\n", (i > j) - (i < j));
  i = 2, j = 2;
  printf("3rd case (2>2)-(2<2) : %d\n", (i > j) - (i < j));

  printf("Exercise 5 - Enter a number: ");
  scanf("%d", &n);
  printf("Result of if(n >= 1 <= 10):");
  if (n >= 1 <= 10) {
    printf("n is between 1 and 10\n");
  }

  printf("Exercise 6: uses input from Ex.5\n");
  if (n ==1-10){
    printf("n is between 1 and 10\n");
  }

  printf("Exercise 7 - Enter 17 or -17: ");
  scanf("%d", &i);
  printf("%d\n", i >= 0 ? i : -i);


  return 0;
}
