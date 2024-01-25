#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int num1, num2, temp;

    system("clear");
    printf("C   |   BHARAT ACHARYA\n");
    printf("----------------------\n\n");
    printf("Exchange using temp\n");
    printf("Enter num1  : ");
    scanf("%d", &num1);
    printf("Enter num2  : ");
    scanf("%d", &num2);
    temp = num1;
    num1 = num2;
    num2 = temp;
    printf("\nNow, after exchanging the two numbers: \n\n");
    printf("num1 = %d & num2 = %d\n\n", num1, num2);
    return 0;
}