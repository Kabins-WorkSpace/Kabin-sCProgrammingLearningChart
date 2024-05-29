#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
    int a = 77;
    int *ptra = &a;

    long int la = 777;
    long int *ptrla = &la;

    float fa = 77.77;
    float *ptrfa = &fa;

    double da = 7.7;
    double *ptrda = &da;

    char ca = 'k';
    char *ptrca = &ca;

    system("clear");
    printf("C   ||  BHARAT ACHARYA\n");
    printf("----------------------\n\n");
    printf("Basics of Pointer...\n\n");

    printf("ptra  = %p\n", ptra);
    ptra = ptra + 4;
    printf("ptra  = %p\n", ptra);
    printf("-------------------\n\n");

    printf("ptrla = %p\n", ptrla++);
    printf("ptrla = %p\n", ptrla);
    printf("*ptrla = %ld\n", *ptrla);
    printf("-------------------\n\n");

    printf("ptrfa = %p\n", ptrfa);
    printf("*ptrfa = %f\n", *ptrfa);
    printf("-------------------\n\n");

    printf("ptrda = %p\n", ptrda);
    printf("*ptrda = %f\n", *ptrda);
    printf("-------------------\n\n");

    printf("ptrca = %p\n", ptrca);
    printf("*ptrca = %c\n", *ptrca);
    printf("-------------------\n\n");

    printf("\n\n");
    return 0;
}