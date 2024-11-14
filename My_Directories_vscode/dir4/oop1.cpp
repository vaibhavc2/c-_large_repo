#include <iostream>

using namespace std;

class Data
{
private:
    int a, b, c;

    // if the following method was written here, then it can't be accessed outside this class

    // void GetData()
    // {
    //     cout << a << endl;
    //     cout << b << endl;
    //     cout << c << endl;
    //     cout << d << endl;
    //     cout << e << endl;
    // }

public:
    int d, e;
    void SetData(int _a, int _b, int _c); // declaration of a method(function in class)
    void GetData()
    {
        cout << a << endl;
        cout << b << endl;
        cout << c << endl;
        cout << d << endl;
        cout << e << endl;
    }
} account; // the objects of a class may be declared here as well

void Data ::SetData(int _a, int _b, int _c) // defining the method declared in the class Data
{
    a = _a;
    b = _b;
    c = _c;
}

int main()
{
    // Data account;

    // account.a = 5; // this is error because the property 'a' is private, so it can't be accessed outside the class Data

    account.d = 4;
    account.e = 5;

    account.SetData(1, 2, 3);
    account.GetData();

    return 0;
}