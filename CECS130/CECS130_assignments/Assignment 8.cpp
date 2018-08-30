	/***************/
	/*Kenny Dang   */
	/*CECS  130    */
	/*assignment 8*/
#include <iostream>
#include <string>
#include <math.h>
using std::string;
using std::cout;
using std::cin;
using namespace std;
/*****************
CLASS DECLARATION
*****************/
class vector
{
	public:
		int x,y,z; //data member declaration
		vector(){}; //Constructor creates blank object
		vector(int , int , int); //Constructor create object with number
		vector operator + (vector);//operator overload "return type operator+(parameter)"
		bool operator == (const vector &); 	
};
vector::vector(int a, int b, int c)//creates vector with integer
{
	x = a; 
	y = b; 
	z = c;
}
/*****************
END CLASS DECLARATION
*****************/

//function to add components
vector vector::operator+(vector input){
	vector temp; //creates new vector
	temp.x = x + input.x; //assign value to new vector
	temp.y = y + input.y;
	temp.z = z + input.z;

	return(temp); //return new vector
}
//function to find the length of vector
float findLength(vector input3){
	float length;
	length = sqrt(((input3.x)*(input3.x))+((input3.y)*(input3.y))+((input3.z)*(input3.z)));
	return length;
}
//function that returns true/false for each component
bool vector::operator==(const vector &input2)
{
	if(x==input2.x && y==input2.y && z==input2.z)
		return true;
	else
		return false;
}

int main(){
	vector v(2,2,1);
	vector w(2,2,1);
	vector u;
	cout <<"Vector v: ("<< v.x <<"," << v.y <<"," << v.z <<")"<<"\n";
	cout <<"Vector w: ("<< w.x <<"," << w.y <<"," << w.z <<")"<<"\n";
	u = v+w; 
	cout <<"Vector u: ("<< u.x <<"," << u.y <<"," << u.z <<")"<<"\n";
	if (v==w)
	{
		cout<<"Vector v has the same length as w\n";
	}else
	{
		cout<<"vector v does not have the same length as w\n";
	}
	cout <<"Length of v: "<< findLength(v) <<"\n";
	cout <<"Length of w: "<< findLength(w) <<"\n";
	cout <<"Length of u: "<< findLength(u) <<"\n";
}
