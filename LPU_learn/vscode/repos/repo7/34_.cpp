#include <iostream>
using namespace std;

// Copy Constructor example

class Rectangle
{
private:
    int area;
    int length, breadth;

public:
    Rectangle() // default constructor
    {
        cout << "Default Constructor invoked" << endl;
        length = 5, breadth = 6;
    }
    Rectangle(int l, int b) // parameterized constructor
    {
        cout << "\nParameterized Constructor invoked" << endl;
        length = l;
        breadth = b;
    }
    Rectangle(Rectangle &rect) // object as a paramter (copy constructor)
    {
        cout << "\nCopy Constructor invoked\n" << endl;
        length = rect.length;
        breadth = rect.breadth;
    }
    void areaCalculator()
    {
        area = length * breadth;
        cout << "Area = " << area << endl;
    }
};

int main()
{
    Rectangle r1, r2(2, 3), r3(r2); // Rectangle r2, r3(r2), r3 = r2; (same meaning for compiler)
    r1.areaCalculator();
    r2.areaCalculator();
    r3.areaCalculator();

    return 0;
}