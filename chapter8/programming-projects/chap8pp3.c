/* Chapter 8 Programming Project 3 */
#include <stdbool.h>
#include <stdio.h>

#define SIZE ((int) (sizeof(repeats) / sizeof(repeats[0])))

int main(void)
{
  int i, digit;
  long n;

  for(;;) {
    printf("\nEnter a number: ");
    scanf("%ld", &n);

    if (n <= 0)
    {
      break;
    }
    else 
    {
      int repeats[10]= {0};

      while(n > 0) {
        digit = n % 10;
        repeats[digit]++;
        n /= 10;
      }
      printf("\nDigit:      ");
      for (i = 0; i < SIZE; i++) {
        printf("%d ", i);
      }
      printf("\nOccurances: ");
      for(i = 0; i < SIZE; i++){
        printf("%d ", repeats[i]);
      }
      printf("\n");
    }
  }
  return 0;
}
