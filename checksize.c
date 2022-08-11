#include <stdio.h>

#define MAXLIGNE 1000

int lireligne(char ligneCurrent[], int lim);

int main(void){
	
	int l;
	char ligne[MAXLIGNE];
	
	l = lireligne(ligne, MAXLIGNE);
	if(l >= 80)
	{

	}
	
	printf("Debug Ligne : %d\n", l);
	return 0;
}


int lireligne(char ligneCurrent[], int lim){
	int c,i;

	for(i=0 ; (c = getchar()) != EOF && c != '\n' && i < lim-1; i++)
	{
		
		ligneCurrent[i] = c;
	}
	
	if(c == '\n')
	{
	
		ligneCurrent[i] = c;
		++i;
	}
	return i;

	
}
