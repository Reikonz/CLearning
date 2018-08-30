#include<stdio.h>
main()
{
	int usMaxSpeed= 80;
	
	float germanyMaxSpeed= 320;
	float iranMaxSpeed= 110;
	
	char first_initial= 'P';
	char last_initial= 'D';
	
	const int xxConst= 10;
	
	printf("xxConst:%d", xxConst);
	printf("\nusMaxSpeed:%d", usMaxSpeed);
	printf("\ngermanyMaxSpeed:%.0f", germanyMaxSpeed);
	printf("\niranMaxSpeed:%.0f", iranMaxSpeed);
	printf("\nfirst initial:%c", first_initial);
	printf("\nlast initial:%c", last_initial);
	
	printf("\n\nEnter a new usMaxSpeed:");
	scanf("%d", &usMaxSpeed);
	fflush(stdin);
	printf("New usMaxSpeed: %d", usMaxSpeed);
	
	printf("\n\nEnter a new germanyMaxSpeed:");
	scanf("%f", &germanyMaxSpeed);
	fflush(stdin);
	printf("New germanyMaxSpeed:%.0f", germanyMaxSpeed);
	
	printf("\n\nEnter a new iranMaxSpeed:");
	scanf("%f", &iranMaxSpeed);
	fflush(stdin);
	printf("New iranMaxSpeed:%.0f", iranMaxSpeed);
	
	printf("\n\nEnter a new first initial:");
	scanf("%c", &first_initial);
	fflush(stdin);
	printf("New first initial:%c", first_initial);
	
	printf("\n\nxxConst remains:%d", xxConst);
	
	return 0;
	
	
	
	
	
}
