#include <stdio.h>

int main(){

    char s1[100] = "jesuisunhomederaison\0";
    char s2[10] = "douglas\0";
    char s3[10] = "";
    int i,j,k;
    int tmp;
    tmp = 0;
    k = 0;
     
    for ( i = 0; i < 10 ; i++)
    {
        printf("[%c]\n", s1[i]);
       
        for ( j = 0 ; j < 10 ; j++)
        {
            if(s1[i] == s2[j])
            {
                s1[i] = 0;
            }
        }
    }
    s3[k] = '\0';
    
    
    for ( i = 0; i < 10; i++)
    {
        printf("%c", s1[i]);
    }
    
    return 0;
}
