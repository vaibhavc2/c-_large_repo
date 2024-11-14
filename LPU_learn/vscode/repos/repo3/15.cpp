#include <iostream>
using namespace std;
class A
{
    int a, b;

public:
    void ip()
    {
        cin >> a >> b; //10 20
    }
    friend class B;
};
class B
{
    int s;

public:
    void sum(A o1) // o1: 10 20
    {
        s = o1.a + o1.b; //a b part of A class
        cout << "sum = " << s << endl;
    }
};
main()
{
    A objA;
    B objB;
    objA.ip();      // a,b in objA 10 20
    objB.sum(objA); //10 20
}