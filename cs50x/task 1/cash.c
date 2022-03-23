#include <stdio.h>

void main(void)
{
    int count=0;
    int cents=0;
    
    while(cents<=0)
    {
    scanf("%i",&cents);
    }
    
    for(int i= cents; i>=25; i-=25,cents-=25)
    {
        printf("25¢,");
        count++;
    }
   
    for(int j=cents; j>=10; j-=10,cents-=10)
    {
        printf("10¢,");
        count++;
    }
    
    if(cents>5)
    {
        printf("5¢,");
        cents-=5;
        count++;
    }
    
    for(int k=cents; k>=1;k-=1,cents-=1)
    {
        printf("1¢,");
        count++;
    }
    printf("the count=%i",count);
}

