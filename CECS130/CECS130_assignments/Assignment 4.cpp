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
	int x, choice;
	printf("Enter 10 different numbers: \n");
	for (x=0;x<10;x++)
	{
		//printf("\n%d",x);
		scanf("%d",&iNumbers[x]);
	}
	system("cls");
	printf("Select a sorting option below:\n");
	printf("1. Ascending\n2. Descending");
}

