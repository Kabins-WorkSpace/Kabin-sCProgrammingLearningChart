#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int num1, num2, num3, num4, sum, average;
    
    system("clear");
    printf("C   |   BHARAT ACHARYA\n");
    printf("----------------------\n\n");
    printf("* Calculation of Sum & Average of 4 Numbers\n\n");
    // printf("  -----------------------------------------\n\n");
    printf("Enter your first number  : ");
    scanf("%d", &num1);
    printf("Enter your second number : ");
    scanf("%d", &num2);
    printf("Enter your third number  : ");
    scanf("%d", &num3);
    printf("Enter your fourth number : ");
    scanf("%d", &num4);
    printf("\nWe have received your numbers: Calculations in process\n\n");
    sum = num1 + num2 + num3 + num4;
    printf("Sum is: %d \n", sum);
    average = sum / 4;
    printf("Average is: %d \n", average);
}