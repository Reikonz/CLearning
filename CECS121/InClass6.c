#include<stdio.h>
main()
{
	int intV=0;
	char charV='a';
	float floatV=3.14;
	
	int *pInt=&intV;
	char *pChar=&charV;
	float *pFloat=&floatV;
	
	*pInt=13;
	printf("%d", intV);
	printf("\n%d", pInt);
	
	*pChar='b';
	printf("\n%c", charV);
	printf("\n%d", pChar);
	
	*pFloat=2.23;
	printf("\n%.2f", floatV);
	printf("\n%d", pFloat);
	
}
