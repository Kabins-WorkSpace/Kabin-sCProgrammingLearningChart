#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int a, b, sum, dif, pro, div, rem, choice;
    system("clear");
    printf("C   |   BHARAT ACHARYA\n");
    printf("----------------------\n\n");
    printf("Menu Driven Calculator\n\n");
    printf("Enter first number,  a : ");
    scanf("%d", &a);
    printf("Enter second number, b : ");
    scanf("%d", &b);
    printf("\nYour options are : \n");
    printf("1) Add\n");
    printf("2) Subtract\n");
    printf("3) Product\n");
    printf("4) Division\n");
    printf("5) Invalid Selection\n");
    printf("\nEnter your option  : ");
    scanf("%d", &choice);
    printf("\n");
    switch (choice)
    {
    case 1:
        sum = a + b;
        printf("Sum of %d & %d = %d", a, b, sum);
        break;
        

    case 2:
        dif = a - b;
        printf("Difference between %d & %d = %d", a, b, dif);
        break;

    case 3:
        pro = a * b;
        printf("Product of %d & %d = %d", a, b, pro);
        break;

    case 4:
        div = a / b;
        rem = a % b;
        printf("Division of %d by %d = %d(quotient) & %d(remainder)", a, b, div, rem);
        break;

    default:
        printf("Invalid Selection, try again!!!");
        break;
    }
    printf("\n\n");
    return 0;
}
