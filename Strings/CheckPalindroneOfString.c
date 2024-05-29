#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(void)
{
    char strName[100];
    char reversedString[100];
    char temp;
    int strLength, flag = 1;
    system("clear");
    printf("C   ||  BHARAT ACHARYA\n");
    printf("----------------------\n\n");
    printf("Reverse and Palindrome Check of a String...\n\n");
  
    printf("Enter your string : ");
    fgets(strName, 100, stdin);
    printf("\nEntered  String   : %s", strName);
    strLength = strlen(strName) - 2;
    for (int i = 0; i <= strLength; i++)
    {
            reversedString[i] = strName[strLength - i];
        }
    printf("Reversed String   : %s", reversedString);
    printf("\n\n");

    for(int i = 0; i <= strLength; i++){
        if(strName[i] != reversedString[i])
            flag = 0;

    }
    if(flag == 1){
        printf("Since entered string & reversed string are same, it is a palindrome!");
    }
    else
        printf("Since entered string & reversed string aren't same, it isn't a palindrome!");
    printf("\n\n");
    return (0);
}
