#include<stdio.h>
main()
{
	char letter;
	printf("Type letter you want to repeat: ");
	do
	{
		scanf("%c", &letter);
		printf("%c", letter);
	}while(letter!='q'&&letter!='Q');
	return 0;
	
}
