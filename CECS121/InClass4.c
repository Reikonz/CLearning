#include<stdio.h>
int fun(int, int);
main()
{
	int x,y,z;
	scanf("%d",&x);
	fflush(stdin);
	scanf("%d",&y);
	z =fun(x,y);
	printf("\n%d", z);
}

int fun(a, b)
{
	int c;
	c=a+b;
	return c;
}
