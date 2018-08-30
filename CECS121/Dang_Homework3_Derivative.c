/***************************/
/******Phuong, Dang*********/
/******CECS 121-02**********/
/********HomeWork#3*********/
/********7/2/2014**********/
/***************************/
#include<stdio.h>
main()
{
	int maxPoly;
	int i=0,j=0;
	char answer,final;
	
do
{
	/*asking for numbers*/
	printf("Enter the max Degree of the polynomial: ");
	scanf("%d", &maxPoly);
	int arrCoeff[maxPoly+1];
	for(i=0;i<=maxPoly;i++)
	{
		printf("Enter Coeffecient for x^%d: ", maxPoly-i);
		scanf("%d", &arrCoeff[i]);
		fflush(stdin);
	}
	/*printing poly*/
	for(i=0;i<=maxPoly;i++)
	{
		if(arrCoeff[i]==0)
		{
	
		}
		else
		{
			if(i==maxPoly)
			{
				printf("%dx^%d ", arrCoeff[i],maxPoly-i);	
			}
			else
			{
				printf("%dx^%d + ", arrCoeff[i],maxPoly-i); 
			}
		}
	}
	printf("\nIs this correct?(answer Y for yes or N for no): ");
	scanf("%c",&answer);
	fflush(stdin);
	
	/*Calclulating derivative*/
	if(answer=='y' || answer=='Y')
	{
		printf("Its derivative is: ");
		for(i=0;i<=maxPoly;i++)
		{
		if(arrCoeff[i]==0)
		{
		}
			else
			{
				if(maxPoly-(i+1) < 0 || arrCoeff[i] == 0)
				{
				}
				else 
					if(i==maxPoly-1)
					{
					printf("%dx^%d ", arrCoeff[i]*(maxPoly-i),maxPoly-(i+1));	
					}
						else
						{
						printf("%dx^%d + ", arrCoeff[i]*(maxPoly-i),maxPoly-(i+1)); 
						}
			}
		}
		
	}
	else
	{
		printf("Sorry");
	}
		printf("\nDo you want to restart? ");
		scanf("%c", &final);
		printf("\n");
	
}while(final=='y' || final=='Y');
}
