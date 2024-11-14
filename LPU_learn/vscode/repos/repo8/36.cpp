#include <iostream>
using namespace std;

class Base
{
private:
    const int c;

public:
    Base(int c_var) : c(c_var)
    {
        cout << "Value is " << c; // c=c_var error
    }
};

int main()
{
    Base il(10); //object
}