#include <iostream>
using namespace std;

class Base
{
private:
    int &r; // ref var
public:
    Base(int &ref) : r(ref)
    {
        cout << "Value is " << r; // r=ref error
    }
};

int main()
{
    int ref = 10;
    Base il(ref); //object
    return 0;
}