#include<stdio.h>
main()
{
	int iSelection=0;
	float fTransAmount=0.0;
	float fBalance=100.50;
	
	printf("Enter 1 for Deposit");
	printf("\nEnter 2 for Withdraw\n\n");
	scanf("%d", &iSelection);
	
	if(iSelection==1)
	{
		printf("\nInput amount to deposit: ");
		scanf("%f", &fTransAmount);
		printf("\nYour new balance is: $%.2f", fTransAmount+fBalance);
	}
	if(iSelection==2)
	{
		printf("\nEnter funds to withdraw: ");
		scanf("%f", &fTransAmount);
		
		if(fTransAmount>fBalance)
			printf("\nInsufficient funds.");
		else
			printf("Your new balance is: $%.2f", fBalance-fTransAmount);
	}
}
