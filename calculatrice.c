#include <stdio.h>
int main(void){
	
	int nbrPremier,nbrDeuxieme;
	
	printf("Bonjour !\n");
	
	printf("Veuillez sélectionner le premier nombre entier: ");
	scanf("%d", &nbrPremier);
	
	printf("Veuillez sélectionner le deuxieme nombre entier: ");
	scanf("%d", &nbrDeuxieme);

	printf("Calculs: \n");

	printf("\t %d + %d = %d\n", nbrPremier, nbrDeuxieme, nbrPremier + nbrDeuxieme);	
	printf("\t %d - %d = %d\n", nbrPremier, nbrDeuxieme, nbrPremier - nbrDeuxieme);
	printf("\t %d * %d = %d\n", nbrPremier, nbrDeuxieme, nbrPremier * nbrDeuxieme);
	printf("\t %d / %d = %.3f\n", nbrPremier, nbrDeuxieme, nbrPremier / (double)nbrDeuxieme);
	printf("Bye!");
		
	return 0;	
}
