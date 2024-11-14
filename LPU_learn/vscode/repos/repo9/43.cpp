#include <iostream>

using namespace std;
class A
{
public:
    void get()
    {
        cout << "\n in A";
    }
};
class B
{
public:
    void get()
    {
        cout << "\n in B";
    }
};
class C : public A, public B
{
};
int main()
{
    C c;
    c.A::get(); // calling get function of class A when same function is there in 2 or more base classes
}