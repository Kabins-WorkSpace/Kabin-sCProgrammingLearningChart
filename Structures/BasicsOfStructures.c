#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define count 4
struct student
{
    int roll, totalMarks;
    char name[25], grade;
    float percentage;
};
//struct student fy1;
struct student firstYear[count];
struct student tempStudent;

void askData(void);
void calculateGrade(void);
void displayData(void);
void sortData(void);
int i, j, k, temp, choice = 0;

int main(void)
{
    system("clear");
    printf("                     Tribhuvan University\n");
    printf("                   Institute of Engineering\n");
    printf("                 Kathmandu Engineering College\n");
    printf("                     Kalimati, Kathmandu\n\n");
    printf("Year     : First\n");
    printf("Semester : Odd\n\n");
    askData();
    calculateGrade();
    displayData();
    sortData();
    printf("\n\n");
    return 0;
}
void askData(void)
{
    for (i = 0; i < count; i++)
    {
        system("clear");
        printf("                     Tribhuvan University\n");
        printf("                   Institute of Engineering\n");
        printf("                 Kathmandu Engineering College\n");
        printf("                     Kalimati, Kathmandu\n\n");
        printf("Year     : First\n");
        printf("Semester : Odd\n\n");    
        firstYear[i].roll = i + 1;
        printf("Enter Data for First Year Students...\n\n");
        printf("Roll Number %2d\n", firstYear[i].roll);
        printf("--------------\n");
        printf("Name : ");
        scanf("%s", firstYear[i].name);
        if(firstYear[i].name[0] >= 97)
            firstYear[i].name[0] = firstYear[i].name[0] - 32;
        printf("Total Marks : ");
        scanf("%d", &firstYear[i].totalMarks);
        getchar();
        getchar();
    }
}
void calculateGrade(void)
{
    for (i = 0; i < count; i++)
    {
        firstYear[i].percentage = firstYear[i].totalMarks / 8.00;
        if (firstYear[i].percentage < 40)
            firstYear[i].grade = 'F';
        else if (firstYear[i].percentage < 50)
            firstYear[i].grade = 'D';
        else if (firstYear[i].percentage < 60)
            firstYear[i].grade = 'C';
        else if (firstYear[i].percentage < 75)
            firstYear[i].grade = 'B';
        else
            firstYear[i].grade = 'A';
    }
}
void displayData(void)
{   
    system("clear");
    printf("                     Tribhuvan University\n");
    printf("                   Institute of Engineering\n");
    printf("                 Kathmandu Engineering College\n");
    printf("                     Kalimati, Kathmandu\n\n");
    printf("Year     : First\n");
    printf("Semester : Odd\n\n");    
    printf("---------------------------------------------------------------\n");
    printf("Roll    Name                    Marks     Percentage      Grade\n");
    printf("---------------------------------------------------------------\n");
    for (i = 0; i < count; i++)
    {
        printf(" %3d", firstYear[i].roll);
        printf("    %-25s", firstYear[i].name);
        printf(" %3d", firstYear[i].totalMarks);
        printf("          %2.2f", firstYear[i].percentage);
        printf("        %c", firstYear[i].grade);
        printf("\n");
    }
    printf("---------------------------------------------------------------\n\n\n");
}
void sortData(void){
    do{
    printf("Display Options : 1) Roll No.\n");
    printf("                  2) Name\n");
    printf("                  3) Marks\n");
    printf("                  4) Exit           ");
    printf("Enter your choice : ");
    scanf("%d", &choice);
    switch(choice){
        case 1:
            for(i = 0; i < count; i++){
                for(j = 0; j < count - 1 - i; j++){
                    if(firstYear[j].roll > firstYear[j + 1].roll){
                    tempStudent = firstYear[j];
                    firstYear[j] = firstYear[j + 1];
                    firstYear[j + 1] = tempStudent;
                    }
                }
            }
            displayData();
            break;
            
        case 2:   
            for(i = 0; i < count; i++){
                for(j = 0; j < count - 1 - i; j++){
                        if(firstYear[j].name[0] > firstYear[j + 1].name[0]){
                        tempStudent = firstYear[j];
                        firstYear[j] = firstYear[j + 1];
                        firstYear[j + 1] = tempStudent;
                        }
                    }
                }
            displayData();
            break;
        case 3:   
            for(i = 0; i < count; i++){
                for(j = 0; j < count - 1 - i; j++){
                if(firstYear[j].totalMarks < firstYear[j + 1].totalMarks){
                    tempStudent = firstYear[j];
                    firstYear[j] = firstYear[j + 1];
                    firstYear[j + 1] = tempStudent;
                    }
                }
            }
            displayData();
            break;    
        case 4:
            displayData();
            printf("Thank you, see you again!!!");
            break;
        default:
            printf("Invalid choice, try again!");
            break;
    }}
    while(choice != 4);
}
