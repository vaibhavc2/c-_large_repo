#include <iostream>
using namespace std;

// Call by reference using pointers
void swap(int *n1, int *n2)
{
    int temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}
// Call by reference using C++ Reference variables
void _swap(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}
// int &_swap(int &x, int &y)
// {
//     int temp = x;
//     x = y;
//     y = temp;
//     return x; // this actually returns the reference variable
// }

int main()
{
    int a, b;
    cin >> a >> b;
    swap(&a, &b);

    cout << endl
         << a << endl
         << b;

    _swap(a, b);
    // _swap(a, b) = 45;

    cout << endl
         << endl
         << a << endl
         << b;

    return 0;
}