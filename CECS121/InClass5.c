#include<stdio.h>
char printName(char[][5]);
main()
{
	char names[2][5]={{"Kenny"},{"Jimmy"}};
	printName(names);
	system("pause");
}
char printName(char names[2][5])
{
	int x,y;
	for(x=0;x < 2;x++)
	{
		for(y=0;y < 5;y++)
		     printf("%c", names[x][y]);
	    printf("\n");
	}	
}
