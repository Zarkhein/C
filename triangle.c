#include <stdio.h>
#include <stdlib.h>

void triangle(int (*tab)[10], int taille)
{
    int i,j;
   
 
    for ( i = 0; i < taille; i++ )
    {
        //printf("\n");
        for ( j = 0; j < i; j++ ) 
        {
            tab[i][j] = tab[i-1][j-1] + tab[i-1][j];
            //tab[i][0] = 1;
            //tab[i][i-1] = 1; 
            //printf("%d ", tab[i][j]);
        }
        tab[i][0] = 1;
        tab[i][i-1] = 1;
    }
}



void afficher_tbl(int (*tab)[10], int taille)
{
    int i,j;
    
    for ( i = 0; i < taille; i++)
    {
        printf("\n");
        for ( j = 0; j < i; j++)
        {   
            printf("%d ", tab[i][j]);
        }
    }
}


int main(){
    
    int taille = 10;
    int tab[10][10] = { {0} };
    triangle(tab, taille);
    afficher_tbl(tab, taille);
    return 0;
}




