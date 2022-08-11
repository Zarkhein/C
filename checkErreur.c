#include <stdio.h>
#include <string.h>

int main()
{
    char message[255] = "printf('hello');\n";
    int tmp = 0;
    int tmp2 = 0;
    int i; 
    
    printf("%s", message);
    for ( i = 0; i < strlen(message) - 1; i++)
    {
        if(message[i] == '(')
        {
            printf("Parenthese Ouvrante trouvé.\n");
            tmp += 1;
        }
        else if(message[i] == ')')
        {
            printf("Parenthese fermente trouvé.\n");
            tmp2 += 1;
        }
   
    }

    if(tmp == tmp2)
        printf("Aucune Erreur.\n");
    else
        printf("Il manque une ou des parenthèses.\n");
 
    return 0;
}
