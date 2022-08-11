#include <stdbool.h>
#include <stdio.h>

int main(void){
	bool booleen = true;

	printf("true = %u, false = %u\n", true, false);
	printf("booleen = %u\n", booleen);
	
	printf("---------------------------------\n");
	
	printf("25 est différent de 20: %d\n", 25 != 20);
	printf("10 est égale a 10: %d\n", 10 != 10);
	printf("32 est inférieur a 25: %d\n", 32 < 25);
	printf("64 est superieur a 3; %d\n", 64 > 3);	
	
	return 0;

}
