#include <iostream>
using namespace std;

class Rectangle
{
private:
    int length, breadth;

public:
    Rectangle(int l, int b)
    {
        length = l;
        breadth = b;
    }
    void area()
    {
        int area = length * breadth;
        cout << "Area = " << area;
    }
};

int main()
{
    int length, breadth;
    cin >> length >> breadth;
    Rectangle r1(length, breadth);
    // Rectangle r2; // error: bec no def constr is created by user, since a constructor has been created!
    r1.area();

    return 0;
}