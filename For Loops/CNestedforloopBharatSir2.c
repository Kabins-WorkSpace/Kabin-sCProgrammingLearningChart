#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int i, j;
    system("clear");
    printf("C   |   BHARAT ACHARYA\n");
    printf("----------------------\n\n");
    printf("Printing Stars In Rows\n\n");
    for (j = 0; j < 10; j++)
    {
        for (i = 0; j <= 9; i++)
        {
            printf("*  ");
        }
        printf("\n");
    }
    printf("\n\n");
}