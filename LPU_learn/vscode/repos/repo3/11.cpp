#include <iostream>
using namespace std;

class className
{
    int a = 10;
    static char ch; // in old compilers it is error if static variable is not declared outside the class as well

public:
    static int var;
    // static int var = 9; // ERROR: outside the class
    static void mainMethod();
};

char className::ch; // if not done, Error in old compilers 
int className::var = 9;
// default value is 0 in static variable

void className::mainMethod()
{
    // cout << a; // ERROR
    // static methods can access static variables only

    while (var < 12)
    {
        var++;
    }
}

int main()
{
    className::mainMethod();
    cout << className::var;
    return 0;
}