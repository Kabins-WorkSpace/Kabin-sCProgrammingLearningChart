#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    system("clear");
    printf("C   ||  BHARAT ACHARYA\n");
    printf("----------------------\n\n");
    printf("Data Structure & Algorithm : Selection Sort (Descending Order)\n\n");
    int i, j, count, temp, max;
    printf("Enter the Number of Elements : ");
    scanf("%d", &count);
    int arr[count];
    // Input Array Elements from User
    printf("\nEnter %d Elements...\n", count);
    for(i = 0; i < count; i++){
        printf("[%2d] : ", i + 1);
        scanf("%d", &arr[i]);
    }
    // Display Initial List
    printf("\nYour List         --> ");
    for(i = 0; i < count; i++){
        printf(" %3d", arr[i]);
        if(i < count - 1)
            printf(":  ");
    }
    // Selection Sort Algorithm
    for(i = 0; i < count - 1; i++){
        max = i;
        for(j = i + 1; j < count; j++){
            if(arr[j] > arr[max])
                max = j;
        }
        if(max != i){
            temp = arr[i];
            arr[i] = arr[max];
            arr[max] = temp;
        }
    }
     // Display Updated List
    printf("\nYour Updated List --> ");
    for(i = 0; i < count; i++){
        printf(" %3d", arr[i]);
        if(i < count - 1)
            printf(":  ");
    }
    printf("\n\n");
    return 0;
}