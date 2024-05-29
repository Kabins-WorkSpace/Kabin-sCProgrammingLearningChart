#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(void)
{
    char strName[100];
    char sortedString[100];
    char temp;
    int strLength;
    system("clear");
    printf("C   ||  BHARAT ACHARYA\n");
    printf("----------------------\n\n");
    printf("Sorting of a String...\n\n");
    printf("Enter your string : ");
    fgets(strName, 100, stdin);
    printf("\nEntered string : %s", strName);
    printf("\n");
    strLength = strlen(strName) - 1;
    // printf("length = %d", strLength);

    for (int i = 0; i <= strLength; i++)
    {
        sortedString[i] = strName[i];
    }
    for (int i = 0; i < strLength - 1; i++)
    {
        for (int j = 0; j < strLength - 1 - i; j++)
        {
            if (sortedString[j] > sortedString[j + 1])
            {
                temp = sortedString[j];
                sortedString[j] = sortedString[j + 1];
                sortedString[j + 1] = temp;
            }
        }
    }
    printf("Sorted String  : ");
    for (int i = 0; i <= strLength; i++)
    {
        printf("%c", sortedString[i]);
    }
    printf("\n\n");
    return (0);
}

