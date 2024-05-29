#include<stdio.h>
#include<stdlib.h>
#define count 10
int main(void){
    system("clear");
    printf("C   ||  BHARAT ACHARYA\n");
    printf("----------------------\n\n");
    printf("Data Structure & Algorithm : Binary Search\n\n");
    int low = 0, high, mid, value;
    int i, j;
    int arr[count] = {3, 8, 17, 24, 33, 41, 49, 58, 72, 83};
    
    //Display the list
    printf("Your List --> ");
    for(i = 0; i < count; i++){
        printf("%3d", arr[i]);
        if(i < count - 1)
            printf(":   ");
    }
    printf("\n\nEnter Search Element : ");
    scanf("%d", &value);
    //Calculation of High & Mid value
    high = count - 1;
    mid = (low + high) / 2;
    
    //Main loop to find the value
    printf("\nResult : ");
    while(low <= high){
        if(value == arr[mid]){
            printf("%d found at Index %d!", value, mid);
            break;
        }
        else if(value < arr[mid]){
            high = mid - 1;
            mid = (low + high) / 2;
        }
        else{
            low = mid + 1;
            mid = (low + high) / 2;
        }
    }
    if(low > high)
        printf("%d not found!!", value);
    printf("\n\n");
    return 0;
}