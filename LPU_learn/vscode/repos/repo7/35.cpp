#include <iostream>
using namespace std;

class Base
{
private:
    int value; // data mem
public:
    Base(int value) : value(value)
    {
        cout << "Value is " << value; // value=value; => is wrong, hence this method
    }
};

int main()
{
    Base il(10); //object
    return 0;
}