#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(void){
    char studentName[100];
    system("clear");
    printf("C   ||  BHARAT ACHARYA\n");
    printf("----------------------\n\n");
    printf("Basics Of String\n\n"); 
    printf("First Name : ");
    fgets(studentName, 100, stdin);
    printf("\nName : %s", studentName);
    printf("\n\n");
    return(0);
}



/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define count 4
struct students
{
    int rollNo;
    char name[50];
    int marks;
    float percent;
    char grade;
};
struct students firstYear[count];
int i, j, k, tempMarks, tempRoll;
int choice = 1;

void getData(void);

void displayData(void);
void sortData(void);
int main(void)
{
    system("clear");
    printf("C   ||  BHARAT ACHARYA\n");
    printf("----------------------\n\n");
    printf("Structures in C || Marksheet\n\n\n");

    getData();
    do
    {
        displayData();
        sortData();
    } while (choice != 4);

    printf("\n\n\n\n");
    return 0;
}

void getData(void)
{
    printf("Enter the data of first year students\n");
    printf("-------------------------------------\n\n");
    for (i = 0; i < count; i++)
    {
        firstYear[i].rollNo = i + 1;
        printf("Roll No. : %2d\n", firstYear[i].rollNo);
        printf("-------------\n");
        printf("Name.    : ");
        scanf("%s", firstYear[i].name);
        printf("Marks.   : ");
        scanf("%d", &firstYear[i].marks);
        printf("\n\n");
        firstYear[i].percent = firstYear[i].marks / 7.00;
        if (firstYear[i].percent < 40)
        {
            firstYear[i].grade = 'F';
        }
        else if (firstYear[i].percent < 50)
        {
            firstYear[i].grade = 'D';
        }
        else if (firstYear[i].percent < 60)
        {
            firstYear[i].grade = 'C';
        }
        else if (firstYear[i].percent < 75)
        {
            firstYear[i].grade = 'B';
        }
        else
        {
            firstYear[i].grade = 'A';
        }
    }
}
void displayData(void)
{
    system("clear");
    printf("C   ||  BHARAT ACHARYA\n");
    printf("----------------------\n\n");
    printf("Structures in C || Marksheet\n\n");

    printf("---------------------------------------------------------------\n");
    printf("Roll No.      Name            Marks       Percent         Grade\n");
    printf("---------------------------------------------------------------\n");
    for (i = 0; i < count; i++)
    {
        printf("  %3d         ", firstYear[i].rollNo);
        printf("%-16s", firstYear[i].name);
        printf("  %3d ", firstYear[i].marks);
        printf("        %2.2f", firstYear[i].percent);
        printf("           %c\n", firstYear[i].grade);
    }
    printf("---------------------------------------------------------------\n");
}
void sortData(void)
{
    struct students stemp;
    printf("\n\n");
    printf("Sort By : ");
    printf("1. Roll No\n");
    printf("          2. Name\n");
    printf("          3. Marks\n");
    printf("          4. Exit           ");
    printf("Enter your choice : ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        for (i = 0; i < count - 1; i++)
        {
            for (j = 0; j < count - 1 - i; j++)
            {
                if (firstYear[j].rollNo > firstYear[j + 1].rollNo)
                {
                    stemp = firstYear[j];
                    firstYear[j] = firstYear[j + 1];
                    firstYear[j + 1] = stemp;
                }
            }
        }
        break;
    case 2:
        for (i = 0; i < count - 1; i++)
        {
            for (j = 0; j < count - 1 - i; j++)
            {
                if (firstYear[j].name[0] > firstYear[j + 1].name[0])
                {
                    stemp = firstYear[j];
                    firstYear[j] = firstYear[j + 1];
                    firstYear[j + 1] = stemp;
                }
            }
        }
        break;
    case 3:
        for (i = 0; i < count - 1; i++)
        {
            for (j = 0; j < count - 1 - i; j++)
            {
                if (firstYear[j].marks < firstYear[j + 1].marks)
                {
                    stemp = firstYear[j];
                    firstYear[j] = firstYear[j + 1];
                    firstYear[j + 1] = stemp;
                }
            }
        }
        break;
    case 4:
        printf("\n\nThank you, see you again!");
        break;
    default:
        printf("\n\nInvalid Entry, try again!\n");
        getchar();
        getchar();
        break;
    }
}*/