#include<stdio.h>
#include<stdlib.h>
void factorial(int);
int main(void){
    int x;
    system("clear");
    printf("C   ||  BHARAT ACHARYA\n");
    printf("----------------------\n\n");
    printf("Functions || Basic Understanding\n\n");
    x = factorial(10);
    printf("Factorial of 10 = %d\n\n", x);
    x = factorial(7);
    printf("Factorial of 7 = %d\n\n", x);
   
    printf("\n\n\n");
    return 0;
}
 int factorial(int num){
    int fact = 1;
    for(int i = 1; i <= num; i++){
        fact = fact * i;
    }
    return fact;
    }