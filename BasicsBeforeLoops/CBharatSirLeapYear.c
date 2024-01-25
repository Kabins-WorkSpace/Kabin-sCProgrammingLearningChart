#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(void)
{
    int year;
    system("clear");
    printf("C   |   KABIN THAPA\n");
    printf("-------------------\n\n");
    printf("Program To Check The Leap Year\n\n");
    printf("Enter year : ");
    scanf("%d", &year);
    ((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0))) ? printf("\n%d is a leap year!!", year) : printf("\n%d isn't a leap year!!", year);
    printf("\n\n");
}