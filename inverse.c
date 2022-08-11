#include <stdio.h>

#define MAXLIGNE 1000

int lireligne(char ligne[], int ligneMax);
void checkspace(char ligneCurrent[], int sizeLine, int lim);
void inverser(char ligneCurrent[], int sizeLine, int lim);

int main() { 
	char ligne[MAXLIGNE];

    int size = 0;

	while((size = lireligne(ligne, MAXLIGNE))) {
	    inverser(ligne, size, MAXLIGNE);
    }

	return 0;
}


void inverser(char ligneCurrent[], int sizeLine, int lim)
{
    char inverseLine[lim];
    
    int i = 0;
    int j = 0;

    
    for (i = 0; i < sizeLine-1; ++i)
    {
        printf("%d | %c\n", i, ligneCurrent[i]);
    }
    
    printf("------\n");

    for (i = sizeLine - 1, j = 0; i >= 0; --i, ++j)
    {
        inverseLine[j] = ligneCurrent[i];
        printf("Tbl[%d] : %c\n", j, inverseLine[j]);
    }
    
    ligneCurrent[j] = '\0';
}

void checkspace(char ligneCurrent[], int sizeLine, int lim)
{
	char lineWithoutSpace[lim];

	int i = 0; 
    int j = 0;
	
	for (i = 0; i < sizeLine; ++i)
	{
		if(ligneCurrent[i] != ' ' && ligneCurrent[i] != '\t')
		{
			lineWithoutSpace[j] = ligneCurrent[i];
			++j;
		}
		
    }

	lineWithoutSpace[j] = '\0';

	for (i = 0; i < j; ++i)
	{
		printf("Tbl[%d] : %c\n", i, lineWithoutSpace[i]);
	}
}


int lireligne(char ligneCurrent[], int lim){
	
	int c, i;

	for (i = 0; i < lim-1 && (c = getchar()) != EOF && c != '\n'; ++i) {
		ligneCurrent[i] = c;
    }
		
	ligneCurrent[i] = '\0';
	return i;

}



