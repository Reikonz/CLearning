/***************************/
/******Phuong, Dang*********/
/******CECS 121-02**********/
/******MidTermHomework*****/
/********6/3/2014**********/
/***************************/
#include<stdio.h>
main()
{
	int age;
	printf("Enter your age: ");
	scanf("%d",&age);
	switch(age)
	{
		case 0 ... 99:
			printf("\nYou are young!");
			break;
		case 100:
			printf("\nYou are old!");
			break;
		default:
			printf("\nYou are really old...");
			break;
	}
}
