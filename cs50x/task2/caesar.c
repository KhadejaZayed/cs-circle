#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(void)
{
    int k;
    char p[10];
    bool q;
    
    do{
        printf("Plaintext: ");
        scanf("%[^\n]%*c", p);
        for(int i=0, n= strlen(p); i<n; i++)
        {
            if(p[i]<'A'|| (p[i]>'Z' && p[i]<'a')|| p[i]>'z')
            {
                q= true;
                break;
            }
        }
    } while(q);
    
    do{
      printf("Enter the key: ");
      scanf("%i", &k );
    } while(k <0);
    
    printf("Ciphertext: ");
    for(int i=0, n= strlen(p); i< n; i++)
    {
        char c= p[i]+k;
        if(p[i] >='A' && p[i]<= 'Z')
        {
            while(c >'Z')
            {
                c-= 26; 
            }
            printf("%c", c);
        }
        else if(p[i] >='a' && p[i]<= 'z')
        {
            while(c >'z')
            {
                c-= 26; 
            }
            printf("%c", c);
        }
    }
    return 0;
}
