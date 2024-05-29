#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int balance = 100000, choice, amount;
    system("clear");
    printf("C   ||  BHARAT ACHARYA");
    printf("\n-------------------");
    printf("\n\nATM Withdrawal Screen");
    do
    {
        printf("\n\n1. Withdraw || 2. Exit");
        printf("\nEnter your choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("\nYour Account Balance : %d", balance);
            printf("\nWithdrawl Amount : ");
            scanf("%d", &amount);
            if (amount <= balance)
            {
                printf("\nTransaction successful...Collect your cash!!");
                balance = balance - amount;
                printf("\nUpdated Balance : %d", balance);
            }
            else
            {
                printf("\nInsufficient Balance!");
            }
            break;

        case 2:
            printf("\n\nThank you... Visit Again!!");
            break;

        default:
            printf("\n\nInvalid Input...Try Again!!");
            break;
        }
    } while (choice != 2);
    printf("\n\n");
    return 0;
}