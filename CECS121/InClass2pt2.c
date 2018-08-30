#include<stdio.h>
main()
{
	char letter_grade;
	printf("Enter a letter grade: ");
	scanf("%c", &letter_grade);
	switch(letter_grade)
	{
		case'A':case'a':
			printf("Excellent!!");
			break;
		case'B':case'b':
			printf("Good");
			break;
		case'C':case'c':
			printf("Pass");
			break;
		default:
			printf("Fail");
			break;
	}
}
