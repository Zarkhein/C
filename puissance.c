#include <stdio.h>


int puissance(int x, int y);

int main(void){
	
	int i;

	for(i = 0; i <= 10; ++i){
		printf("%d\n", puissance(2,i));
	}
	return 0;
}

int puissance(int entier, int puissance)
{
	int i, p;
	p = 1;
	for(i = 1; i <= puissance; ++i){
		
		p = p * entier;
	}
	
	return p;
}
