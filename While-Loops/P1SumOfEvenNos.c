#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int num = 0, sum = 0, max;

    system("clear");
    printf("C   ||  BHARAT ACHARYA\n");
    printf("----------------------\n\n");
    printf("While loops: Sum of Even Numbers\n\n");
    printf("Enter max number  : ");
    scanf("%d", &max);
    printf("\nEven Number      ||   Sum after including it\n");
    printf("-----------           ----------------------\n\n");
    while (num <= max)
    {
        if (num % 2 == 0)
        {
            sum = sum + num;
            printf("   %3d           ||        %4d     ", num, sum);
            printf("\n\n");
        }
        num++;
    }
    printf("\n\n");
    return 0;

}
