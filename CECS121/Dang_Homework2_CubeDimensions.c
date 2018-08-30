/***************************/
/******Phuong, Dang*********/
/******CECS 121-02**********/
/********HomeWork#1*********/
/********6/3/2014**********/
/***************************/
#include<stdio.h>
main()
{
	int iSide;
	
	printf("Enter a side value for a cube: ");
	scanf("%d", &iSide);
	printf("The volume of the cube is %d", iSide*iSide*iSide);
	printf("\nThe surface area of the cube is %d", 6*(iSide*iSide));
	
}
