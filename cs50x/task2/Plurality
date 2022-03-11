#include <stdio.h>
#include <string.h>
#include <math.h>


int main(void)
{
    int n, winner;
    
    //take number of votes
    printf("Number of voters: ");
    scanf("%i", &n);
    
    char candidates[n][10];
    int votes[n];
    
    //take voters from the user
    for(int i=0; i<n; i++)
    {
        printf("vote: ");
        scanf("%s", candidates[i]);
        votes[i]=0;  
    }
    
    //take the number of votes for each candidate
    for(int j=0; j<n; j++)
    {
        for(int k=j; k<n; k++)
        {
            if(strcmp(candidates[j],candidates[k]) ==0)
                votes[j]++;            
        }
    }

    //know who has the most number of votes
    winner=votes[0];
    for(int a=1; a< n; a++)
    {
        if(votes[a]> winner)
            winner = votes[a];
    }
    
    //print the winner + who has the same number of votes
    for(int b=0; b< n; b++)
    {
        if(votes[b] == winner)
        {
            printf("%s\n",candidates[b]);
        }
    }   
    
}
