#include<stdio.h>
#include<stdlib.h>
void upperCase(char);
void lowerCase(char);
int main(void){

    char ch;

    system("clear");
    printf("C   ||  BHARAT ACHARYA\n");
    printf("----------------------\n\n");
    printf("Character Datatype || Checking Vowel or Consonant\n\n");
    printf("Enter a character : ");
    scanf("%c", &ch);
    printf("\nCharacter Entered                :  %c\n", ch);
    if((ch >= 65) && (ch <=90)){
        upperCase(ch);
    }
    else if((ch >= 97) && (ch <= 122)) {
        lowerCase(ch);
    }
    else{
        printf("Invalid Character. Enter English Alphabet for determination!");
    }
    printf("\n\n\n");
    return 0;
}
void lowerCase(char ch){
    printf("It's ASCII Value                 : %3d\n", ch);
    if(ch == 97 || ch == 101 || ch == 105 || ch == 111 || ch == 117){
        printf("Character Type                   : LowerCase Vowel");
    }   
    else{
        printf("Character Type                   : LowerCase Consonant");
    }
}
void upperCase(char ch){
    printf("It's ASCII Value                 : %3d\n", ch);
    if(ch == 65 || ch == 69 || ch == 73 || ch == 79 || ch == 85){
        printf("Character Type                   :  UpperCase Vowel");
    }
    else{
        printf("Character Type                   :  UpperCase Consonant");
    }
}
