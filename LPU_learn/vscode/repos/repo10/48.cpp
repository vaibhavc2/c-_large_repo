#include <iostream>
using namespace std;

int a = 10;
// order of implementation of constructors and destructors in inheritance with virtual base class

class base1
{
public:
    base1()
    {
        a++;
        cout << "base1 constructor: " << a << endl;
    }
    ~base1()
    {
        --a;
        cout << "base1 destructor: " << a << endl;
    }
};

class base2
{
public:
    base2()
    {
        a++;
        cout << "base2 constructor: " << a << endl;
    }
    ~base2()
    {
        --a;
        cout << "base2 destructor: " << a << endl;
    }
};

// constructor of virtual class is used first and then other class, for destructor, this is reversed
class derived : public base1, public virtual base2
{
public:
    derived()
    {
        a = a + 2;
        cout << "derived constructor: " << a << endl;
    }
    ~derived()
    {
        a = a - 2;
        cout << "derived destructor: " << a << endl;
    }
};

int main()
{
    derived o1;

    return 0;
}