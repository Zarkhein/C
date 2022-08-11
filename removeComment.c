#include <stdio.h>



int main(){
    
    FILE * inputFile;
    int c;
    int space = 0;    
    long test;
 
    inputFile = fopen("test.c", "r");
    if(inputFile == NULL)
    {
        printf("erreur");
    }
    else
    {
        printf ("Vous etes bien dans le fichier\n");
        while ((c = fgetc(inputFile)) != EOF)
        {
            if(c == '/')
            {
                space += 1;
                printf("ts");
            }
            test = ftell(inputFile);
            printf("%c", c);
        }
        fclose(inputFile);
        printf("le fichier posséde : %d espaces", space);
    }

    return 0;
}
