	/***************/
	/*Kenny Dang   */
	/*CECS  130    */
	/*assignment 5(4)*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

main()
{
	//declares the variables
	char *name;
	int nameSize = 50;
	int count = 0;
	//reserves memory for 50*character size for the name string
	name = (char *)calloc(nameSize,sizeof(char));
	//(char *) is typecasting for calloc 
	if(name != NULL)
	{
		printf("Enter your name: ");
		gets(name);
		printf("Hi %s",name);
		do
		{
			printf("\n%c",name[count]);
			count++;
		}while(name[count]!=NULL);//ends if finished reading all of used spaces
	}else
	{
		printf("Failed to allocate memory");
	}
	printf("\nThe number of characters stored: %d", count);
}

	//stack is the area of memory when a function is called
	//heap is where the memory goes when it is not in use
	//sizeof tells the amount of memory of a variable
	//malloc() allocates dynamic memory for a fixed size pointer
	//free() frees memory that the input pointer refers to
	//calloc() functions the same as malloc() but has different syntax input
	//realloc() appends memory to an old pointer with desired amount
