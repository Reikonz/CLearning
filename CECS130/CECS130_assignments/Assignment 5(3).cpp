	/***************/
	/*Kenny Dang   */
	/*CECS  130    */
	/*assignment 5(3)*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

//typedef used to add an alias
typedef struct car{
	char make[10];
	char model[10];
	int year;
	int miles;
}car/*alias can be named anything (what the type will be called)*/;

int main()
{
	//instance of car structure 
	car number_1;
	//assign values
	strcpy(number_1.make, "Honda");
	strcpy(number_1.model, "CRZ");
	number_1.year = 2012;
	number_1.miles = 30000;
	//print values
	printf("Make: %s\n",number_1.make);
	printf("Model: %s\n",number_1.model);
	printf("Year: %d\n",number_1.year);
	printf("Miles: %d\n",number_1.miles);
}
//unions are structures that share the same memory address for each variable
//pass struct by reference using ->
//type casting allows you to convert a data type to another using (data type) in front of variable
