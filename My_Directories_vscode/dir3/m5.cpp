#include <iostream>
using namespace std;

// Function Overloading

// to calculate area of a parallelogram
float area(float x, float y)
{
    return x * y;
}
// to calculate area of a square
float area(float a)
{
    return a * a;
}

int main()
{
    int a;
    cin >> a;

    cout << area(a) << endl;

    float b, h;
    cin >> b >> h;

    cout << area(b, h) << endl;

    return 0;
}