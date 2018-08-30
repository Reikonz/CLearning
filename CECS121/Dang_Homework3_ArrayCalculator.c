/***************************/
/******Phuong, Dang*********/
/******CECS 121-02**********/
/********HomeWork#3*********/
/********7/2/2014**********/
/***************************/
#include<stdio.h>
int addArray(int arrayA[][3],int arrayB[][3]);
int subArray(int arrayA[][3],int arrayB[][3]);
int multArray(int arrayA[][3],int arrayB[][3]);
void printArrayA(int array[][3]);
void printArrayB(int array[][3]);
int arrayA[3][3];
int arrayB[3][3];
int arrayC[3][3];

main()
{
	int i,j;
	int choice;
do
{
	printf("1)A=?\n2)B=?\n3)A+B\n4)A-B\n5)AxB\n6)A=C\n7)B=C\n8)Quit");	
	printf("\nEnter your choice: ");
	scanf("%d", &choice);
	switch(choice)
	{
		case 1:
			printf("Enter A:\n");
			for(i=0;i<3;i++)
			{
				for(j=0;j<3;j++)
				{
				scanf("%d", &arrayA[i][j]);
				fflush(stdin);
				}
			}
			printArrayA(arrayA);
			break;
		case 2:
			printf("Enter B:\n");
			for(i=0;i<3;i++)
			{
				for(j=0;j<3;j++)
				{
				scanf("%d", &arrayB[i][j]);
				fflush(stdin);
				}
			}
			printArrayB(arrayB);
			break;
		case 3:
			addArray(arrayA,arrayB);
			break;
		case 4:
			subArray(arrayA,arrayB);
			break;
		case 5:
			multArray(arrayA,arrayB);
			break;
		case 6:
			printf("\nA:(new)\n");
			for(i=0;i<3;i++)
			{
				for(j=0;j<3;j++)
				{
					arrayA[i][j]=arrayC[i][j];
					printf("%d\t",arrayA[i][j]);
				}
				printf("\n");
			}
			printf("\n");
			break;
		case 7:
			printf("\nB:(new)\n");
			for(i=0;i<3;i++)
			{
				for(j=0;j<3;j++)
				{
					arrayB[i][j]=arrayC[i][j];
					printf("%d\t",arrayB[i][j]);
				}
				printf("\n");
			}
			printf("\n");
			break;
	}
}while(choice!=8);
}

/*print A matrix*/
void printArrayA(int array[][3])
{
	int i,j;
	printf("\nA:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",arrayA[i][j]);
		}
		printf("\n");
		
	}
	printf("\n");
}

/*print B matrix*/
void printArrayB(int array[][3])
{
	int i,j;
	printf("\nB:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",arrayB[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}

/*Add arrays*/
int addArray(int arrayA[][3],int arrayB[][3])
{
	int i=0,j=0;
	printf("\nC:(Sum)");
	printf("\n");
	for (i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		printf("%d\t",arrayA[i][j]+arrayB[i][j]);
		arrayC[i][j]=arrayA[i][j]+arrayB[i][j];
		}
		printf("\n");
	}
	
	printf("\n");
	
}

/*Sub arrays*/
int subArray(int arrayA[][3],int arrayB[][3])
{
	int i=0,j=0;
	printf("\nC:(Difference)");
	printf("\n");
	for (i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		printf("%d\t",arrayA[i][j]-arrayB[i][j]);
		arrayC[i][j]=arrayA[i][j]-arrayB[i][j];
		printf("\n");
	}
	printf("\n");
}

/*Mult. arrays*/
int multArray(int arrayA[][3],int arrayB[][3])
{
	int multiply[3][3];
	int i,j,k,sum = 0;
	for ( i = 0 ; i < 3 ; i++ )
    {
      for ( j = 0 ; j < 3 ; j++ )
      {
        for ( k = 0 ; k < 3 ; k++ )
        {
          sum = sum + arrayA[i][k]*arrayB[k][j];
        }
        multiply[i][j] = sum;
        sum = 0;
      }
    }
   	    printf("\nC:(Product)\n");
	for ( i = 0 ; i < 3 ; i++ )
    {
      for ( j = 0 ; j < 3 ; j++ )
        {
        printf("%d\t", multiply[i][j]);
        arrayC[i][j]=multiply[i][j];
		}
		printf("\n");
	}
	printf("\n");
}

