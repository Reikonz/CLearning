	/***************/
	/*Kenny Dang   */
	/*CECS  130    */
	/*assignment 5(1)*/
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
void convertU(char *);
main()
{
	int x = 0;
	char name[20];
	printf("Enter your name: ");
	//scanf("%s", name); could use scanf if wanted
	gets(name);
	printf("Your name is: %s\n", name);
	printf("The length of your name: %d\n",strlen(name));
	//calls the convertU function and sends name to it
	convertU(name);
}
void convertU (char *name)
{
	int x;
	//loops through name and converts each letter to uppercase
	for(x=0;x<=strlen(name);x++)
	{
		name[x]=toupper(name[x]);
	}
	printf("Your name in capital is: %s",name);
}
