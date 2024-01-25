#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(void)
{
    int a, b, choice, sum, dif, pro, div, rem;
    system("clear");
    while (choice != 5)
    {
        printf("C   |   KABIN THAPA\n");
        printf("--------------------\n\n");
        printf("Menu Driven Calculator\n\n");
        printf("\nEnter First Number  : ");
        scanf("%d", &a);
        printf("Enter Second Number : ");
        scanf("%d", &b);
        printf("\nYour choices are, \n");
        printf("1) Addition     \n");
        printf("2) Subtraction  \n");
        printf("3) Product      \n");
        printf("4) Division     \n");
        printf("5) End          \n\n");
        printf("Enter your choice :  ");
        scanf("%d", &choice);
        if(choice != 5)
        {
            printf("\nPerforming the calculation of your choice : \n\n");
        }

        if (choice == 1)
        {
            printf("Addition : \n\n");
            sum = a + b;
            printf("a + b : %d", sum);
        }

        else if (choice == 2)
        {
            printf("Subtraction : \n\n");
            dif = a - b;
            printf("a - b : %d", dif);
        }

        else if (choice == 3)
        {
            printf("Product : \n\n");
            pro = a * b;
            printf("a * b : %d", pro);
        }

        else if (choice == 4)
        {
            printf("Division : \n\n");
            div = a / b;
            rem = a % b;
            printf("a / b : %d (Quotient) %d(Remainder)", div, rem);
        }

        else if (choice == 5)
        {
            printf("Come back soon when you need me ;) ");
        }
        else
        {
            printf("Invalid Selection");
        }
        printf("\n\n");
    }
    printf("\n\n");
    return 0;
}