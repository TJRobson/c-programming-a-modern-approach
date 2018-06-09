/* Chapter 8 Programming Project 2 */
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

    printf("\nDigit:      ");
    for (i = 0; i < SIZE; i++) {
      printf("%d ", i);
    }

    printf("\nOccurances: ");
    for(i = 0; i < SIZE; i++){
      printf("%d ", repeats[i]);
    }
    printf("\n");

    return 0;
}
