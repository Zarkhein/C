#include <stdio.h>

int main(void){
	int day, month, year,dayMonth, dayYear;

	printf("Entrer une date (jj/mm/aaaa): ");
	scanf("%d/%d/%d", &day, &month, &year);
	
	
	dayMonth += 365 * (year - 1);

	if(year > 1582)
	{
		dayMonth += ((year - 1) / 4);
		dayMonth -= ((year - 1) / 100);
		dayMonth += ((year - 1) / 400);
		dayMonth += 2;	
	}
	else
	{
		dayMonth += ((year -1) / 4);

	}
	
	dayMonth = (month -1) * 31;
	
	switch(month)
	{
		case 12:
			--dayMonth;
		case 11:
		case 10:
			--dayMonth;
		case 9:
		case 8:			
		case 7:
			--dayMonth;
		case 6:			
		case 5:
			--dayMonth;			 
		case 4:
		case 3:
			if(year > 1582)
			{
				if(year % 4 == 0 && ( year % 100 != 0 || year % 400 == 0))
				{
					dayMonth -=2	
				}
				else
				{
					dayMonth -= 3;
				}
			}
			else
			{
				if(year % 4 == 0)
				{
					dayMonth -= 2;
				}
				else{
					dayMonth -=3;
				}	
			}

			break;
	}

		
	day += dayMonth -1;
	day = (day)%7;
	
	switch (day)
	{
		case 0:
			printf("C'est un samedi");
			break;
		case 1:
			printf("C'est un dimanche");
			break;
		case 2:
			printf("C'est un lundi");
			break;
		case 3:
			printf("C'est un mardi");
			break;
		case 4:
			printf("C'est un mercredi");
			break;
		case 5:
			printf("C'est un jeudi");
			break;
		case 6:
			printf("C'est un vendredi");
			break;

	}
	return 0;
}
