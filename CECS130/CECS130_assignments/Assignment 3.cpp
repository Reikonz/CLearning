	/***************/
	/*Kenny Dang   */
	/*CECS  130-50   */
	/*assignment 3*/
	
#include <stdio.h>
float divideTwoNumbers(int, int);
int findLargest(int, int);
void printATM(void);
int main(void)
{

//Part 1
	int x;
	x=100;
	printf("Part 1\n");
	do{
		printf("%d\n",x);
		x=x-10;
	}while (x>0);
	printf("%d",x+1);

	
//Part 2 
	int start, end, step, i;
	printf("\n\nPart 2\n");
	//Scans for start, end, and increment for counter
	printf("Enter the desired counting settings: \n");
	printf("Begin count on: ");
	scanf("%d", &start);
	printf("End count on: ");
	scanf("%d", &end);
	printf("Increment count by: ");
	scanf("%d", &step);
	//condition for counting up
	if (end>start)
	{
		for (start;start<end;)
		{
			printf("%d",start);
			printf(" ");
			start=start+step;
		}
		printf("%d",end);
	
	}
	//condition for counting down
	else
	{
		for (start;start>end;)
		{
			printf("%d",start);
			printf(" ");
			start=start-step;
		}
		printf("%d",end);	
	}
	
//Part 3
int num_1, num_2, num_3, num_4;
printf("\n\nPart 3\n");
//Calls the divide function and returns the remainder
printf("The Remainder Function\n");
printf("Enter the Dividend: ");
scanf("%d",&num_1);
printf("Enter the Divisor: ");
scanf("%d",&num_2);
printf("The remainder of the two numbers is: ");
printf("%f",divideTwoNumbers(num_1, num_2));

//Calls the compare function and returns the larger number
printf("\n\nFind the Largest Function");
printf("\nEnter the first number: ");
scanf("%d",&num_1);
printf("Enter the second number: ");
scanf("%d",&num_2);
printf("The larger number is: %d",findLargest(num_1, num_2));

//Calls the menu function and prints the ATM menu
printf("\n\nATM Menu\n");
printATM();
}

//Remainder function
float divideTwoNumbers(int num1, int num2)
{
		return num1 % num2;
}
//Compare Larger function
int findLargest(int num1, int num2)
{
	if (num1<num2)
	{
		return num2;
	}
	else
	{
		return num1;
	}
}
//ATM menu function
void printATM(void)
{
	printf("1. Deposit\n2. Withdraw\n3. View Balance\n4. Exit Menu");
}




