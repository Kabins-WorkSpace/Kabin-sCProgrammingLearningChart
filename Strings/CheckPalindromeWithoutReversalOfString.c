#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(void){
    char strName[100], strReverse[100];
    unsigned int strLength;
    int palindromeFlag = 1;
    system("clear");
    printf("C   ||  BHARAT ACHARYA\n");
    printf("----------------------\n\n");
    printf("String : Reversal  &  Palindrome Check\n");
    printf("------   --------     ---------- -----  \n\n");
    printf("Enter a String  : ");
    fgets(strName, 100, stdin);
    printf("\n");
    strLength = strlen(strName) - 2;
    for(int i = 0; i <= strLength; i++){
        strReverse[i] = strName[strLength - i];
    }
    for(int i = 0; i <= strLength; i++){
        if(strName[i] != strReverse[i])
            palindromeFlag = 0;
    }
    printf("Entered  String : %s", strName);
    printf("Reversed String : %s\n\n", strReverse);
    if(palindromeFlag == 1)
        printf("Since entered string == reversed string, given string is a Palindrome!!");
    else
        printf("Since entered string != reversed string, given string isn't a Palindrome!!");  
    printf("\n\n");
    return 0;
}