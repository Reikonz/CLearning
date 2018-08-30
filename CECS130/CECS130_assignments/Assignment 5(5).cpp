	/***************/
	/*Kenny Dang   */
	/*CECS  130    */
	/*assignment 5(5)*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
void readFile(void);

main()
{
	FILE *pFile;//creates the pointer to the file
	char name[30];
	char power[30];
	int x;
	
	//Opens the file in write mode
	pFile = fopen("superheroes.txt","w");
	
	if(pFile == NULL)
	{
		goto ErrorHandler;
		printf("\nFile cannot be opened");
	}else
	{
		printf("Enter Superhero Name and Superpower\n");
		for(x=0;x<3;x++)
		{
			//asks for user input
			printf("Name: ");
			scanf("%s", name);
			printf("Power: ");
			scanf("%s", power);	
			printf("\n");		
			//writes data into file
			fprintf(pFile,"%s\t%s\n", name, power);
		}
		fclose(pFile);//close file 
	}
	
	//Opens the file in read mode
	pFile = fopen("superheroes.txt","r");
	if(pFile == NULL)
	{
		goto ErrorHandler;
		printf("\nFile cannot be opened");
	}else
	{
		printf("Name\t\tPower");
		//scans the file for the data seperated with tabs
		fscanf(pFile,"%s\t%s",name, power);
		//print the names and powers until the end of file
		while(!feof(pFile))
		{
			printf("\n%s\t\t%s", name, power);
			fscanf(pFile,"%s\t%s",name, power);
		}
		fclose(pFile);
	}
	exit(EXIT_SUCCESS);//exit program normally
	
	ErrorHandler:
		perror("The following error ocurred");
		exit(EXIT_FAILURE);//exit program with error
}

	//fopen("file.name", "function(r,w,a)"
	//fclose(file pointer)
	//goto goes to a named "function" to properly exit the file if error occurs
	//exit() used to terminate program for I/O errors
	//exit(EXIT_SUCCESS) means exit normally
	//exit(EXIT_FAILURE) means exit w/ failure
