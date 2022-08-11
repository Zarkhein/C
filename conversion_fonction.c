#include <stdio.h>

float conversion(int a);

int main(void){
	
	int i,interval;
	interval = 20;


	for (i = 0; i < 300; i += interval)
	{
		printf("%f\n", conversion(i));
	}
	return 0;
}

float conversion(int fahr){
	
	float result;	
	
	result = 0;
	result = ((fahr - 32) / 1.8);

	return result;
}

