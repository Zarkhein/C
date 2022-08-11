#include <stdio.h>
#include <stddef.h>



int main(){
   
    int tab[20] = {[0] = 5};
    
    printf("Struct size: %zu\n", sizeof(tab));
    printf("Adresse 0: %p", tab);
    return 0;
}
