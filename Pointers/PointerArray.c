#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
    int i, j, k, temp;
    int count = 30;
    char arrName[count];
    char *ptrArrName = arrName;
    system("clear");
    printf("C   ||  BHARAT ACHARYA\n");
    printf("----------------------\n\n");
    printf("Pointer : Accessing an Array\n\n");
    printf("Enter name   : ");
    fgets(ptrArrName, count, stdin);
    printf("\nEntered Name : ");
    while (*ptrArrName != '\0')
    {
        printf("%c", *ptrArrName++);
        ptrArrName++;
    }
    printf("\n\n");
    return 0;
}