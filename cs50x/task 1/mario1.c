#include <stdio.h>

void main(void)
{
    int height= 0;
    scanf("%i",&height);
    
    for(int i=1; i<= height; i++)
    {
        //the spaces
        for(int j=i; j<= height-1; j++)
        {
            printf(" ");
        }
        //the windows
        for(int k=1; k<=i;k++)
        {
            printf("#");
        }
        printf("\n");
    }
}
 
