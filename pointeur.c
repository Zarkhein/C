#include <stdio.h>

int main()
{
    
    int *pa;
    int a[10] = {6420,1,2,3,4,5,6,7,8,9};
    int x = 0;

    pa = a;
    printf("Adresse memoire de a[0]: %p\n", *pa);    
   
    x = *pa;

    printf("Adresse memoire de pa+1: %p\n", *(pa+5)); 


    return 0;
}
