#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    float a;
    system("clear");
    printf("C   |   BHARAT ACHARYA\n");
    printf("----------------------\n");
    printf("\nFloating Data Type\n\n");
    printf("Enter any number : ");
    scanf("%f", &a);
    printf("The number is    : %f \n", a);
    printf("The number is    : %4.2f \n", a);
    printf("The number is    : %4.0f \n", a);
    printf("The number is    : %.0f \n", a);
    printf("The number is    : %4f \n", a);
    printf("The number is    : %g \n", a);
    printf("The number is    : %8g \n", a);
    return 0;
}