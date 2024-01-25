#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(void)
{
    float basic, da, hra, gross, esic, providentFund, netBeforeTax, tds, salaryInHand;
    const float conveyance = 1600, medical = 1250;

    system("clear");
    printf("C   |   BHARAT ACHARYA\n");
    printf("----------------------\n\n");
    printf("Salary Slip Generation\n\n");
    printf("Enter your basic salary : Rs. ");
    scanf("%f", &basic);
    printf("\nCalculating your bonus & allowance  \n");
    da = 0.1 * basic;
    hra = 0.5 * basic + da;
    printf("DA                          |  Rs. %.2f\n", da);
    printf("HRA                         |  Rs. %.2f\n", hra);
    printf("Conveyance                  |  Rs. %.2f\n", conveyance);
    printf("Medical                     |  Rs. %.2f\n\n", medical);
    printf("----------------------------------------------\n");
    gross = basic + da + hra + medical + conveyance;

    printf("Gross Salary                |  Rs. %.2f\n", gross);
    printf("----------------------------------------------\n\n");
    esic = 0.0475 * gross;
    providentFund = 0.12 * basic;
    printf("Calculating your deductions        \n");
    printf("ESIC                        |  Rs. %.2f\n", esic);
    printf("Provident Fund              |  Rs. %.2f\n\n", providentFund);
    netBeforeTax = gross - esic - providentFund;
    printf("----------------------------------------------\n");
    printf("Net Salary Before Tax       |  Rs. %.2f\n", netBeforeTax);
    printf("----------------------------------------------\n\n");
    tds = 0.05 * netBeforeTax;
    printf("Tax Deducted at Source, TDS |  Rs. %.2f\n\n", tds);
    salaryInHand = netBeforeTax - tds;
    printf("----------------------------------------------\n");
    printf("Your Net Salary             |  Rs. %.2f\n", salaryInHand);
    printf("----------------------------------------------\n\n");
    return 0;
}
