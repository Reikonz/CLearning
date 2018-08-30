
#include<stdio.h>

void readA(char[][6]);

main()
{
	char anyThing[2][6];
	int i,j;
	for(i=0; i<2; i++)
	{
		for(j=0; j<6;j++)
		{
		scanf("%c", &anyThing[i][j]);
		}
	}
/*	printf("%c%c%c%c%c\n", anyThing[1][0],anyThing[1][1],anyThing[1][2],anyThing[1][3],anyThing[1][4]);
	printf("%c%c%c%c%c\n", anyThing[0][0],anyThing[0][1],anyThing[0][2],anyThing[0][3],anyThing[0][4]);*/
	readA(anyThing);
	system("PAUSE");
	
}
 readA(char array[][6])
{
	int i, j;
	for(i=0; i<2;i++)
	{
		for(j=0; j<6; j++)
		printf("%c", array[i][j]);
	}

}
	
