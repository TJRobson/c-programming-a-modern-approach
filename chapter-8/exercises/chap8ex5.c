/* Chapter 8 Exercise 5 */
#include <stdio.h>

int main(void)
{
  int i, fib_length, fib_numbers[40] = {1,2};

  fib_length = sizeof(fib_numbers) / sizeof(fib_numbers[0]);

  for(i = 2; i < fib_length; i++){
    fib_numbers[i] = fib_numbers[i-2] + fib_numbers[i-1];
  }

  for(i = 0; i < fib_length; i++){
    printf("Fibonacci number %d : %d\n", i+1, fib_numbers[i]);
  }

  return 0;
}
