#include <stdio.h>

#define MAXLIGNE 1000


int lireligne(char ligneC[], int lim);

int main(){

    int size, i;
    char lineCurrent[MAXLIGNE];

    while( (size = lireligne(lineCurrent, MAXLIGNE)) > 0)
    {
        for(i = 0; i < size; i++)
        {
            printf("%c", lineCurrent[i]);
        }
    }
    return 0;
}

int lireligne(char ligneC[], int lim){
    
    int i,c;
    for (i=0;i<lim-1 && (c=getchar()) != EOF && c!='\n'; i++)
    {
        ligneC[i] = c;
    }
    ligneC[i] = '\0';

    return i;

}
