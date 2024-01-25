#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int num1, num2;

    system("clear");
    printf("C   |   BHARAT ACHARYA\n");
    printf("----------------------\n\n");
    printf("Exchange without using temp\n");
    printf("Enter num1 : ");
    scanf("%d", &num1);
    printf("Enter num2 : ");
    scanf("%d", &num2);
    printf("\nYour entered numbers are num1 = %d & num2 = %d!!! \n", num1, num2);
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;
    printf("\nAfter the exchange, two numbers look like : \n\n");
    printf("num1 = %d & num2 = %d!!!\n\n", num1, num2);
}