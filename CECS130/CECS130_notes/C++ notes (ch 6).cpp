	/***************/
	/*Kenny Dang   */
	/*CECS  130    */
	/*chapters 6*/

//stack is automatic memory where local variables are allocated
//heap is free stor or dynamic memory. Allows you to allocate whenever but wont disappear when the function ends.
//a pointer is a variable that holds a memory address of another variable.
//new operator used to allocate memory
//delete operator used to de-allocate memory
//this->X refers to the pointer X
//use the reference operator & to make a reference to a variable that will change the actual value if passed to a function

/*1. a) The size of "Hello World" is 12 using sizeof operator
b) The length of char s[]="Hello World" is 11 (w/o NULL). size of char is 1 therefore length is size*size_char = 12
2. Five reasons to use pointers are:
	-you can indirectly access a value of another variable
	-keep track of memory on the heap using new and delete operators
	-explicitly state which instance of a class you are referring to using the "this" operator
	-Maintain the memory address but change a variable value using a constant pointer
	-Maintain the value of a variable but change the memory address using a pointer to a constant
3. The recreated tic-tac-toe game does not utilize the heap management operators "new" and "delete" to allocate or deallocate memory.
4. Three reasons to use dynamic memory (heap):
	-able to allocate memory if needed
	-memory will not disapear when function ends
	-consumes minimal memory when function is called
	

