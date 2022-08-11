#include <stdio.h>
#include <stddef.h>



int main(){
   
    struct exemple
    {
        double flottant;
        char lettre;
        unsigned entier;
    };

    printf("Struct size: %zu\n", sizeof(struct exemple));

    return 0;
}
