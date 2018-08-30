#include<stdio.h>
main()
{
	int elevator_weight;
	
	printf("Enter the weight of the elevator in pounds: ");
	scanf("%d", &elevator_weight);
	
	if(elevator_weight<5000)
	{
		printf("The elevator is ready to use.");
	}
	else
	{
		printf("The elevator is not safe.");
	}
	
}
