#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    system("clear");
    printf("C   ||  BHARAT ACHARYA\n");
    printf("----------------------\n\n");
    printf("Data Structure & Algorithm : Binary Search (Graphical Display)\n\n");
    int i, j, temp, min, count, low, high, mid, value;
    //Input List from User
    printf("Enter the Number of Elements : ");
    scanf("%d", &count);
    int arr[count];
    printf("\nEnter %d Elements..\n", count);
    for (i = 0; i < count; i++)
    {
        printf("[%2d] : ", i + 1);
        scanf("%d", &arr[i]);
    }
    //Display Initial List
    printf("\nYour Initial List --> ");
    for (i = 0; i < count; i++)
    {
        printf(" %3d", arr[i]);
        if (i < count - 1)
            printf(": ");
    }
    //Selection Sort Algorithm
    for(i = 0; i < count - 1; i++){
        min = i;
        for(j = i + 1; j < count; j++){
            if(arr[j] < arr[min])
                min = j;
        }
        if(min != i){
            temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }
    }
    //Display Updated List
    printf("\nYour Sorted  List --> ");
    for (i = 0; i < count; i++)
    {
        printf(" %3d", arr[i]);
        if (i < count - 1)
            printf(": ");
    }
    //Binary Search
    printf("\n\nEnter Search Element : ");
    scanf("%d", &value);
    low = 0;
    high = count - 1;
    mid = (low + high) / 2;
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
    if(low > high){
        printf("%d not found!", value);
    }
    printf("\n\n");
    return 0;
}