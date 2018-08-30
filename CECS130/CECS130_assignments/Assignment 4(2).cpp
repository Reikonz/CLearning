	/***************/
	/*Kenny Dang   */
	/*CECS  130    */
	/*assignment 4(2)*/
	
#include <stdio.h>
#include <stdlib.h>
int main (void)
{
	//declares the variables
	float iGPA[30];
	int choice;
	int x = 0;
	int i = 0;
	float average;
	float sumTotal = 0;
	
	//loops the GPA menu
	do{
	printf("Choose an option below\n");
	printf("1. Enter new GPA\n2. Calculate current average\n3. Exit\n");
	scanf("%d",&choice);
	
	//asks user for GPA 
	if(choice == 1)
	{
		printf("Enter GPA: ");
		scanf("%f",&iGPA[x]);
		x=x++;
	}else if (choice == 2)
	//calculates and prints the average GPA
	{
		for(i=0;i<x;i++)
		{
			sumTotal = iGPA[i]+sumTotal;
		}
		average = sumTotal/x;
		printf("Current Average = %f\n",average);
		sumTotal = 0;
		average = 0;
		system("pause");
	}
	}while(choice!=3);
}

