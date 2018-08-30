#include<stdio.h>
#include<strings.h>
void search(char str1[]);
main()
{
	char str1[10], str2[10]="Jimmy";
	printf("Enter string value: ");
	scanf("%s", str1);
	printf("%d\n", strlen(str1));
	printf("%d\n", strspn(str1,str2));
//	printf("%s\n", strcpy(str1,str2));
	search(str1);

}

void search(char str1[])
{
	int count=0, temp;
	temp=strstr(str1,"en");
	printf("The substring is: %s",temp);
}


