#include <iostream>
using namespace std;

void f1();
void f2();
int a = 20;

int main()
{
    a = 30;
    cout << a << "\t";
    {
        a = 35;
        cout << a << "\t";
    }
    f1();
    cout << a << "\t";
    f2();
    cout << a << "\t";

    return 0;
}

void f1()
{
    a = 60;
    cout << a << "\t";
}

void f2()
{
    a = 70;
    cout << a << "\t";
}