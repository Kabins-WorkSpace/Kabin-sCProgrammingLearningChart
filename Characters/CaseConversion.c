#include<stdio.h>
#include<stdlib.h>
void upperToLowerCase(char);
void lowerToUpperCase(char);
int main(void){

    char ch;

    system("clear");
    printf("C   ||  BHARAT ACHARYA\n");
    printf("----------------------\n\n");
    printf("Character Datatype || Case Conversion\n\n");
    printf("Enter a character : ");
    scanf("%c", &ch);
    printf("\nCharacter Entered : %c\n\n", ch);
    if((ch >= 65) && (ch <=90)){
        upperToLowerCase(ch);
    }
    else if((ch >= 97) && (ch <= 122)) {
        lowerToUpperCase(ch);
    }
    else{
        printf("Invalid Character. Enter English Alphabet for Conversion!");
    }
    printf("\n\n\n");
    return 0;
}
void lowerToUpperCase(char chh){
    printf("LowerCase Character               :   %c\n", chh);
    printf("It's ASCII Value                  : %3d\n\n", chh);
    chh -= 32;
    printf("Corresponding UpperCase Character :   %c\n",  chh);
    printf("It's ASCII Value                  : %3d\n\n",  chh);
}
void upperToLowerCase(char ch){
    printf("Uppercase Character               :   %c\n", ch);
    printf("It's ASCII Value                  : %3d\n\n", ch);
    ch += 32;
    printf("Corresponding Lowercase Character :   %c\n", ch);
    printf("It's ASCII Value                  : %3d\n\n", ch);
}
