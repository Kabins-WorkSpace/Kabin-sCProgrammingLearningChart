#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
    int count = 100, strLength;
    char strName[count];
    char tempString[count];
    char *ptrStrName = strName;
    system("clear");
    printf("C   ||  BHARAT ACHARYA\n");
    printf("----------------------\n\n");
    printf("Pointer : String Reversal\n\n");
    printf("Enter a String  : ");
    fgets(strName, count, stdin);
    printf("\nEntered String  : %s", strName);
    strLength = strlen(strName) - 2;
    for (int i = 0; i <= strLength; i++)
    {
        tempString[i] = strName[strLength - i];
    }
    printf("Reversed String : %s", tempString);
    printf("\n\n");
    return 0;
}