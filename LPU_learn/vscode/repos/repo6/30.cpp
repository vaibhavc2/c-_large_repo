#define _USE_MATH_DEFINES; // to access the constants stored in cmath, like pi in M_PI

#include <iostream>
#include <cmath>

using namespace std;

double volume(double side)
{
    return (pow(side, 3));
}

double volume(double length, double breadth, double height)
{
    return (length * breadth * height);
}

double volume(double radius, double height)
{
    return (M_PI * (pow(radius, 2)) * height);
}


int main()
{
    cout << "\t\t\t\t\tCUBE" << endl;
    {
        double side;
        cout << "Enter side: ";
        cin >> side;
        cout << "The volume of cube is " << volume(side) << endl;
    }
    cout << endl
         << "\t\t\t\t\tCUBOID" << endl;
    {
        double length, breadth, height;
        cout << "Enter length, breadth, and height: ";
        cin >> length >> breadth >> height;
        cout << "The volume of the cuboid is " << volume(length, breadth, height) << endl;
    }
    cout << endl
         << "\t\t\t\t\tCYLINDER" << endl;
    {
        double radius, height;
        cout << "Enter radius and height: ";
        cin >> radius >> height;
        cout << "The volume of the cylinder is " << volume(radius, height) << endl; 
    }
    
    return 0;
}
