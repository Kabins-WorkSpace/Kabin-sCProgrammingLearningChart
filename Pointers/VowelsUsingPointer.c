/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int vowelCount(char *ptrArrName);
int main(void)
{
    int count = 30, vowels = 0;
    char arrName[count];
    char vowelInString;
    char *ptrArrName = arrName;
    system("clear");
    printf("C   ||  BHARAT ACHARYA\n");
    printf("----------------------\n\n");
    printf("Pointer : Vowel Count in a String...\n\n");
    printf("Enter a String   : ");
    fgets(ptrArrName, count, stdin);
    //printf("\nVowel Characters : ");
    vowels = vowelCount(ptrArrName);
    printf("\nNumber of Vowels : %d\n", vowels);
    //printf("Vowels : %c", vowelPrint(ptrArrName));
    printf("\n\n");
    return 0;
}

int vowelCount(char *ptrArrName){
    int vowel = 0;
    while (*ptrArrName != '\0')
    {
        switch (*ptrArrName++)
        {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            vowel++;
            //printf("%c", *ptrArrName++);
            break;
        default:
            break;
        }
    }
    return vowel;
}
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int calculateVowelCount(char*);
int main(void){
    int count = 30, vowels = 0;
    char strName[count];
    char *ptrStrName = strName;
    system("clear");
    printf("C   ||  BHARAT ACHARYA\n");
    printf("----------------------\n\n");
    printf("Pointer : Identifying No. of Vowels & Consonants\n\n");
    printf("Enter a String  : ");
    fgets(strName, count, stdin);
    printf("\nEntered String  : %s", strName);
    vowels = calculateVowelCount(ptrStrName);
    printf("\nVowel Count : %d", vowels);
    printf("\n\n");
    return 0;
}
int calculateVowelCount(char *ptrString){
    int totalVowel = 0;
    while(*ptrString != '\0'){
        switch(*ptrString++){
            case 'a':
            case 'A':
            case 'e':
            case 'E':
            case 'i':
            case 'I':
            case 'o':
            case 'O':
            case 'u':
            case 'U':
                totalVowel++;
                break;
            default:
                break;
        }
    }
    return totalVowel;
}