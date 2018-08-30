#include<stdio.h>
void compare(int[], int[]);
main()
{
	int A[]={13,21,32,15,10};
	int B[]={11,12,13,14,20};
	compare(A,B);
}
void compare(int A[], int B[])
{
	int i;
	int C[5];
	for(i=0;i<5;i++)
	{
		if(A[i]>B[i])
		{
			C[i]=A[i];
		}
		else
		{
			C[i]=B[i];
		}
		printf("%d\t", C[i]);
	}
	
}
