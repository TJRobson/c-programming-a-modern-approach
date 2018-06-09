/* Chapter 8 Programming Project 1 */

#include <stdbool.h>
#include <stdio.h>

#define SIZE ((int) (sizeof(repeats) / sizeof(repeats[0])))

int main(void)
{
    int i, digit, repeats[10]= {0};
    long n;

    printf("Enter a number: ");
    scanf("%ld", &n);

    while (n > 0)
    {
        digit = n % 10;
        repeats[digit]++;
        n /= 10;
    }

    printf("\nRepeated digit(s): ");
    for(i = 0; i < SIZE; i++){
      if (repeats[i] > 1){
        printf("%d ", i);
      }
    }
    printf("\n");

    return 0;
}
