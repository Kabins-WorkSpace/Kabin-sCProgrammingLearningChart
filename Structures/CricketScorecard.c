#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define noOfBowlers 6
#define noOfBatsmen 11

void askDataIndiaBowling(void);
void askDataNepalBowling(void);
void askDataIndiaBatting(void);
void askDataNepalBatting(void);
void displayNepalBatting(void);
void displayIndiaBatting(void);
void displayIndiaBowling(void);
void displayNepalBowling(void);
void displayMatchResults(void);
void askUsersChoiceOfDisplay(void);

struct bowling
{
    char bowler[50];
    int overs;
    int maidenOvers;
    int runs;
    int wickets;
    float economy;
};
struct batting
{
    char batsman[50];
    int runs;
    int balls;
    int noOfFours;
    int noOfSixes;
    float strikeRate;
    int out;
};
struct bowling india;
struct bowling indiaBowl[noOfBowlers];
struct bowling nepalBowl[noOfBowlers];
struct batting indiaBat[noOfBatsmen];
struct batting nepalBat[noOfBatsmen];

int i, j;
int indiaTotalRuns = 0, indiaTotalBalls = 0;
int indiaTotalOversFaced, indiaSpareBalls, indiaTotalFallOfWickets = 0;
int nepalTotalRuns = 0, nepalTotalBalls = 0;
int nepalTotalOversFaced, nepalSpareBalls, nepalTotalFallOfWickets = 0;
int choice = 3;

int main(void)
{
    system("clear");
    printf("ASIAN GAMES CRICKET ||  NEPAL VS INDIA\n");
    printf("--------------------------------------\n\n");
    printf("Nepal Batting Details Entry\n");
    printf("---------------------------\n\n");
    askDataIndiaBowling();
    askDataNepalBatting();
    askDataNepalBowling();
    askDataIndiaBatting();  
    askUsersChoiceOfDisplay();
    printf("\n\n\n");
    return 0;
}
void askDataIndiaBowling(void)
{
    system("clear");
    printf("ASIAN GAMES CRICKET ||  NEPAL VS INDIA\n");
    printf("--------------------------------------\n\n");
    printf("India Bowling Details Entry\n");
    printf("---------------------------\n\n");
    for (i = 0; i < noOfBowlers; i++)
    {
        printf("Bowler #%d\n", i + 1);
        printf("----------\n");
        printf("Name    : ");
        scanf("%s", indiaBowl[i].bowler);
        printf("Overs   : ");
        scanf("%d", &indiaBowl[i].overs);
        printf("Maidens : ");
        scanf("%d", &indiaBowl[i].maidenOvers);
        printf("Runs    : ");
        scanf("%d", &indiaBowl[i].runs);
        printf("Wickets : ");
        scanf("%d", &indiaBowl[i].wickets);
        indiaBowl[i].economy = (float)indiaBowl[i].runs / (float)indiaBowl[i].overs;
        getchar();
        system("clear");
        printf("ASIAN GAMES CRICKET ||  NEPAL VS INDIA\n");
        printf("--------------------------------------\n\n");
        printf("India Bowling Details Entry\n");
        printf("---------------------------\n\n");
    }
    system("clear");
    printf("ASIAN GAMES CRICKET ||  NEPAL VS INDIA\n");
    printf("--------------------------------------\n\n");
}
void askDataNepalBowling(void)
{

    system("clear");
    printf("ASIAN GAMES CRICKET ||  NEPAL VS INDIA\n");
    printf("--------------------------------------\n\n");
    printf("Nepal Bowling Details Entry\n");
    printf("---------------------------\n\n");
    for (i = 0; i < noOfBowlers; i++)
    {
        printf("Bowler #%d\n", i + 1);
        printf("----------\n");
        printf("Name    : ");
        scanf("%s", nepalBowl[i].bowler);
        printf("Overs   : ");
        scanf("%d", &nepalBowl[i].overs);
        printf("Maidens : ");
        scanf("%d", &nepalBowl[i].maidenOvers);
        printf("Runs    : ");
        scanf("%d", &nepalBowl[i].runs);
        printf("Wickets : ");
        scanf("%d", &nepalBowl[i].wickets);
        nepalBowl[i].economy = (float)nepalBowl[i].runs / (float)nepalBowl[i].overs;
        getchar();
        system("clear");
        printf("ASIAN GAMES CRICKET ||  NEPAL VS INDIA\n");
        printf("--------------------------------------\n\n");
        printf("Nepal Bowling Details Entry\n");
        printf("---------------------------\n\n");
    }
    system("clear");
    printf("ASIAN GAMES CRICKET ||  NEPAL VS INDIA\n");
    printf("--------------------------------------\n\n");
}
void askDataIndiaBatting(void)
{
    system("clear");
    printf("ASIAN GAMES CRICKET ||  NEPAL VS INDIA\n");
    printf("--------------------------------------\n\n");
    printf("India Batting Details Entry\n");
    printf("---------------------------\n\n");
    for (i = 0; i < noOfBatsmen; i++)
    {
        printf("Batsmen #%2d\n", i + 1);
        printf("-----------\n");
        printf("Name      : ");
        scanf("%s", indiaBat[i].batsman);
        printf("Runs      : ");
        scanf("%d", &indiaBat[i].runs);
        printf("Balls     : ");
        scanf("%d", &indiaBat[i].balls);
        printf("No. of 4s : ");
        scanf("%d", &indiaBat[i].noOfFours);
        printf("No. of 6s : ");
        scanf("%d", &indiaBat[i].noOfSixes);
        printf("Out?(1 = Yes / 0 = No) : ");
        scanf("%d", &indiaBat[i].out);
        indiaBat[i].strikeRate = (float)indiaBat[i].runs / (float)indiaBat[i].balls;
        indiaTotalRuns = indiaTotalRuns + indiaBat[i].runs;
        indiaTotalBalls = indiaTotalBalls + indiaBat[i].balls;
        indiaTotalOversFaced = indiaTotalBalls / 6;
        indiaSpareBalls = indiaTotalBalls % 6;
        if (indiaBat[i].out == 1)
        {
            indiaTotalFallOfWickets++;
        }
        getchar();
        system("clear");
        printf("ASIAN GAMES CRICKET ||  NEPAL VS INDIA\n");
        printf("--------------------------------------\n\n");
        printf("India Batting Details Entry\n");
        printf("---------------------------\n\n");
    }
    system("clear");
    printf("ASIAN GAMES CRICKET ||  NEPAL VS INDIA\n");
    printf("--------------------------------------\n\n");
}
void askDataNepalBatting(void)
{

    system("clear");
    printf("ASIAN GAMES CRICKET ||  NEPAL VS INDIA\n");
    printf("--------------------------------------\n\n");
    printf("Nepal Batting Details Entry\n");
    printf("---------------------------\n\n");
    for (i = 0; i < noOfBatsmen; i++)
    {
        printf("Batsmen #%2d\n", i + 1);
        printf("-----------\n");
        printf("Name      : ");
        scanf("%s", nepalBat[i].batsman);
        // fgets(nepalBat[i].batsman, 29, stdin);
        printf("\rRuns      : ");
        scanf("%d", &nepalBat[i].runs);
        printf("Balls     : ");
        scanf("%d", &nepalBat[i].balls);
        printf("No. of 4s : ");
        scanf("%d", &nepalBat[i].noOfFours);
        printf("No. of 6s : ");
        scanf("%d", &nepalBat[i].noOfSixes);
        printf("Out?(1 = Yes / 0 = No) : ");
        scanf("%d", &nepalBat[i].out);
        nepalBat[i].strikeRate = ((float)nepalBat[i].runs / (float)nepalBat[i].balls) * 100;
        nepalTotalRuns = nepalTotalRuns + nepalBat[i].runs;
        nepalTotalBalls = nepalTotalBalls + nepalBat[i].balls;
        nepalTotalOversFaced = nepalTotalBalls / 6;
        nepalSpareBalls = nepalTotalBalls % 6;
        if (nepalBat[i].out == 1)
        {
            nepalTotalFallOfWickets++;
        }
        getchar();
        getchar();
        system("clear");
        printf("ASIAN GAMES CRICKET ||  NEPAL VS INDIA\n");
        printf("--------------------------------------\n\n");
        printf("Nepal Batting Details Entry\n");
        printf("---------------------------\n\n");
    }
}
void displayNepalBatting(void)
{
    system("clear");
    printf("ASIAN GAMES CRICKET ||  NEPAL VS INDIA\n");
    printf("--------------------------------------\n\n");
    printf("NEPAL \n");
    printf("---------------------------------------------------------------------------\n");
    printf("Batsmen                     Runs      Balls        4s        6s          SR\n");
    printf("---------------------------------------------------------------------------\n");
    for (i = 0; i < noOfBatsmen; i++)
    {
        printf("%-29s", nepalBat[i].batsman);
        printf("%3d        ", nepalBat[i].runs);
        printf("%3d         ", nepalBat[i].balls);
        printf("%d         ", nepalBat[i].noOfFours);
        printf("%d      ", nepalBat[i].noOfSixes);
        printf("%2.2f     \n", nepalBat[i].strikeRate);
    }
    printf("---------------------------------------------------------------------------\n");
    printf("TOTAL                      %3d/%d  (%2d.%d Ov)\n", nepalTotalRuns, nepalTotalFallOfWickets, nepalTotalOversFaced, nepalSpareBalls);
    printf("---------------------------------------------------------------------------\n\n\n");
}
void displayIndiaBatting(void)
{
    system("clear");
    printf("ASIAN GAMES CRICKET ||  NEPAL VS INDIA\n");
    printf("--------------------------------------\n\n");
    printf("INDIA \n");
    printf("---------------------------------------------------------------------------\n");
    printf("Batsmen                     Runs      Balls        4s        6s          SR\n");
    printf("---------------------------------------------------------------------------\n");
    for (i = 0; i < noOfBatsmen; i++)
    {
        printf("%-29s", indiaBat[i].batsman);
        printf("%3d        ", indiaBat[i].runs);
        printf("%3d         ", indiaBat[i].balls);
        printf("%d         ", indiaBat[i].noOfFours);
        printf("%d      ", indiaBat[i].noOfSixes);
        printf("%2.2f     \n", indiaBat[i].strikeRate);
    }
    printf("---------------------------------------------------------------------------\n");
    printf("TOTAL                      %3d/%d  (%2d.%d Ov)\n", indiaTotalRuns, indiaTotalFallOfWickets, indiaTotalOversFaced, indiaSpareBalls);
    printf("---------------------------------------------------------------------------\n\n\n");
}
void displayIndiaBowling(void)

{
    printf("INDIA \n");
    printf("---------------------------------------------------------------------------\n");
    printf("Bowlers                     Overs     Maidens     Runs     Wickets     Econ\n");
    printf("---------------------------------------------------------------------------\n");
    for(i = 0; i < noOfBowlers; i++){
        printf("%-31s", indiaBowl[i].bowler);
        printf("%2d          ", indiaBowl[i].overs);
        printf("%2d      ", indiaBowl[i].maidenOvers);
        printf("%3d           ", indiaBowl[i].runs);
        printf("%d     ", indiaBowl[i].wickets);
        printf("%2.2f     \n", indiaBowl[i].economy);
    }
}
void displayNepalBowling(void)

{
    printf("\n\n");
    printf("NEPAL \n");
    printf("---------------------------------------------------------------------------\n");
    printf("Bowlers                     Overs     Maidens     Runs     Wickets     Econ\n");
    printf("---------------------------------------------------------------------------\n");
    for(i = 0; i < noOfBowlers; i++){
        printf("%-31s", nepalBowl[i].bowler);
        printf("%2d          ", nepalBowl[i].overs);
        printf("%2d      ", nepalBowl[i].maidenOvers);
        printf("%3d           ", nepalBowl[i].runs);
        printf("%d     ", nepalBowl[i].wickets);
        printf("%2.2f     \n", nepalBowl[i].economy);
    }
}
void displayMatchResults(void){
    system("clear");
    printf("ASIAN GAMES CRICKET ||  NEPAL VS INDIA\n");
    printf("--------------------------------------\n\n");
    printf("Match Summary\n\n");
    printf("Nepal       %3d/%2d(Overs %2d.%d)\n", nepalTotalRuns, nepalTotalFallOfWickets, nepalTotalOversFaced, nepalSpareBalls);
    printf("India       %3d/%2d(Overs %2d.%d)\n\n", indiaTotalRuns, indiaTotalFallOfWickets, indiaTotalOversFaced, indiaSpareBalls);
    if(nepalTotalRuns > indiaTotalRuns){
        printf("Nepal won!!");
    }
    else{
        printf("India Won!!");
    }
    printf("\n\n");
}
void askUsersChoiceOfDisplay(void){
    do{
        system("clear");
        printf("ASIAN GAMES CRICKET ||  NEPAL VS INDIA\n");
        printf("--------------------------------------\n\n");
        printf("Display Options : 1) Nepal Innings\n");
        printf("                  2) India Innings\n");
        printf("                  3) Match Results\n");
        printf("                  4) Exit\n\n");
        printf("Enter choice     : ");
        scanf("%d", & choice);
    switch(choice){
        case 1:
            printf("Nepal Innings\n");
            printf("-------------\n\n");
            displayNepalBatting();
            displayIndiaBowling();
            getchar();
            getchar();
            break;
        case 2:
            printf("India Innings\n");
            printf("-------------\n\n");
            displayIndiaBatting();
            displayNepalBowling();
            getchar();
            getchar();
            break;
        case 3:
            displayMatchResults();
            getchar();
            getchar();
            break;
        case 4:
            printf("Thank you for checking. See you again!");
            break;
        default:
            printf("Invalid entry. Try again!");
            getchar();
            break;
    }
    }
    while(choice != 4);
}