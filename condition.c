#include <stdio.h>

int main(void){

	int a,b;

	printf("Premier nombre: ");
	scanf("%d", &a);


	printf("Deuxieme nombre: ");
	scanf("%d", &b);

	if(a < b){
		printf("%d est inférieur à %d\n", a, b);
	}
	else{
		printf("%d est supérieur à %d\n", a, b);
	}


}
