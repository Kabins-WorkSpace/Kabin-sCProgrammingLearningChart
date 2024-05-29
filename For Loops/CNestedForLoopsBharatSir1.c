#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(void)
{
    int i, j;
    system("clear");
    printf("C   |   BHARAT SIR\n");
    printf("------------------\n\n");
    printf("FOR LOOPS IN C\n\n");
    printf("Playing Around With Patterns\n\n");
    for (j = 1; j < 10; j++)
    {
        for (i = 1; i <= j; i++)
        {
            printf("%c", i);
        }
        printf("\n");
    }
    for (j = 10; j >= 1; j--)
    {
        for (i = 1; i <= j; i++)
        {
            printf("%c", i);
        }
        printf("\n");
    }
    printf("\n\n");
    return 0;
}