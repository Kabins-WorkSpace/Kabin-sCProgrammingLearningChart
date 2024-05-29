#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int num, i;
    system("clear");
    printf("C   |   BHARAT ACHARYA\n");
    printf("-----------------------\n\n");
    printf("Calculate Square Till User Exits\n\n");
    printf("Enter desired number : ");
    scanf("%d", &num);
    printf("\nNumber = %d || Square = %d", num, num * num);
    printf("\n\nContinue Further? Yes : Press 1; No : Press 0");
    printf("\n\nYour Choice : ");
    scanf("%d", &i);
    while (i == 1)
    {
        system("clear");
        printf("C   |   BHARAT ACHARYA\n");
        printf("-----------------------\n\n");
        printf("Calculate Square Till User Exits\n\n");
        printf("Enter desired number : ");
        scanf("%d", &num);
        printf("\nNumber = %d || Square = %d", num, num * num);
        printf("\n\nContinue Further? Yes : Press 1; No : Press 0");
        printf("\n\nYour Choice : ");
        scanf("%d", &i);
        printf("\n\n");
    }
    printf("\n\n");
    return 0;
}
