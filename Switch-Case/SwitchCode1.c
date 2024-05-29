#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int a;
    system("clear");
    printf("C   |   BHARAT ACHARYA\n");
    printf("----------------------\n\n");
    printf("Learning Switch Case\n\n");
    printf("Enter a : ");
    scanf("%d", &a);
    printf("\n");
    switch (a)
    {
    case 1:
        printf("a = %d", a);
        break;

    case 2:
        printf("a = %d", a);
        break;

    case 3:
        printf("a = %d", a);
        break;

    case 4:
        printf("a = %d", a);
        break;

    default:
        printf("Invalid Selection");
        break;
    }
    printf("\n\n");
    return 0;
}