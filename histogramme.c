#include <stdio.h>

#define DEDANS 1
#define DEHORS 0

int main(void){


	int c;
	int i, j;
	int nCaractere, nMot, etat;

	int tblMot[10];

	nCaractere = nMot = 0;
	etat = DEHORS;

	for(i = 0; i < 10; i++){
		tblMot[i] = 0;
	}	
	
	i = 0;
	while((c = getchar()) != EOF){
		++nCaractere;
		if(c == ' ' || c == '\n' || c == '\t'){
			--nCaractere;
			etat = DEHORS;
			tblMot[i] = nCaractere;
			i++;
			nCaractere = 0;
		}
		else if(etat == DEHORS){			
			++nMot;
			etat = DEDANS;

		}
	}

	for(i = 0; i < 10; i++){
		for(j = 0; j < tblMot[i]; j++){
			printf("-");
		}
		printf("\n");	
		
	}



	printf("Caractere : %d", nCaractere);
	printf("Mots : %d", nMot);

	return 0;
}
