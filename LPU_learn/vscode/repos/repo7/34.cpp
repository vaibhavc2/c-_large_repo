#include <iostream>
using namespace std;

class Rectangle
{
private:
    int length, breadth;

public:
    Rectangle()
    {
        cout << "Constructor called " << this << endl;
    }
    ~Rectangle()
    {
        cout << "Destructor called " << this << endl;
    }
};

int main()
{
    Rectangle r1;
    {
        Rectangle r2;
    }

    return 0;
}