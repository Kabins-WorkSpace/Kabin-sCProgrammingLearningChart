#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(void)
{
    int runs, balls;
    float sr;
    system("clear");
    printf("C   |   BHARAT ACHARYA\n");
    printf("----------------------\n\n");
    printf("Understand Floating Point Numbers\n\n");

    printf("Enter the number of runs scored   : ");
    scanf("%d", &runs);
    printf("\nEnter the number of balls faced   : ");
    scanf("%d", &balls);
    printf("\n\nCalculating your strike rate, please wait : \n\n");
    sr = (float)runs / balls * 100;
    printf("Your strike rate is : %.2f\n\n", sr);
    return 0;
}