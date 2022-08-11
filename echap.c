#include <stdio.h>

#define MAXSIZE 1000

int main(){
    
    int c,i,j;
    char s[MAXSIZE]; 
        
    while((c = getchar()) != EOF)
    {
        switch(c){
            case ' ':
                s[i++] = '_';
                break;
            case '\n':
                s[i++] = '@';
                break;
            case '\t':
                s[i++] = '#';    
                break;
            default:
                s[i++] = c;
                break;
        }
        
    }   
     
    s[i] = '\0';
    for ( j = 0 ; j < i ; j++)
    {
        printf("%c",s[j]);
    }
    
    return 0;
}
