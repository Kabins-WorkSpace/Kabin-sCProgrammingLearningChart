#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(void)
{
    int num;
    system("clear");
    printf("C   |   KABIN THAPA\n");
    printf("--------------------\n\n");
    printf("To Check Whether The Number is Positive, Negative or Zero\n\n");
    printf("Enter any number : ");
    scanf("%d", &num);
    (num > 0) ? printf("\nNumber is positive!!!") : (num < 0) ? printf("\nNumber is negative!!!") : printf("\nNumber is zero!!!");
    printf("\n\n");
    return 0;
}
