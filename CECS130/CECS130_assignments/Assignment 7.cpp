	/***************/
	/*Kenny Dang   */
	/*CECS  130    */
	/*assignment 7*/
#include <iostream>
#include <string>
#include <math.h>

using std::string;
using std::cout;
using std::cin;

class vector
{
	public:
		int x, y, z; //data member declaration
		int coord1, coord2, coord3;
		vector(int x, int y, int z); //Constructor
		vector();
		~vector(); //Destructor
		void display(); //method display vector_w
};

vector::vector(){
	coord1 = 0;
	coord2 = 0;
	coord3 = 0;
}
vector::vector(int x, int y, int z)
{
	coord1 = x;
	coord2 = y;
	coord3 = z;
}

vector::~vector()
{
}

void vector::display()
{
	cout<<"("<<coord1<<","<<coord2<<","<<coord3<<")";
}

int addCoord1(vector&, vector&); //functions to add another vector
int addCoord2(vector&, vector&);
int addCoord3(vector&, vector&);
void setComponents(vector&); //function to manipulate vector


int main(void)
{
	//display w vector 
	cout<<"w=(x,y,z)\n";
	vector w;//calls the default constructor
	cout<<"w=";
	w.display();
	setComponents(w);
	cout<<"---->";
	w.display();
	cout<<"\n";
	cout<<"\n";
	//display v vector
	vector v(3,5,7);
    cout<<"v=(s,t,u)\n";	
	cout<<"v=";
	v.display();
	cout<<"\n";
	cout<<"\n";
	//dispaly u vector
	vector u(addCoord1(w,v),addCoord2(w,v),addCoord3(w,v));
	cout<<"u= w + v = (s+x,t+y,u+z)\n";
	cout<<"u=";
	u.display();
	return 0;
}

//function to set coordinates of the vector
void setComponents(vector &w)
{
	w.coord1 = 2;
	w.coord2 = 4;
	w.coord3 = 6;
}

//functions to add three coordinates
int addCoord1(vector &w, vector &v)
{
	return w.coord1+v.coord1;	
}
int addCoord2(vector &w, vector &v)
{
	return w.coord2+v.coord2;	
}
int addCoord3(vector &w, vector &v)
{
	return w.coord3+v.coord3;	
}
