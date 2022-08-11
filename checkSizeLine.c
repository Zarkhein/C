#include <stdio.h>

#define MAXLIGNE 1000

int lireligne(char ligne[], int ligneMax);
void copier(char vers[], char de[]);



int main(void){
	
	int l, seq, i;
	int max;
	int tbl[MAXLIGNE];

	seq = 0;

	char ligne[MAXLIGNE];
	char lignePlusLongue[MAXLIGNE];
	


	while((l = lireligne(ligne, MAXLIGNE))){
		tbl[seq] = l;
		++seq;
		

		if(l > max)
		{
			max = l;
			copier(lignePlusLongue, ligne);
		}
	}
	if ( max > 0)
	{
		printf("La ligne est : %s", lignePlusLongue);
	}

	for ( i = 0; i<seq; ++i){
		printf(" %d", tbl[i]);
	}

	
	return 0;
}


int lireligne(char ligneCurrent[], int lim){
	
	int c, i, tmp;

	for(i=0; i<lim-1 && (c = getchar()) != EOF && c!='\n'; ++i)
		ligneCurrent[i] = c;
		
	if ( c == '\n'){
		
		tmp++;
		ligneCurrent[i] = c;
		++i;
	}
		
	
	ligneCurrent[i] = '\0';
	return i;

}

void copier(char vers[], char de[])
{
	int i;
	
	i = 0;
	
	while((vers[i] = de[i]) != '\0')
	{
		++i;
	}	
}


