#include <stdio.h>
#include <string.h>
int main(){

    char message[255];
    int i, j, tmp; 
    
    printf("Entrer le mot:");
    scanf("%s", message);

    for ( i = 0, j = strlen(message) - 1 ; i < strlen(message); i++, j-- )
    {
        if ( message[i] == message[j] )
        {
            tmp += 1;
        }
        else
            break;
    }
    if ( tmp == strlen(message))
        printf("Le mot palindrome");
    else
        printf("le mot est pas palindrome");
   
    return 0;
}
