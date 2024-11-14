// C++ program to demonstrate
// protected access modifier
#include <iostream>
using namespace std;

// base class
class Parent
{ 
	// protected data members
	protected:
	int id_protected;
	
};

// sub class or derived class from public base class
class Child : public Parent
{
	public:

    // constructor
    Child(int id)
    {
        id_protected = id;
    }

	// void setId(int id)
	// {
	// 	// Child class is able to access the inherited 
	// 	// protected data members of base class
	// 	id_protected = id;
	// }
	
	void displayId()
	{
		cout << "id_protected is: " << id_protected << endl;
	}
};

// main function
int main() {
	
	Child obj1(819564);
	
	// member function of the derived class can
	// access the protected data members of the base class
	
	obj1.displayId();
	return 0;
}
