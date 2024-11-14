#include <iostream>
using namespace std;

class mainProgram
{
public:
    // static int add(int a, int b = 0, int c) is diff frm below & is considered wrong
    // start giving default values from last to first parameter in case we want to set some defaults
    // static int add(int a, int b, int c = 0)
    static int add(int a, int b = 0, int c = 0)
    {
        return (a + b + c);
    }
};

void otherFunction()
{
    int a = 10, &b = a; // a & b are using the same memory location, b is alternative name of a
    // diff than pointer because the pointer stores the address of other variable at a diff memory location, but ref variable is just another name for the same variable
    cout << a << " " << b << endl; //10 10
    b = a + b;                     //b=20
    cout << a << " " << b << endl; //20 20
}

int main()
{
    otherFunction();
    int num1, num2, num3;
    cin >> num1 >> num2 >> num3;
    cout << mainProgram::add(num1, num2) << " " << mainProgram::add(num1, num2, num3);
    return 0;
}
