#include<stdio.h>
#include<strings.h>

void search(char[], char[]);
main()
{
	char str1[21], str2[21];
	puts("Enter two strings: ");
	scanf("%s",str1);
	//gets(str1);
	//scanf("%s", str2);
	search(str1,str2);
	printf("%d",strlen(str1));
	//printf("%d",strlen(str2));
}
void search(char str1[], char str2[])
{
	int countstr1, count;
	while(strstr(str1,"ea")!=NULL)
		countstr1++;
	do
	{
		if(strstr(str2,"ea")!=NULL)
			count++;
		else
			break;
	}while(1==1);
	printf("number of ..%d..", count);
	printf("number of ..%d..", countstr1);
	/*char temp[21];
	int i;    
	for(i=0; i<21; i++)
	{
	temp[i] = str1[i];
	str1[i] = str2[i];
	str2[i] = temp[i]; 
	}
	strcpy(temp,str1);            Could use this instead
	strcpy(str1,str2);
	strcpy(str2,temp);*/ 
}
