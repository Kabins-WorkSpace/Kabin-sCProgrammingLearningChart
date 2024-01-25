#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(void)
{
    int a, b, max;
    system("clear");
    printf("C   |   BHARAT ACHARYA\n");
    printf("-----------------------\n\n");
    printf("IF ELSE IF\n\n");
    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);
    if(a > b)
        max = a;
    else 
        max = b;
    printf("\nHigher number is %d", max);
    printf("\n\n");
    return 0;
}
