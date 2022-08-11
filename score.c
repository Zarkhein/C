#include <stdio.h>

int main(void){
	int score;
	printf("Afficher votre score: ");
	scanf("%d", &score);

	if(score <= 2000){
		printf("Votre score : %d\n", score); 
		printf("C'est la catastrophe!");
	}
	else if(score >= 2000 && score < 5000){
		printf("Votre score : %d\n", score);	
		printf("Tu peux mieux faire!");
	}
	else if(score >= 5000 && score < 9000){
		printf("Votre score : %d\n", score);
		printf("Ty es sur la bonne voie");
	}
	else{
		printf("Votre score : %d\n", score);
		printf("Tu es le meilleur!");
	}

	return 0;
}
