#include <stdio.h>
#include <stdlib.h>



int main(){

    int lim = 255;
    int i;
    int l = 0;
    char message[255];

    for ( i = 0; i < lim-1; i++)
    {
        char c;
        if(scanf("%c", &c) != '\n')
        {
            message[l++] = c;
        }
        if(c == '\n')
        {
            message[l] = '\0';
            break;            
        }
    } 
    printf("\n");
    printf("Letters: %d\n", l);
    printf("Sentence: %s", message);
 
    return 0;
}
