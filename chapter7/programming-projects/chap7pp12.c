/* Chapter 7 Programming Project 12 */

/* Write a program that evaluates an expression:
 *
 * Enter an expression: 1+2.5*3
 * Value of expression: 10.5
 *
 * The operands in the expression are floating-point numbers; the operators
 * are +, -, *, and /. The expression is evaluated from left to right (no
 * operator takes precedence over any other operator).
 */
#include <stdio.h>
#include <ctype.h>

int main(void)
{
  float value, cur_total;
  char ch;

  printf("\nEnter an expression: ");
  scanf("%f", &cur_total);

  while((ch = getchar()) != '\n'){

    switch (ch) {
      case '+':
          scanf("%f", &value);
          cur_total += value;
          break;
      case '-':
          scanf("%f", &value);
          cur_total -= value;
          break;
      case '*':
          scanf("%f", &value);
          cur_total *= value;
          break;
      case '/':
          scanf("%f", &value);
          cur_total /= value;
          break;
      default:
          continue;
    }

  }

  printf("Value of expression: %.3f\n", cur_total);

  return 0;
}
