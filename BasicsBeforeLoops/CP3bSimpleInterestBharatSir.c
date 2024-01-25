#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    float p, n, r, si, tds, finalIncome, incomeBeforeTax;
    int choice=1;
    
    while (choice == 1)
    {
        system("clear");
        printf("C   |   BHARAT ACHARYA\n");
        printf("-----------------------\n\n");
        printf("Simple Interest Calculations\n\n");
        printf("Enter principal             | Rs.  ");
        scanf("%f", &p);
        printf("\nEnter number of years       | ");
        scanf("%f", &n);
        printf("\nEnter rate of interest      | ");
        scanf("%f", &r);
        printf("\nCalculating, please wait    !!!! \n\n");
        si = p * n * r / 100;
        printf("Interest before tax         | Rs. %0.2f\n", si);
        tds = 0.1 * si;
        printf("Tax Deducted at Source, TDS | Rs. %0.2f\n", tds);
        incomeBeforeTax = p + si;
        printf("Income before Tax.          | Rs. %0.2f\n", incomeBeforeTax);
        finalIncome = incomeBeforeTax - tds;
        printf("Maturity Amount.            | Rs. %0.2f\n\n", finalIncome);
        printf("Do you wish to repeat? \nIf Yes, Press 1; Else Press 0 |  ");
        scanf("%d", &choice);
        printf("\n\n");

    }
    if (choice == 0)
    {
        printf("\n\nCome back again when you need me :)");
    }
    printf("\n\n");
    return 0;
}