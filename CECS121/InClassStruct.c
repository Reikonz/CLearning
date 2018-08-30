#include<stdio.h>

typedef struct contact
{
	char fName[15], lName[15];
	int phone;
}info;

void getValue(info i[20]);
void printValue(info i[20]);

main()
{
	info i[20];
	int x;
		getValue(i);
		printValue(i);
		

	
	/*for(x=0;x<20;x++)
	{
		printf("Enter info:\n");
		scanf("%s",&i[x].fName[15]);
		scanf("%s",&i[x].lName[15]);
		scanf("%d",&i[x].phone);
		printf("\n");
	}
	
	for(x=0;x<20;x++)
	{
		printf("%s",&i[x].fName[15]);
		printf("%s",&i[x].lName[15]);
		printf("%d",i[x].phone);
		printf("\n");
	}	*/
}

void getValue(info i[20])
{
	int x;
	for(x=0;x<20;x++)
	{
		scanf("%s",i[x].fName);
		fflush(stdin);
		scanf("%s",i[x].lName);
		fflush(stdin);
		scanf("%d",&i[x].phone);
		fflush(stdin);
	}
}

void printValue(info i[20])
{
	int x;
	for(x=0;x<20;x++)
	{
		printf("%s",i[x].fName);
		printf("%s",i[x].lName);
		printf("%d",i[x].phone);
	}
}


