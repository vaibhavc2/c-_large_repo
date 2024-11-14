#include <iostream>
using namespace std;

void calculation(int x, int y)
{
    x++;
    y++;
}

void calculationByReference(int &x, int &y)
{
    x++;
    y++;
}

void calculationByAddress(int *x, int *y)
{
    (*x)++;
    (*y)++;
}

int main()
{
    int a = 10, b = 5;
    cout << a << " " << b << endl;
    calculation(a, b);
    cout << a << " " << b << endl;
    calculationByReference(a, b); // the most efficient method: Call by Reference using the reference variables, uses less memory!
    cout << a << " " << b << endl;
    calculationByAddress(&a, &b);
    cout << a << " " << b << endl;
    return 0;
}