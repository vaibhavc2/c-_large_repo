#include <iostream>
#include <math.h>

using namespace std;

bool pytha(int x, int y, int z)
{
    int a = max(x, max(y, z)), b, c;

    if (a == x)
    {
        b = y;
        c = z;
    }
    else if (a == y)
    {
        b = x;
        c = z;
    }
    else
    {
        b = x;
        c = y;
    }

    if (pow(a, 2) == pow(b, 2) + pow(c, 2))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    if (pytha(a, b, c))
    {
        cout << "It is a pythagorean triplet." << endl;
    }
    else
    {
        cout << "It is not a pythagorean triplet." << endl;
    }

    return 0;
}