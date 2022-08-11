#include <stdio.h>

#define SIZE_MAX 10


int main(){
    
   
        

    int tab[SIZE_MAX] = {5, 7, 12, 14, 23, 27, 35, 40, 41, 45};
    int x = 41; 
    int deb = 0;
    int milieu;
    int fin = SIZE_MAX - 1;
    int vrai = 0; 
    

    while (vrai != 1)
    {
        milieu = (deb + fin) / 2;
        printf("debut : %d\n", deb);
        printf("fin : %d\n", fin);
        if ( (tab[milieu] == x))
        {
            printf("%d", tab[milieu]);
            vrai = 1;
            printf("Bravo");
        }
        else if ( tab[milieu] < x)
        {
            deb = milieu + 1;
        }
        else if ( tab[milieu] > x)
        {
            printf("test2");
            fin = milieu -1;
        }
        else
        {
            printf("Erreur");
        }                
    } 

    return 0;
}

    
