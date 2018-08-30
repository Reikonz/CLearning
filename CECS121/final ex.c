#include<stdio.h>
#include<strings.h>
typedef struct stuff
{
	char fName[21];
	char lName[21];
	char phone[21];
}info;

void scan(info[],int size);
void print(info[],int size);
//void search(info[],int size);

main()
{
	int i;
	int size=2;
	info person[size];
	while(i!=4)
	{
		printf("choose one: ");
		scanf("%d", &i);
		fflush(stdin);
		switch(i)
		{
			case 1:
				scan(person,size);
				break;
			case 2:
				print(person,size);
				break;
			  /*case 3:
				search(person,size);
				break;*/
				
				
		}
	}
	system("pause");
}

void scan(info person[],int size)
{
	int x;
	for(x=0;x<size;x++)
	{
		scanf("%s",&person[x].fName);
		fflush(stdin);
		scanf("%s",&person[x].lName);
		fflush(stdin);
		scanf("%s",&person[x].phone);
		fflush(stdin);
		break;
		//print(person,size);
	}
	
}

void print(info person[],int size)
{
	int x;
	for(x=0;x<size;x++)
	{
		printf("%s",person[x].fName);
		printf("%s",person[x].lName);
		printf("%s",person[x].phone);
	}
}


