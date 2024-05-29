#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int fact = 1, num = 0, temp;
    system("clear");
    printf("C   ||  BHARAT ACHARYA");
    printf("\n-------------------");
    printf("\n\ndo While : Factorial of a Number\n\n");
    printf("Enter a number : ");
    scanf("%d", &num);
    if (num != 0)
    {
        do
        {
            fact = fact * num;
            num = num - 1;
        } while (num > 1);
    }
    printf("\nFactorial      : %d", fact);
    printf("\n\n");
    return 0;
}