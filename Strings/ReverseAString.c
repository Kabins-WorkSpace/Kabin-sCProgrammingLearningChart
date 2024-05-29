/*#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void stringReversal(char *ptrStrName);
int main(void)
{
    char strName[100];
    char *ptrStrName = strName;
    system("clear");
    printf("C   ||  BHARAT ACHARYA\n");
    printf("----------------------\n\n");
    printf("Reverse of a String...\n\n");

    printf("Enter your string : ");
    fgets(strName, 100, stdin);
    printf("\nEntered  String   : %s", strName);
    stringReversal(ptrStrName);
    printf("Reversed String   : %s", strName);
    printf("\n\n");
    return (0);
}
void stringReversal(char *ptrStrName)
{
    int strLength;
    char *ptrReverse;
    char temp;
    strLength = strlen(ptrStrName) - 2;
    ptrReverse = ptrStrName + strLength;
    while (ptrStrName < ptrReverse)
    {
        temp = *ptrStrName;
        *ptrStrName = *ptrReverse;
        *ptrReverse = temp;
        ptrStrName++;
        ptrReverse--;
    }
}
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void stringReversal(char*);
int main(void)
{ 
    int count = 100;
    char strName[count];
    char *ptrStrName = strName;
    system("clear");
    printf("C   ||  BHARAT ACHARYA\n");
    printf("----------------------\n\n");
    printf("Pointer : String Reversal\n\n");
    printf("Enter a String  : ");
    fgets(strName, count, stdin);
    printf("\nEntered String  : %s", strName);
    stringReversal(ptrStrName);
    printf("Reversed String : %s", strName);
    printf("\n\n");
    return 0;
}
void stringReversal(char *ptrString){
    int strLength;
    char *ptrReverse;
    char temp;
    strLength = strlen(ptrString) - 2;
    ptrReverse = ptrString + strLength;
    while(ptrString < ptrReverse){
        temp = *ptrString;
        *ptrString = *ptrReverse;
        *ptrReverse = temp;
        ptrString++;
        ptrReverse--;
    }
}