#include <stdio.h>

void pb(int n);

int main(void)
{
    int n ;

    printf("\nEnter a number: ");
    scanf("%d", &n);
    pb(n);
    printf("\n");

    return 0;
}

void pb(int n)
{
    if (n != 0) {
        pb(n / 2);
        putchar('0' + n % 2);
    }
}

// Function recursively divides a number by 2.
// Once division has recursively evaluated to 0
// the program returns up the stack frames printing
// either a 0 or 1 by calculating the remainder of the division of n by 2
// at that particular stack frame.
