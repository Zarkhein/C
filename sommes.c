#include <stdio.h>


int sommes(int *tab) {
    int sommes = 0;
    int i;
    for(i = 0; i < 5; i++)
        sommes += tab[i];   
 
    return sommes; 
}

int minNumber(int *tab){
    
    int i;
    int min;
    min = tab[1];
    for(i =0; i < 5; i++)
    {
        if(min > tab[i])
            min = tab[i];
    }
    return min;
}

int maxNumber(int *tab){

    int i;
    int max = 0;
    
    for(i =0; i < 5; i++)
    {
        if(max < tab[i])
            max = tab[i];
    }
    return max;
}

void inverse(int *tab){
    
    int i,j;
    int tabInverse[5];    

    for(i = 4, j = 0; i >= 0; i--, j++)
    {
        printf("Tab[%d] : %d\n", i, tab[i]);
        tabInverse[j] = tab[i];
    }
    printf("------------");
    for(i = 0; i < 5; i++)
        printf("Tab[%d] Inverse : [%d]\n", i, tabInverse[i]);
    
}
    

int seekElement(int *tab, int target){

    int element; 
    int i, tmp;

    
    for(i = 0; i < 5; i++)
    {
        if(target == tab[i])
        {   
            tmp = 1;
            break;    
        }

    }
    if (tmp == 1)
    {
        element = 1;
        return element;
    }
    else
    {
        element = -1;
        return element;
    }
}


int main(){
    int tbl[5] = {26, 629, 235, 43, 90};
    //int s = 0; 
    int min, max,target = 0;
    int element = 0;
    printf("Rentrer un element: ");
    scanf("%d", &element);
    target = seekElement(tbl, element);    
    printf("Target : %d\n", target);
    
    min = minNumber(tbl);
    printf("Min : %d\n", min);
     
    max = maxNumber(tbl);
    printf("Max : %d\n", max);
    //s = sommes(tbl);
    //printf("%d", s);

    inverse(tbl);
    
    return 0;
}

