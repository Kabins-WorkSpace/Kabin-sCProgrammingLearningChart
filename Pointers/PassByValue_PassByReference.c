#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void swapByValue(int a, int b);
void swapByReference(int *ptra, *ptrb);
int main(void)
{ 
    int a = 40, b = 80;
    int *ptrA = &a, *ptrB = &b;
    system("clear");
    printf("C   ||  BHARAT ACHARYA\n");
    printf("----------------------\n\n");
    printf("Pointer : Pass by Value & Pass by Reference\n\n");
    printf("Original Value...\n");
    printf(" a = %d, b = %d\n\n", a, b);
    swapByValue(a, b);
    printf("Pass By Value...\n");
    printf(" a = %d, b = %d\n\n", a, b);
    swapByReference(ptrA, ptrB);
    printf("Pass By Reference..\n");
    printf(" a = %d, b = %d\n\n", a, b);
    printf("\n\n");
    return 0;
}
void swapByValue(int a, int b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}
void swapByReference(int *ptra, *ptrb){
    int temp;
    temp = *ptra;
    *ptra = *ptrb;
    *ptrb = temp;    
}
/*
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void stringReversal(char*);
int main(void){
    char strName[100];
    char *ptrStrName = strName;
    system("clear");
    printf("C   ||  BHARAT ACHARYA\n");
    printf("----------------------\n\n");
    printf("Pointer : String Reversal...\n\n");
    printf("Enter a String  : ");
    fgets(strName, 100, stdin);
    printf("\nEntered String  : %s", strName);
    stringReversal(ptrStrName);
    printf("Reversed String : %s", strName);
    printf("\n\n");
    return 0;
}
void stringReversal(char *ptrString){
    char temp;
    char *ptrRear;
    int strLength;
    strLength = strlen(ptrString) - 2;
    ptrRear = ptrString + strLength;
    while(ptrString < ptrRear){
        temp = *ptrString;
        *ptrString = *ptrRear;
        *ptrRear = temp;
        ptrString++;
        ptrRear--;
    }
}*/