#include <stdio.h>

#define MAXLIGNE 1000

int lireligne(char ligne[], int ligneMax);
void checksize(char ligneCurrent[], int sizeLine);
void checkspace(char ligneCurrent[], int sizeLine, int lim);


int main() { 
	char ligne[MAXLIGNE];

    int size = 0;

	while((size = lireligne(ligne, MAXLIGNE))) {
		//checksize(ligne, l);
		checkspace(ligne, size, MAXLIGNE);
	}

	return 0;
}

void checksize(char ligneCurrent[], int sizeLine){
	int i;
	if(sizeLine > 10)
	{
		for(i = 0; i < sizeLine; ++i)
		{
			printf("Tbl[%d] : %c\n", i, ligneCurrent[i]);
		}
	}

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

	for(i=0; i<lim-1 && (c = getchar()) != EOF && c!='\n'; ++i)
		ligneCurrent[i] = c;
		
	if ( c == '\n'){
		
		ligneCurrent[i] = c;
		++i;
	}
		
	
	ligneCurrent[i] = '\0';
	return i;

}



