#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(void)
{
    int num, rem, rev, temp;
    system("clear");
    printf("C   |   KABIN THAPA\n");
    printf("--------------------\n\n");
    printf("Palindrome For 5 Digit Number\n\n");
    printf("Enter a 5 digit number : ");
    scanf("%d", &num);
    temp = num;
    rem = num % 10;
    rev = rem * 10000;
    num = num / 10;
    rem = num % 10;
    rev = rev + rem * 1000;
    num = num / 10;
    rem = num % 10;
    rev = rev + rem * 100;
    num = num / 10;
    rem = num % 10;
    rev = rev + rem * 10;
    num = num / 10;
    rem = num % 10;
    rev = rev + rem;
    num = temp;
    (num == rev) ? printf("\n%d is a palindrome number!!", num) : printf("\n%d isn't a palindrome number!!", num);
    printf("\n\n");
    return 0;
}