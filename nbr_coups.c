#include <stdio.h>

int main(void){
	int nb_coups;
	printf("Entrer un nombre de coups: ");
	scanf("%d", &nb_coups);
	(nb_coups > 1)
		? printf("Vous gagnez en %d coups\n", nb_coups)
		: printf("Vous gagnez en %d coup\n", nb_coups);
	return 0;
}
