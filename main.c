#include <stdio.h>

int main(void)
{
	int vie, atk , def, speAtk;

	printf("Entrer le nombre de points de vie | attaque | défense : ");
	scanf("%d %d %d", &vie, &atk, &def);	
	printf("Vous avez: %d points de vie\n", vie);
	printf("Vous avez: %d attaque \n", atk);
	
	speAtk = vie;
	speAtk %= atk + 22;

	printf("Vous avez: %d spécial.Attaque \n", speAtk + 25);
	printf("Vous avez: %d défense \n", def);		
	return 0;
}
