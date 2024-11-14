#include <iostream>
#include <string>

using namespace std;
#define String std::string
#define LOG(StringCombination) cout << StringCombination << endl;

// Abstract class contains at least one pure virtual function or abstract method
// Interface is an Abstract Class which contains only Pure Virtual Functions
// A pure virtual function (or abstract function) in C++ is a virtual function for which we can have implementation, But we must override that function in the derived class, otherwise the derived class will also become abstract class If we do not override the pure virtual function in derived class, then derived class also becomes abstract class.

//A class is abstract if it has at least one pure virtual function.
//No object can be created of an abstract class

class Base // Abstract Class
{
public:
    int x;
public:
    // an Abstract class can have a constructor which can then be used for the derived classes
    explicit Base(int& x):
        x(x) {}

    virtual void fun() = 0; // pure virtual method (abstract method or function)
//    virtual void fun() = NULL; // NOT VALID

    static void SomeFunction() {
        // do something here
        String AnyName("Henry Ford");
        LOG(AnyName);
    }
};

// This class inherits from Base and implements fun()
// The derived class must implement the abstract functions of the base class, otherwise it also becomes an abstract class
class Derived: public Base
{
    int y;
public:
    Derived(int &x, int &y) :
            Base(x), y(y) {}
    void fun() override { LOG("fun() is called!") }
};

int main()
{
    int a = 8, b = 10;
    Derived obj(a, b);
    obj.fun();
//    Base BaseObject; //error
//    Base* BaseObject = new Base(); //error
    Base* BasePointerToDerivedObject = new Derived(b, a); // this basically makes a pointer of the type Base to the object of the Derived class! Only due to inheritance properties.
    BasePointerToDerivedObject->fun();
    LOG(BasePointerToDerivedObject->x);

    Derived::SomeFunction();
    Base::SomeFunction();

    return 0;
}