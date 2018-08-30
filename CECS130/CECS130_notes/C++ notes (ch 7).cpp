	/***************/
	/*Kenny Dang   */
	/*CECS  130    */
	/*chapters 7*/
/*Two type of relationships to keep in mind:
	Composition - puting a class within a class
	Inheritance - having a parent class that provides shared attributes to child classes
	There is a third access specificer called "protected" = works exactly the same as private unless you use inheritance.
		all derived classes (inheritance) can access: global variable, class's own members, public and protected members of its base class
	If a base class does not have a constructor or one of the base class constructors does not require argumenets, no constructor is need in derived class. Derived class must have constructor that explicilty invokes base class's constructor iniitializer list if base class's constructors require arguments.
	Heres an example of initializing a derived class:
		class Base
		{
			public:
				Base() {cout << "Base's constructor";}
				~Base() {cout << "Base's destructor";}
		};
		class Derived : public Base
		{
			public:
				Derived(){cout << "Derived's constructor";}
				~Derived(){cout << "Derived's destructor";}
		};
		int main(void)
		{
			Derived d;
			return 0;
		}
		Output: (constructors then destructors - base is first and last)
			Base's constructor
			Derived's constructor
			Derived's destructor
			Base's destructor
			
	You can extend inheritances to create multi-level derivations. Begin with general concept for base then go more specific.
		class vehicle {};
		class LandVehicle : public Vehicle {};
		class Car : public LandVehicle {};
		class HandaCRZ: public Car{};
		
	When inheriting a member function you can choose to inherit:
		interface and implemenation - done automatically when initializing inheritance
		interface and an optional implementation - use if you declare function and the define it again later. (put "virtual" infront of every bas class's version of the function.
		interface only - used to help ensure that you don't accidentally attempt to create an object from that base class. (put "virtual" in front of base class initialized and "=0" at the end. Dervied class can override pure virtual function by declaring the function again with same data-type.
	Ex: Interface only
		class Abstract
		{
			virtual int f() = 0;
			virtual float g(float)=0;
		};
		class Derived : class Abstract
		{
			int f(); //override pure virtual from base, g() is not overriden.
		};
		int main(void)
		{
			Abstract a; //illegal
			Derived d; //illegal
			return 0;
		}
	
