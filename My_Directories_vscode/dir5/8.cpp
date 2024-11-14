#include <iostream>
#include <cmath>
using namespace std;

class Point
{
    double x, y;

public:
    // Constructor Overloading

    // Point()
    // {
    //     x = 0;
    //     y = 0;
    // }
    Point(double *a)
    {
        x = *a;
        y = 0;
    }
    Point(double *a, double *b)
    {
        x = *a;
        y = *b;
    }
    Point(double a = 0, double b = 0)
    {
        x = a;
        y = b;
    }
    void displayPoint()
    {
        cout << x << ", " << y << endl;
    }
};

int main()
{
    double x1, y1, x2, y2;

    cin >> x1 >> y1;
    Point p1 = Point(&x1, &y1);
    p1.displayPoint();

    cin >> x2;
    Point p2 = Point(&x2);
    p2.displayPoint();

    Point p3;
    p3.displayPoint();

    return 0;
}