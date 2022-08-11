#include <stdio.h>

int main(void)
{
	float fahr, celsus;
	int min, max, interval;

	min = 0;
	max = 300;
	interval = 20;

	printf("---- Tableaux de conversion Fahrenhein-Celsius ----\n");
	while(min <= max)
	{
		celsus = (min - 32) /1.8;
		printf("F : %3.0f C : %3.2f \n", fahr, celsus);
		min += interval;
		fahr = min;
	}	


	return 0;
}

