#include <stdio.h>

#define AZ "abcdefghijkmnlopqrstuvwxyz"
#define MAX 1000
int main(){

    int i, j, k, c;
    char alpha[26];
    char s[MAX];
    char f[MAX];
    int tmp = 0;
    int debut = 0;
    int fin = 25;
    
  
    for (j = 0; j < 26; j++)
    {
        alpha[j] = AZ[j];
    }
   

    for ( i = 0, j = 0; (c = getchar()) != EOF && c !='\n'; i++)
    {
        if(c != '-')
        {
            s[j++] = c;
            
        }  
    }

    
    for(i = 0; i < 4; i++)
        for(j = 0; j < 26; j++)
            if(s[i] == alpha[j])
                if(tmp < j && debut == 0)
                    debut = j;
                else if(tmp < j && debut != 0)
                    fin = j;
      
    
    for(debut, i = 0; debut <= fin; debut++, i++)
    {
        f[i] = alpha[debut];
    } 
    
    for(j = 0; j <= i-1; j++)
    {
        printf("[%d]:%c\n",j, f[j]); 
    }
    return 0;
}
