	/***************/
	/*Kenny Dang   */
	/*CECS  130    */
	/*chapters 1-4*/
/* C++ Notes:
	-Uses #include <iostream> for ref library
	-use COUT for text output
	-have to prefix commands with "std::" unless you iniitialize the use in beginnig
	*/
#include<iostream>
#include<string>
#include<ctime>
#include<cstdlib>

int add(int a, int b); //function declaration

int main(void)
{
	using std::cout;
	using std::string;
	using std::cin;
	
	//displaying literal strings
	cout<< "Hello World!\n";
	
	//displaying stored string
	string yell = "A dragon is coming";
	cout<<yell.c_str()<<"\n"<<yell.c_str();
	
	//receiving input
	string name = "";
	cout<<"\nWhat is your name?\n";
	cin>>name;
	cout<<"\nHello "<<name.c_str()<<"\n";
	
	//integers
	int number1;
	int number2;
	cout<<"Enter two numbers to add\n";
	cin>>number1;
	cin>>number2;
	cout<<number1<<"+"<<number2<<"="<<number1+number2;

	//conditional statement
	int x = 3;
	int y = 5;
	cout<<"\n";
	if(x>y)
	{
		cout<<x;
	}else
	{
		cout<<y;
	}
	
	//switch statement
	int choice;
	cout<<"\nEnter a number between 1 - 4: \n";
	cin>>choice;
	cout<<"\n";
	switch(choice)
	{
		case 1:
		case 2:
		case 3:
			cout<<"You chose 1, 2, or 3\n";
			break;
		case 4:
			cout<<"You chose 4!\n";
			break;
		default:
			cout<<"You did not choose a number through 1 - 4\n";
	}
	
	//Loop - setup is same as C
	int count;
	for(int count = 0; count<10; count++)
	{
		cout<<count<<" ";
	}
	
	//random numbers
	using std::srand;
	using std::rand;
	using std::time;
	srand(time(0));
	cout<<"\n";
	cout<<rand();
	//formula for random range is = rand()%(max-min+1)+min
	int randNum = rand()%11+10;//random number between 10 - 20
	cout<<"\n";
	cout<<randNum;
	
	//function
	cout<<"\nThe sum of x and y is: "<<add(x,y);
	return 0;
}

int add(int a, int b)//function definition
{
	return a + b;
}
	
