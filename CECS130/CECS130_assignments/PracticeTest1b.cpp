#include <stdio.h>
#include <stdlib.h>


int main()
{
	float p;
	float d;
	float total;
	printf("Enter the price of the tree: ");
	scanf("%f", &p);
	printf("\nEnter the discount rate: ");
	scanf("%f", &d);
	if(p<0 || d<0)
	{
		printf("\nThe price or discount can't be negative");
	}else
	{
		total = p - p*d;
		printf("\nThe discounted price is: %.2f", total);
	}
	return 0;
}
