#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int a, b, c;
    system("clear");
    printf("C   |   Bharat Acharya\n");
    printf("-----------------------\n\n");
    printf("scanf & Variables   \n\n");
    printf("Please Enter a: ");
    scanf("%d", &a);
    printf("Please Enter b: ");
    scanf("%d", &b);
    printf("Here, a = %d & b = %d", a, b);
    printf("\n\nAnd results are...\n\n");
    c = a + b;
    printf("Sum : a + b = %d \n", c);
    c = a - b;
    printf("Difference : a - b = %d \n", c);
    c = a * b;
    printf("Product : a * b = %d \n", c);
    c = a / b;
    printf("Division : a / b = %d  (Q)\n", c);
    c = a % b;
    printf("Division : a / b = %d  (R) \n", c);
}
