#include <stdio.h>


int main(){
    int a = 5;
    int tmp = 0;
    int b = 10;
    int *pa = &a;
    int *pb = &b;

    tmp = *pa;
    *pa = *pb;
    *pb = tmp;
    
    printf("A: %d\n", a);
    printf("B: %d\n", b);
    



    return 0; 
}
