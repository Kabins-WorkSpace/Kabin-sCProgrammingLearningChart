#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int num, rem=0, rev = 0, org;
    system("clear");
    printf("C   ||  BHARAT ACHARYA\n");
    printf("----------------------\n\n");
    printf("While Loops: Reverse a Number & Check For Palindrome\n\n");
    printf("Enter the number      : ");
    scanf("%d", &num);
    org = num;
    while (num != 0)
    {
        rem = num % 10;
        rev = rev * 10 + rem;
        num = num / 10;
    }
    printf("\nReverse of the number : %d", rev);
    if (org == rev)
    {
        printf("\n\nAs you can see, %d is a palindrome number!!", org);
    }
    else
    {
        printf("\n\nAs you can see, %d isn't a palindrome number!!", org);
    }
    printf("\n\n");
    return 0;
}