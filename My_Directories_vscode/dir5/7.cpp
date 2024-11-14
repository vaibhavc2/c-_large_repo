#include <iostream>
#include <cmath>
using namespace std;

class Point
{
    double x, y;

public:
    friend double Distance(Point, Point);
    Point(double *a, double *b)
    {
        x = *a;
        y = *b;
    }
    void displayPoint()
    {
        cout << x << ", " << y << endl;
    }
};

double Distance(Point p1, Point p2)
{
    double dist, i;
    i = pow((p2.x - p1.x), 2) + pow((p2.y - p1.y), 2);
    dist = pow(i, 0.5);
    return dist;
}

int main()
{
    double x1, y1, x2, y2;

    cin >> x1 >> y1;
    Point p1 = Point(&x1, &y1);

    cin >> x2 >> y2;
    Point p2 = Point(&x2, &y2);

    double distance = Distance(p1, p2);
    cout << distance << endl;

    return 0;
}