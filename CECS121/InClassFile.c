#include<stdio.h>

main()
{
	FILE *pFile;
	char fName[10];
	char lName[10];
	int phone;
	int studentID;
	
	pFile=fopen("info.dat","w");
	if(pFile==NULL)
		printf("\nFile can't be open\n");
	else{
		scanf("%s%s%d",fName,lName,&phone);
		fprintf(pFile,"%s\t%s\t%d",fName,lName,phone);
		fclose(pFile);
	}
	
	pFile=fopen("info.dat","r");
		if(pFile==NULL)
		printf("\nFile can't be open\n");
	else{
		fscanf(pFile,"%s%s%d",fName,lName,&phone);
		printf("%s\t%s\t%d\n",fName,lName,phone);
		fclose(pFile);
	}
	
	pFile=fopen("info.dat","a");
	if(pFile==NULL)
		printf("\nFile can't be open\n");
	else{
		scanf("%d",&studentID);
		fprintf(pFile,"%d",studentID);
		fclose(pFile);
	}
	
	pFile=fopen("info.dat","r");
		if(pFile==NULL)
		printf("\nFile can't be open\n");
	else{
		fscanf(pFile,"%d",&studentID);
		printf("%d\n",studentID);
		fclose(pFile);
	}
	
	
	
	
	
}
