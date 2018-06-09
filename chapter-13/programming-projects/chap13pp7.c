/* Chapter 13 Programming Project 7 */
/* from Chapter 5 Programming Project 11 */
#include <stdio.h>

int main(void)
{
    char *num_strs[] = {"one.", "two.", "three.", "four.", "five.",
                        "six.", "seven.", "eight.", "nine.", "ten",
                        "eleven.", "twelve.", "thirteen.", "fourteen.",
                        "fifteen.", "sixteen.", "eighteen.", "nineteen.",
                        "twenty-", "thirty-", "forty-", "fifty-", "sixty-",
                        "seventy-", "eighty-", "ninety-"};
    int number, tens, ones;

    printf("Enter a two-digit number: ");
    scanf("%d", &number);

    if (number < 10 || number > 99) {
        printf("Error, please enter a number with only two digits.");
        return 0;
    }

    tens = number / 10;
    ones = number % 10;

    printf("You entered the number ");

    if (tens == 1) {
      printf("%s\n", num_strs[ones + 8]);
    } else {
      printf("%s", num_strs[tens + 16]);
      if (ones > 0) {
        printf("%s\n", num_strs[ones - 1]);
      } else {
        printf("\b.\n");
      }
    }

    return 0;
}
