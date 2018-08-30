#include<stdio.h>

void addArray (int[], int[], int[]);
main()
{
	int i;
	int A[]={1,2,3,4,5,6,7,8,10};
	int B[]={11,12,13,14,15,16,17,18,19};
	int C[9];
	addArray (A,B,C);
	for(i=0;i<9;i++)
		{
			printf("%d ", C[i]);
		}
}
void addArray(int A[], int B[], int C[])
{
	int i;
	for(i=0; i<9; i++)
	{
		C[i]=A[i]+B[i];
	}	
}
