#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int num, bit;

    system("clear");
    printf("C   ||  BHARAT ACHARYA\n");
    printf("----------------------\n\n");
    printf("Decimal TO Binary Conversion\n\n");
    printf("Enter any number  : ");
    scanf("%d", &num);
    printf("\nBinary Equivalent : ");
    if (num == 0)
    {
        printf("%d", num);
    }
    while (num != 0)
    {
        bit = num % 2;
        printf("\n                    %d", bit);
        num = num / 2;
    }
    printf("\n\nAnswer is in reverse order!!!");
    printf("\n\n");
    return 0;
}