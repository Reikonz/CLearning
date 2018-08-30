	/***************/
	/*Kenny Dang   */
	/*CECS  130    */
	/*chapters 5-6*/
	
	//classes describe a type of object with several data members
	//methods are the functions in the class that manipulate the data
	//data members are the variables that define what kind of data in the class
#include<string>
#include<iostream>
#include<ctime>
#include<cstdlib>
using std::string;
using std::srand;
using std::time;

class Bow
{
	//data member declaration
	string color;
	bool drawn;
	int numOfArrows;
	
public:
	Bow(string aColor); //constructor
	~Bow(); //destructor
	
	//methods
	void draw();
	int fire();
};

/*defining methods syntax
return_type ClassName::methodName(argumentList)*/


Bow::Bow(string aColor)
{
	numOfArrows = 10;
	drawn = false; 
	color = aColor;
	//seeds the time
}


Bow::~Bow()
{
}

//draws the bow
void Bow::draw()
{
	using std::cout;
	drawn =true;
	cout<<"The "<<color<<"bow has been drawn.\n";
}
//fires the bow if drawn
int Bow::fire()
{
	using std::cout;
	if(!drawn)
	{
		cout<<color<<"has not been drawn and therefore could not fire.\n";
		return 0;
	}
	int score;
	score = rand()%(10-0+1)+0;
	if(score==0)
		cout<<color<<" missed the target!\n";
	else
		cout<<color<<" scored "<<score<<" points!\n";
	return score;
}
