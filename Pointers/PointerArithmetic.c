#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
    int i, j, k, temp;
    int count = 7;
    char arrName[7] = "Kabin";
    char *ptrArrName = arrName;
    system("clear");
    printf("C   ||  BHARAT ACHARYA\n");
    printf("----------------------\n\n");
    printf("Pointer : Accessing an Array\n\n");
    for(int i = 0; i < count; i++){
        printf("%c  ", *ptrArrName++);
    }

    printf("\n\n");
    return 0;
}