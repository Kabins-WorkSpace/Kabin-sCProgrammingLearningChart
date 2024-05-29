#include<stdio.h>
#include<stdlib.h>
int max(int, int, int);
int min(int, int, int);

int main(void){
    
    system("clear");
    printf("C   ||  BHARAT ACHARYA\n");
    printf("----------------------\n\n");
    printf("Functions || Max & Min\n\n");

    int a, b, c;
    int maximum, minimum;
    printf("Enter 1st Number : ");
    scanf("%d", &a);
    printf("Enter 2nd Number : ");
    scanf("%d", &b);
    printf("Enter 3rd Number : ");
    scanf("%d", &c);
    printf("\n");
    maximum = max(a, b, c);
    printf("Maximum of %d, %d & %d = %d\n", a, b, c, maximum); 
    minimum = min(a, b, c);
    printf("Minimum of %d, %d & %d = %d", a, b, c, minimum); 
    printf("\n\n\n");
    return 0;
}
int max(int x, int y, int z){
    int max = x;
    if(y > x)
        max = y;
    if(z > max)
        max = z;
    return max;
}
int min(int x, int y, int z){
    int min = x;
    if(y < x)
        min = y;
    if(z < min)
        min = z;
    return min;
}
    
    
