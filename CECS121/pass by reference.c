#include<stdio.h>
void func(int* j);
main()
{
	int i=20;
	int *p=&i;
	printf("i=%d\n",*p);
	func(p);
	printf("i=%d\n",i);
}
void func(int* j)
{
	(*j)++;
}
