	/***************/
	/*Kenny Dang   */
	/*CECS  130    */
	/*assignment 4(4)*/
	
#include <stdio.h>
#include <stdlib.h>
#include<time.h>
//defines the TossDie function
int TossDie(int [],int);
int main(void)
{
	//seeds the random time
	srand(time(NULL));
	//declares dice array, dice amount, and user choice
	int diceArray[6];
	int diceAmount, choice;	
	do{
		//system("cls");
		printf("Choose an option below:\n");
		printf("1. Roll Dice\n2. Quit Game\n");
		scanf("%d",&choice);
		if(choice==1)
		{
			printf("How many dice would you like to roll? (up to 6): ");
			scanf("%d",&diceAmount);
			if(diceAmount>6)	{
				printf("That number is too high\n");
			}else
			{
			//call to the TossDie function. 
			TossDie(diceArray,diceAmount);			
			system("pause");
			}
		}
	}while(choice!=2);
}

int TossDie(int diceArray[],int diceAmount)
{
	//Arrays are pointers therefore diceArray is passed by reference
	int i;
	//prints a random for each diceAmount received
	//stores number into the diceArray
	for(i=0;i<diceAmount;i++)
	{
		diceArray[i]=(rand()%6)+1;
		printf("Dice number %d value: ", i+1);
		printf("%d\n",diceArray[i]);
	}
}
