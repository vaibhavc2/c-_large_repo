// order of implementation of constructors and destructors in inheritance
#include <iostream>
using namespace std;

int a = 10;

class A
{
public:
    A()
    {
        a++;
        cout << "A constructor: " << a << endl;
    }
    ~A()
    {
        --a;
        cout << "A destructor: " << a << endl;
    }
};
class B : public A
{
public:
    B()
    {
        a++;
        cout << "B constructor: " << a << endl;
    }
    ~B()
    {
        --a;
        cout << "B destructor: " << a << endl;
    }
};
class C : public B
{
public:
    C()
    {
        a = a + 2;
        cout << "C constructor: " << a << endl;
    }
    ~C()
    {
        a = a - 2;
        cout << "C destructor: " << a << endl;
    }
};

int main()
{
    C o1;
}