#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int num, sum = 0, avg = 0, max = 0, count, i;
    system("clear");
    printf("C   ||  BHARAT ACHARYA\n");
    printf("----------------------\n\n");
    printf("For Loops : Sum\n\n");
    printf("Enter count : ");
    scanf("%d", &count);
    printf("\n");
    for (i = 0; i < count; i++)
    {
        printf("Enter num %d : ", i + 1);
        scanf("%d", &num);
            sum = sum + num;
        avg = sum / (i + 1);
        if (num > max)
        {
            max = num;
        }
        printf("Sum = %d, Avg = %d, Max = %d\n\n", sum, avg, max);
    }
    printf("\n\n");
    return 0;
}
