	/***************/
	/*Kenny Dang   */
	/*CECS  130    */
	/*assignment 5(2)*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

//declares the printName function
void printName(char *strName1[]);

main()
{
	int x,y;
	//declares an array of strings with 4 indexes 
	char *strName1[4]={"Florida","Oregon","California","Georgia"};
			for(x=0;x<4;x++)
		{
			printf("%s\n",strName1[x]);
		}
	printName(strName1);
}
void printName(char *strName1[])
{
	int i, j, k, result;
	char store[20];
	
	//bubble sorting
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				//compares string1 and string 2
				result = strcmp(strName1[j],strName1[j+1]);
				//if strcmp>0 then then string1 is before string 2 in alphabet
				if(result>0)
				{			
					strName1[4] = strName1[j];
					strName1[j] = strName1[j+1];
					strName1[j+1] = strName1[4];
				}	
			}
		}
	//print the alphabetized set
		for(k=0;k<4;k++)
		{
			printf("\n%s",strName1[k]);
		}
}
