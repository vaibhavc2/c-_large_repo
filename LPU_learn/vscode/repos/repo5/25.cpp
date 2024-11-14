#include <iostream>
using namespace std;

// this pointer
class mainClass
{
    int num = 123;

public:
    void mainFunction()
    {
        cout << this << endl; // gives the address of the object which the this pointer is pointing to
        // all three of the following do the same thing
        cout << (*this).num << endl;
        cout << this->num << endl;
        cout << num << endl;
    }
};

int main()
{
    mainClass object1;
    object1.mainFunction();
    mainClass object2;
    object2.mainFunction();
    return 0;
}