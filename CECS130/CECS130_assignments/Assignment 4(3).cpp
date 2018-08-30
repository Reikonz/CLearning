	/***************/
	/*Kenny Dang   */
	/*CECS  130    */
	/*assignment 4(3)*/
	
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	//declares the pointers
	int *iPtr;
	char *cPtr;
	float *fFloat;
	//declares the non-pointers
	int iNumber = 200;
	char cCharacter = 'K';
	float fNumber = 4.52;
	//assigns pointers to the corresponding variable address
	iPtr = &iNumber;
	cPtr = &cCharacter;
	fFloat = &fNumber; 
	
	//prints the non-pointer values
	printf("Non-Pointer Variables:\n");
	printf("iNumber = %d\n",iNumber);
	printf("cCharacter = %c\n",cCharacter);
	printf("fNumber = %f\n\n",fNumber);
	//prints the pointer values
	printf("Pointer Variables:\n");
	printf("iPtr = %p\n",iPtr);
	printf("cPtr = %p\n",cPtr);
	printf("fFloat = %p\n\n",fFloat);
	//prints the non-pointer addresses
	printf("Address Non-Pointer Variables:\n");
	printf("&iNumber = %p\n",&iNumber);
	printf("&cCharacter = %p\n", &cCharacter);
	printf("&fNumber = %p\n\n", &fNumber);
	//prints the pointer addresses
	printf("Address Pointer Variables:\n");
	printf("&iPtr = %p\n",&iPtr);
	printf("&cPtr = %p\n",&cPtr);
	printf("&fFloat = %p\n\n",&fFloat);
	//prints the values that the pointer points to
	printf("Pointer variable values:\n");
	printf("iPtr = %d\n",*iPtr);
	printf("cPtr = %c\n",*cPtr);
	printf("fFloat = %.2f\n\n",*fFloat);


}
