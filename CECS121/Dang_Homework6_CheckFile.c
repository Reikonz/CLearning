/***************************/
/******Phuong, Dang*********/
/******CECS 121-02**********/
/********HomeWork#6*********/
/********7/25/2014**********/
/***************************/
#include<stdio.h>
#include<strings.h>

typedef struct courseList
{
	char courseName[21];
	int creditHours;
	float grade;
}course;

typedef struct studentInfo
{
	char firstName[21];
	char lastName[21];
	int id;
	char address[51];
	char phoneNumber[21];
	char birthDate[21];
	char startDate[21];
	char endDate[21];
	float gpa;
	int totalCredits;
	course courseList[20];
	int courseSize;
}info;

void addNew(info student[],int *size);
void printStudent(info student[],int size);
void searchName(info student[],int size);
void searchID(info student[],int size);



main()
{
	FILE *pFile;
	pFile=fopen("database.txt","r");
	if(pFile==NULL)
		printf("\nFile can't be open\n");
	else{
		printf("File was opened\n");
		printf("File was closed\n");
	fclose(pFile);
	}
	
	int choice,x,size=0;
	info student[20];
	strcpy(student[size].firstName,"Kenny");
	strcpy(student[size].lastName,"Dang");
	strcpy(student[size].phoneNumber,"502-682-8288");
	strcpy(student[size].startDate,"00/00/0000");
	strcpy(student[size].address,"121HeritageLane");
	strcpy(student[size].birthDate,"08/16/1995");
	strcpy(student[size].endDate,"00/00/0000");
	student[size].id=1781171;
	student[size].totalCredits=10;
	student[size].gpa=4.0;
	size++;
	strcpy(student[size].firstName,"Muffin");
	strcpy(student[size].lastName,"Man");
	strcpy(student[size].phoneNumber,"502-342-6872");
	strcpy(student[size].startDate,"00/00/0000");
	strcpy(student[size].address,"892candyroad");
	strcpy(student[size].birthDate,"02/20/2000");
	strcpy(student[size].endDate,"00/00/0000");
	student[size].id=2000000;
	student[size].totalCredits=5;
	student[size].gpa=3.0;
	size++;
	
	
	do{
	
	printf("Kenny's Student Info System\n");
	printf("***************************");
	printf("\n1.Add New\n2.Search Name\n3.Search ID\n4.Display\n5.Clear screen\n6.Quit\n");
	printf("***************************\n");
	printf("Enter your choice: ");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
			addNew(student,&size);
			break;
		case 2:
			searchName(student,size);
			break;
		case 3:
			searchID(student,size);
			break;
		case 4:
			printStudent(student,size);
			break;
		case 5:
			system("cls");
	}
}while(choice!=6);



pFile=fopen("database.txt","w");
	if(pFile==NULL)
		printf("\nFile can't be open\n");
	else{
		printf("File was opened\n");
		for(x=0;x<size;x++)
	{
		fprintf(pFile,"%s ",student[x].firstName);
		fprintf(pFile,"%s ",student[x].lastName);
		fprintf(pFile,"%d ",student[x].id);
		fprintf(pFile,"%s ",student[x].address);
		fprintf(pFile,"%s ",student[x].phoneNumber);
		fprintf(pFile,"%s ",student[x].birthDate);
		fprintf(pFile,"%s ",student[x].startDate);
		fprintf(pFile,"%s ",student[x].endDate);
		fprintf(pFile,"%.2f ",student[x].gpa);
		fprintf(pFile,"%d ",student[x].totalCredits );
	}
	printf("File was closed\n\n");
	fclose(pFile);
	}
	

pFile=fopen("database.txt","r");
	if(pFile==NULL)
		printf("\nFile can't be open\n");
	else{
		printf("File was opened\n");
		for(x=0;x<size;x++)
	{
		fscanf(pFile,"%s",student[x].firstName);
		fscanf(pFile,"%s",student[x].lastName);
		fscanf(pFile,"%d",&student[x].id);
		fscanf(pFile,"%s",student[x].address);
		fscanf(pFile,"%s",student[x].phoneNumber);
		fscanf(pFile,"%s",student[x].birthDate);
		fscanf(pFile,"%s",student[x].startDate);
		fscanf(pFile,"%s",student[x].endDate);
		fscanf(pFile,"%f",&student[x].gpa);
		fscanf(pFile,"%d",&student[x].totalCredits );
		
		
		printf("\nFirstName: %s\n",student[x].firstName);
		printf("LastName: %s\n",student[x].lastName);
		printf("ID: %d\n",student[x].id);
		printf("Address: %s\n",student[x].address);
		printf("Phone: %s\n",student[x].phoneNumber);
		printf("Birth: %s\n",student[x].birthDate);
		printf("Start: %s\n",student[x].startDate);
		printf("End: %s\n",student[x].endDate);
		printf("GPA: %.2f\n",student[x].gpa);
		printf("Credits: %d\n",student[x].totalCredits );
		
		
	}
	printf("\nFile was closed\n");
	fclose(pFile);
	}
	
	
}

void addNew(info student[],int *size)
{
	int x=*size;
	char answer;
	do
	{
		printf("\nFirst Name: ");
		scanf("%s",student[x].firstName);
		fflush(stdin);
		printf("Last Name: ");
		scanf("%s",student[x].lastName);
		fflush(stdin);
		printf("ID#: ");
		scanf("%d",&student[x].id);
		fflush(stdin);
		printf("Address: ");
		gets(student[x].address);
		printf("Phone Number: ");
		scanf("%s",student[x].phoneNumber);
		fflush(stdin);
		printf("Birth date: ");
		gets(student[x].birthDate);
		printf("Start date: ");
		gets(student[x].startDate);
		printf("End date: ");
		gets(student[x].endDate);
		student[x].courseSize=0;
		student[x].totalCredits=0;
		student[x].gpa=0;
		do
		{
			fflush(stdin);
			printf("\nEnter course name: ");
			gets(student[x].courseList[student[x].courseSize].courseName);
			printf("Enter credit hours: ");
			fflush(stdin);
			scanf("%d",&student[x].courseList[student[x].courseSize].creditHours);
			fflush(stdin);
			printf("Enter grade: ");
			scanf("%f",&student[x].courseList[student[x].courseSize].grade);
			fflush(stdin);
			printf("Do you want to add class? ");
			scanf("%c",&answer);
			fflush(stdin);

			student[x].totalCredits+=student[x].courseList[student[x].courseSize].creditHours;
			student[x].gpa=student[x].courseList[student[x].courseSize].grade*student[x].courseList[student[x].courseSize].creditHours+student[x].gpa;
			student[x].courseSize++;
			printf("\n");
		
		}while(answer!='n'&& answer!='N');
		student[x].gpa=student[x].gpa/student[x].totalCredits;
		printStudent(&student[x],1);

			printf("\nDo you want to add another student? ");
			scanf("%c",&answer);
			fflush(stdin);
			printf("\n");
		(*size)++;
		x=*size;
	}while(answer!='n'&& answer!='N');
}

void printStudent(info student[],int size)
{
	int x;
	for(x=0;x<size;x++)
	{
		printf("\nName: %s ",student[x].firstName);
		printf("%s\n",student[x].lastName);
		printf("ID: %d\n",student[x].id);
		printf("Address: %s\n",student[x].address);
		printf("Phone: %s\n",student[x].phoneNumber);
		printf("Birth: %s\n",student[x].birthDate);
		printf("Start: %s\n",student[x].startDate);
		printf("End: %s\n",student[x].endDate);
		printf("GPA: %.2f\n",student[x].gpa);
		printf("Total credits: %d\n\n",student[x].totalCredits );
	}
}

void searchName(info student[],int size)
{
	char fName[21];
	char lName[21];
	int x;
	fflush(stdin);
	printf("Enter first name: ");
	gets(fName);
	printf("Enter last name: ");
	gets(lName);
	for(x=0;x<size;x++)
	{
		if(!strcmp(fName,student[x].firstName)&&!strcmp(lName,student[x].lastName))
		{
		  printStudent(&student[x],1);
	    }
	}
}

void searchID(info student[],int size)
{
	int searchID,x;
	printf("Enter ID: ");
	scanf("%d",&searchID);
	fflush(stdin);
	for(x=0;x<size;x++)
	{
		if(searchID==student[x].id)
		{
		  printStudent(&student[x],1);
	    }
	}
	
}


