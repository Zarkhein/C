#include <stdio.h>
#include <string.h>
#define MAX 1000

int main(){

    char s[MAX] = "matheo sital douglas            ";
    int n;
    
    printf("ok"); 
    for (n = strlen(s); n >= 0; n--)
    {
        printf("%d", s[n]);
        if(s[n] != ' ' && s[n] != '\n' && s[n] != '\t')
            printf("fin");
            break;
        s[n+1] = '\0';
        return n;    
    }
    
    return 0;
}
