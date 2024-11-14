#include <iostream>
using namespace std;

class Y;

class X
{
    int data;
    friend void add(X, Y);
public:
    void setValue(int value)
    {
        data = value;
    }
};

class Y
{
    int data;
    friend void add(X, Y);
public:
    void setValue(int value)
    {
        data = value;
    }
};

void add(X o1, Y o2)
{
    cout << o1.data + o2.data << endl;
}

int main()
{
    X num1;
    num1.setValue(5);

    Y num2;
    num2.setValue(6);

    add(num1, num2);
    
    return 0;
}