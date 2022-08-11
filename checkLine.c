#include <stdio.h>

#define MAXLIGNE 1000

int lireligne(char ligne[], int ligneMax);



int main(void){
	
	int l, seq, i;
	int max;
	
	char ligne[MAXLIGNE];
	char lignePlusLongue[MAXLIGNE];
	


	while((l = lireligne(ligne, MAXLIGNE))){
		if(l > 10)
		{			
			printf("Mot : %c\n", ligne[5]);
			printf("Size: %d\n", l);
		}
	}

	return 0;
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



