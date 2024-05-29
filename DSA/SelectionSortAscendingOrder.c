#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    system("clear");
    printf("C   ||  BHARAT ACHARYA\n");
    printf("----------------------\n\n");
    printf("Data Structure & Algorithm : Selection Sort\n\n");
    int size;
    int i, j;
    int temp, lowestPosition;
    printf("Enter the Number of Elements : ");
    scanf("%d", &size);
    int arr[size];
    printf("\nEnter %d Elements..\n", size);
    for(i = 0; i < size; i++){
        printf("[%2d] : ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("\nYour List         -> ");
    for (i = 0; i < size; i++)
    {
        printf("%3d", arr[i]);
        if (i < size - 1)
            printf(":   ");
        else
            printf(".");
    }
    for (i = 0; i < size - 2; i++)
    {
        lowestPosition = i;
        for (j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[lowestPosition])
            {
                lowestPosition = j;
            }
        }
        if(arr[i] != arr[lowestPosition]){
            temp = arr[i];
            arr[i] = arr[lowestPosition];
            arr[lowestPosition] = temp;
        }
    }
    printf("\nYour Updated List -> ");
    for (i = 0; i < size; i++)
    {
        printf("%3d", arr[i]);
        if (i < size - 1)
            printf(":   ");
        else
            printf(".");
    }
    printf("\n\n");
    return 0;
}