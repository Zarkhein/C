#include <stdio.h>
/*
int strlent(char *chaine);
int strcmpl(char *chaine1, char *chaine2);
char strcpi(char *destination, char *source);
char strcat(char *destination, char *source);
char strpbrk(char *chaine, char *liste);
*/
char strstre(char *chaine1, char *chaine2);
char strtok(char *chaine, char *liste);
int main(){
    
    char message[30] = "un, deux, trois";
    
    return 0;
}


char strtok(char *chaine, char *liste){

    int i,j;
    
    
}



/*
char strstre(char *chaine1, char *chaine2){

    int i, j, k;
    int tmp = 0;
        
    for ( k = 0; chaine2[k] != '\0'; k++)
        ;    

    for ( i = 0, j = 0; chaine1[i] != '\0'; i++)
    {
        if ( chaine1[i] != chaine2[j])
        {
            j = 0;
        }
        else
        {
            printf("%d %c | %d %c \n", i, chaine1[i], j, chaine2[j]);  
            tmp++;
            j++;
             
        }
        if(j == k)
            return chaine1;
    }
    return NULL;
}
*/

/*
char strpbrk(char *chaine, char *liste){

    int i, j;
    
    for ( i = 0; chaine[i] != '\0'; i++)
    {
        for ( j = 0; liste[j] != '\0'; j++)
        {
            if( chaine[i] == liste[j] )
            {
                return liste[j];
                break;
            }
        }   
    }
    return;
}


char strcat(char *destination, char *source){

    int i, j;

    for ( i = 0; destination[i] != '\0'; i++)
        ;
    
    for ( j = 0; source[j] != '\0'; j++, i++)
        destination[i] = source[j];
        
    destination[i] = '\0';
    
    printf("%s", destination);
    
    return destination;
}


char strcpi(char *destination, char *source)
{
    int i;
    for ( i = 0; source[i] != '\0'; i++)
    {
        destination[i] = source[i];
    } 
    destination[i] = '\0';
    
    return destination;
}

int strcmpl(char *chaine1, char *chaine2)
{
    int i;    
    int tmp = 0;

    for ( i = 0; chaine1[i] != '\0'; i++ )
    {
        if(chaine1[i] == chaine2[i])
            tmp += 1;
        else
            break;
    }

    if ( tmp == i && chaine2[i] == '\0' )    
        return 1;
    else
        return 0;    
}


int strlent(char *chaine)
{
    int i;
    for ( i = 0; chaine[i] != '\0'; i++)
        ;        
    return i;
}
*/
