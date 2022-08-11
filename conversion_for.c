#include <stdio.h>

#define MIN 0
#define MAX 300
#define INTERVAL 20



int main(void){
	float fahr;

	for (fahr = MIN; fahr <= MAX; fahr += INTERVAL)
	{
		printf("F : %4.1f | C : %3.2f\n", fahr, ((5.0/9.0) * (fahr-32.0)));
	}
}
