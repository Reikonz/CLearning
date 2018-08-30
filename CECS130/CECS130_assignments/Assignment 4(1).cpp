	/***************/
	/*Kenny Dang   */
	/*CECS  130    */
	/*assignment 4(1)*/
#include <stdio.h>
#include <stdlib.h>
int ascending(int);
int descending(int);

int main(void)
{
	int iNumbers[10];
	int x, y, choice, temp;
	
	//asks for user to input 10 numbers
	printf("Enter 10 different numbers: \n");
	for (x=0;x<10;x++)
	{
		//printf("\n%d",x);
		scanf("%d",&iNumbers[x]);
	}
	
	//displays menu options and asks for choice
	do{
	printf("\nSelect a sorting option below:\n");
	printf("1. Ascending\n2. Descending\n3. End Program");
	printf("\n");
	scanf("%d",&choice);
	switch (choice)
	{
		/*compares two adjacent numbers. If the number in higher index is LOWER, then store it in a temp and assign 
		the higher value in the higher index and assign the temp value into the lower index.*/
		case 1:
			for(x=0;x<10;x++)
			{
				for(y=0;y<9;y++)
				{
					if(iNumbers[y+1]<iNumbers[y])
					{
						temp = iNumbers[y+1];
						iNumbers[y+1] = iNumbers[y];
						iNumbers[y] = temp;
					}
				}
			}
				printf("\n");
			for(x=0;x<10;x++)
			{
				printf("%d ",iNumbers[x]);
			}
			break;
		/*compares two adjacent numbers. If the number in higher index is HIGHER, then store it in a temp and assign 
		the lower value in the higher index and assign the temp value into the lower index*/
		case 2:
			for(x=0;x<10;x++)
			{
				for(y=0;y<9;y++)
				{
					if(iNumbers[y+1]>iNumbers[y])
					{
						temp = iNumbers[y+1];
						iNumbers[y+1] = iNumbers[y];
						iNumbers[y] = temp;
					}
				}
			}
				printf("\n");
		//prints the iNumbers array
			for(x=0;x<10;x++)
			{
				printf("%d ",iNumbers[x]);
			}
			break;
		//ends the program
		case 3:
			return 0;
			break;
	}
	}while(choice !=3);
	
}

