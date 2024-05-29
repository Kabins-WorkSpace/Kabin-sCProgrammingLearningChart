#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int a = 0, b = 1, c = 1, max;
    system("clear");
    printf("C   ||  BHARAT ACHARYA\n");
    printf("----------------------\n\n");
    printf("While Loops: Fibonacci Sequence\n\n");
    printf("Enter the max number        : ");
    scanf("%d", &max);
    printf("\nFibonacci Sequence till %d :  %d   %d   ", max, a, b);
    while (c <= max)
    {
        printf("%d   ", c);
        a = b;
        b = c;
        c = a + b;
    }
    printf("\n\n");
    return 0;
}