#include<stdio.h>
void printArray(int arrayA[][3]);
main()
{
	int i,j;
	int arrayA[3][3];
	
	printf("Enter array values for A: ");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d", &arrayA[i][j]);
		}
	}
	printArray(arrayA);
}
void printArray(int arrayA[][3])
{
	int i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d",arrayA[i][j]);
		}
		printf("\n");
	}
}
