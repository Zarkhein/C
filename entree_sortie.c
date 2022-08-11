#include <stdio.h>

int main(void){
	
	int c;
	int newLine, newTab;

	newLine = 0;
	newTab = 0;

	while((c = getchar()) != EOF){
		if(c == '\n')
		{
			++newLine;
		}
		if (c == '\t')
		{
			++newTab;
		}
		printf("New line; %d\n", newLine);
		printf("New Tab: %d\n", newTab);

	}

}

