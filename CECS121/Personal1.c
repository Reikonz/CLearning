#include<stdio.h>
#include<ctype.h>
void exchange(int x, int y);
main()
{
	char ch1;
	scanf("%c",&ch1);
	printf("%s",isdigit(ch1)?"You entered a digit":"You did not enter a digit");
	
	char* pCh2="1";
	printf("\n%s and %d",pCh2, *pCh2);
	
	int x=1;
	int* p=&x;
	printf("\n%d and %d", *p, p);
}
