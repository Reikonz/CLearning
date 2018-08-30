#include<stdio.h>
#include<stdlib.h>
#include<string.h>

main()
{
	int x,y;
	char strName[20]="kenny";
	char strOther[20]="cDEfg";
	//strcpy(strName, "abcdef");
	//strcpy(strTime,"ABCDEF");
	printf("%s\n",strName);
	
	x=strcmp(strName,strOther);
	if(x>0)
	{
		printf("str1 is greater than str2.\n");
	}
	
	y=strcat(strName," is my name");
	printf("%s",y);
	
}
