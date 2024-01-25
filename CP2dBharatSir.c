#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int num, rem, rev = 0;

    system("clear");
    printf("C   |   BHARAT ACHARYA\n");
    printf("----------------------\n\n");
    printf("Reverse a five digit number\n\n");
    printf("Enter any five digit number     : ");
    scanf("%d", &num);
    rem = num % 10;
    rev = rev + rem * 10000;
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
    rev = rev + rem * 1;
    printf("After reversing, the number is  : %d \n\n", rev);

}
  
