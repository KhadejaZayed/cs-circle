#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void)
{
    char t[400];
    int words, letters, sentences;
    
    printf("Text: ");
    scanf("%[^\n]%*c", t);
    
    for(int i=0; i< strlen(t); i++)
    {
        if((t[i] >= 'a' && t[i] <= 'z') || (t[i] >= 'A' && t[i] <= 'Z'))
            letters ++;
        else if(t[i] == ' ')
            words ++;
        else if (t[i] == '.' || t[i] == '?' || t[i] == '!')
            sentences ++;
    }
    letters= ((float) letters / (float) words) *100;
    sentences= ((float) sentences /(float) words) * 100;
    
    float index = 0.0588 * letters- 0.296 * sentences - 15.8;
    printf("Grade %i", (int) round(index));
    
    return 0;
}
