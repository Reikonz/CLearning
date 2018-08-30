/***************************/
/******Phuong, Dang*********/
/******CECS 121-02**********/
/********HomeWork#2*********/
/********6/3/2014**********/
/***************************/
#include<stdio.h>
#include<time.h>
main()
{
	int iGuess=0;
	int iRandom=0;
	srand(time(NULL));
	iRandom=rand()%2;
	
	
	printf("Enter 1 for tails and 2 for heads:\t ");
	scanf("%d", &iGuess);
	
	if(iGuess==1 && iRandom>.5)
	{
		printf("\nIt was tails, you won!");
	}
	if(iGuess==1 && iRandom<.5)
	{
		printf("\nIt was heads, you lose.");
	}
	if (iGuess==2 && iRandom>.5)
	{
		printf("\nIt was tails, you lose.");
	}
	if(iGuess==2 && iRandom<.5)
	{
		printf("\nIt was heads, you Won!");
	}
	
	return 0;
	
}
