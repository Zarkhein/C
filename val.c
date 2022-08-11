#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(){
    
    int test =50;
    printf("%d", (test\000));
    printf("%d", INT_MIN);
    return 0;
}
