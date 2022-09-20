#include<stdio.h>
struct cricketer
{
    int runs, matches;
    char name[25];
    char team[25];
}player[100],t;
 
void main()
{
    int i,j,n;
    printf("Enter the no of cricket players\n");
    scanf("%d",&n);
    printf("Enter player's name ,team name, number of matches played and total runs scored:\n");
    for(i=0;i<n;i++)
    {
        scanf("%s %s %d %d",player[i].name,player[i].team,&player[i].matches,&player[i].runs);
    }
 
 
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(player[j].runs<player[j+1].runs)
            {
                t=player[j];
                player[j]=player[j+1];
                player[j+1]=t;
            }
        }
    }
 
    printf("\nCricketer info in terms of runs scored from highest to lowest\n");
    printf("\nNAME\t\t TEAM NAME\t\tNO OF MATCHES\t\tTOTAL RUNS SCORED\n");
    printf("-------------------------------------------------------------------------------\n");
 
    for(i=0;i<n;i++)
    {
        printf("%s\t\t %s \t\t\t%d \t\t\t%d\n",player[i].name,player[i].team,player[i].matches,player[i].runs);
    }
}