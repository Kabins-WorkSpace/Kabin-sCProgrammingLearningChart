#include<stdio.h>
#include<stdlib.h>
void displayASCIIValueAsc(char, char);
void displayASCIIValueDesc(char, char);
int main(void){

    

    system("clear");
    printf("C   ||  BHARAT ACHARYA\n");
    printf("----------------------\n\n");
    printf("Basics - Character Datatype\n\n");
    
    char ch1;
    char ch2;
    printf("Enter 1st character : ");
    scanf("%c", &ch1);
    getchar();
    printf("Enter 2nd character : ");
    scanf("%c", &ch2);
    printf("\n");
    printf("Initial Character : %c", ch1);
    printf("\nFinal Character   : %c", ch2);
    //getchar();
    printf("\n\n");
    if(ch1 <= ch2){
        displayASCIIValueAsc(ch1, ch2);
    }
    else if(ch1 >= ch2){
        displayASCIIValueDesc(ch1, ch2);
    }
    else
        printf("Invalid inputs");
    printf("\n\n\n");
    return 0;
}
void displayASCIIValueAsc(char a, char b){
    printf("Character           ASCII Value\n");
    printf("---------           -----------\n");
    for(int i = (int) a; i <=  (int) b; i++){
        char temp = i;
        printf("    %c                   %3d\n", temp, temp);
    }
    printf("\n");
}
void displayASCIIValueDesc(char a, char b){
    printf("Character           ASCII Value\n");
    printf("---------           -----------\n");
    for(int i =  (int) a; i >= (int) b; i--){
        char temp = i;
        printf("    %c                   %3d\n", temp, temp);
    }
    printf("\n");
}