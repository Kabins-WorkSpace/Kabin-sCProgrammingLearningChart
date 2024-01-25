#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(void)
{
    const float pi = 3.142;
    float r, d, circum, area;
    system("clear");
    printf("C   |   BHARAT ACHARYA\n");
    printf("----------------------\n\n");
    printf("Circle Calculations\n\n");
    printf("Enter the radius of circle : ");
    scanf("%f", &r);
    printf("\n\nCalculating, please wait: \n\n");
    d = r * 2;
    circum = 2 * pi * r;
    area = pi * r * r;
    printf("Diameter      = %.2f\n", d);
    printf("Circumference = %.2f\n", circum);
    printf("Area          = %.2f\n\n", area);
    return 0;
}