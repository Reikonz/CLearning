#include <stdio.h>
#include <stdlib.h>

void loadMyExpensses(const char *);

int main()
{
    const char *fileName = "file1.txt";
	loadMyExpensses(fileName);
}

void loadMyExpensses(const char *fileName){
	FILE *filePTR = NULL;
	int i;
	char myLine[80];
	char myName[100];
	
	
	
	//Opens the file in write mode
	filePTR = fopen(fileName,"w");
	
	if(filePTR == NULL)
	{
		printf("\nFile cannot be opened");
	}else
	{
		printf("Enter name\n");
		gets(myName);	
		fprintf(filePTR,"%s\n", myName);
		fclose(filePTR);//close file 
	}
		
	
	filePTR = fopen(fileName, "r");
	if(filePTR!=NULL)
	{
		printf("File was opened\n");
		while(!feof(filePTR))
		{
			fgets(myLine, 80, filePTR);
			printf("\nI read: %s", myLine);
		}
		fclose(filePTR);
	}else
	{
		printf("File was not opened");
	}
}
