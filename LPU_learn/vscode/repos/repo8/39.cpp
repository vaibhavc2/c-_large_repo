#include <iostream>
using namespace std;

class abc
{
    int a, b, c;

public:
    abc(int x, int y, int z)
    {
        a = x;
        b = y;
        c = z;
    }
    void show()
    {
        cout << a << "\n"
             << b << "\n"
             << c << "\n";
    }
    void operator-();
};
void abc::operator-()
{
    a = -a;
    b = -b;
    c = -c;
}

main()
{
    abc a1(5, -12, 5);
    abc a2(3, -7, -8);
    cout << "\nvalues in a1 object before - op: \n";
    a1.show();
    cout << "\nvalues in a2 object before - op: \n";
    a2.show();
    -a1; //call
    -a2;
    cout << "\nvalues in a1 object after - op: \n";
    a1.show();
    cout << "\nvalues in a2 object after - op: \n";
    a2.show();
}