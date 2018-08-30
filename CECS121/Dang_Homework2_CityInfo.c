/***************************/
/******Phuong, Dang*********/
/******CECS 121-02**********/
/********HomeWork#2*********/
/********6/3/2014**********/
/***************************/
#include<stdio.h>
main()
{
	char cCity;
	char cInfo;
	
	
	printf("B = Berlin\nT = Tehran\nS = Seoul");
	printf("\nEnter the firt letter of the city you want: ");
	scanf("%c",&cCity);
	fflush(stdin);
	
	
	printf("\n\nP = Population\nA = Area");
	printf("\nEnter the specification you want to compare: ");
	scanf("%c",&cInfo);
	
	switch(cCity)
	{
		case 'B':case 'b':
			printf("\nBerlin");
			break;
		case 'T':case 't':
			printf("\nTehran");
			break;
		case 'S':case 's':
			printf("\nSeoul");
			break;
	}
	switch (cInfo)
	{
		case 'P':case 'p':
			printf(" Population");
			if(cCity=='B'||cCity=='b')
			{
				printf(": 3.4million");
			}
			else
			{
				if(cCity=='T'||cCity=='t')
				{
					printf(": 14 million");
				}
				else
				{
					if(cCity=='S'||cCity=='s')
					{
						printf(": 25.6 million");
					}
				}
			}
			break;
		case 'A':case 'a':
			printf(" Area");
				if(cCity=='B'||cCity=='b')
			{
				printf(": 892.85 km^2");
			}
			else
			{
				if(cCity=='T'||cCity=='t')
				{
					printf(": 1,274 km^2 ");
				}
				else
				{
					if(cCity=='S'||cCity=='s')
					{
						printf(": 605.21 km^2");
					}
				}
			}
			break;
	}
		
	
	if(cInfo=='P'||cInfo=='p')
		printf("\nLouisville Population: 1,334,872");
	else
		printf("\nLouisville Area: 1,032 km^2");
	
	return 0;
	
	

}
