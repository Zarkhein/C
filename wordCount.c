#include <stdio.h>

#define DEDANS 1
#define DEHORS 0

int main(void){

	int c;
	int nombreLigne, nombreMot, nombreCaractere, etat;

	etat = DEHORS;
	nombreLigne = nombreMot = nombreCaractere = 0;

	while((c = getchar()) != EOF)
	{
		++nombreCaractere;
		if(c == '\n'){
			++nombreLigne;
		}
		if(c == ' ' || c == '\n' || c == '\t'){
			etat = DEHORS;
		}
		else if (etat == DEHORS){
			if(c == ' '){
				etat = DEDANS;
				++nombreMot;
			}

		}
		

	}
	printf("---- Word Count ----\n");
	printf("Nombre de caractere : %1d\n", nombreCaractere);
	printf("Nombre de ligne : %5d\n", nombreLigne);
	if(nombreMot > 1)
		printf("Nombre de mots : %7d\n", nombreMot);
	else
		printf("Nombre de mot : %7d\n", nombreMot);

	return 0;
}
