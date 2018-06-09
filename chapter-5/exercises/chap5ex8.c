/* Chapter 5 Exercise 8 */

/* The follownig if statement is unnecessarily complicated.
   Simplify it as much as possible.
   (Hint: The entire statement can be replaced by a single assignment).

   if (age >= 13)
     if (age <= 19)
       teenager = true;
     else
       teenager = false;
   else if (age < 13)
     teenager = false;
 */
#include <stdio.h>
#include <stdbool.h>

int main(void)
{
  int age;
  bool teenager;

  printf("Enter a age: ");
  scanf("%d", &age);
  /* The statement */
  teenager = age >= 13 && age <= 19 ? true : false;

  printf("Teenager: %s", teenager ? "True" : "False");
  /* Works */
  return 0;
}
