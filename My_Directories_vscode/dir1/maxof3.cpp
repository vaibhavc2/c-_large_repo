#include <iostream>
using namespace std;

int main()
{
    int a, b, c;

    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    if (a > b)
    {
        if (a > c)
        {
            cout << "\n"
                 << a << " is the greatest." << endl;
        }
        else
        {
            cout << "\n"
                 << c << " is the greatest." << endl;
        }
    }
    else
    {
        if (b > c)
        {
            cout << "\n"
                 << b << " is the greatest." << endl;
        }
        else
        {
            cout << "\n"
                 << c << " is the greatest." << endl;
        }
    }
    
    return 0;
}