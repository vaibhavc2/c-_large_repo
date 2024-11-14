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
class B : public A
{
public:
    void get()
    {
        cout << "\n in B";
    }
};
class C : public B
{
};
int main()
{
    C c;
    c.get();
}