#include <iostream>
using namespace std;

class Employee
{
    int id;
    static int count; // this is called class variable in OOPS

public:
    void setData();
    void getData();
    static void getCount();
};

void Employee ::setData()
{
    cout << "\nEnter ID: ";
    cin >> id;
    count++;
}

void Employee ::getData()
{
    cout << "\nThe ID is: " << id << endl
        //  << "This is Employee No." << count << "\n\n"
         << endl;
}

void Employee ::getCount()
{
    // static methods can access static variables or class variables only
    // cout << id; ERROR
    cout << count << endl;
}

// since this is static variable of the class, by default it is 0. It will keep updating after every object instead of being reinitialised again so that we can count the no. of objects
int Employee ::count;

// if we want to change the default value of the class variable, then we can do this:
// int Employee ::count = 100;

int main()
{
    // Employee ABC, XYZ;

    // ABC.setData();
    // ABC.getData();
    // Employee ::getCount();

    // XYZ.setData();
    // XYZ.getData();
    // Employee ::getCount();

    Employee Google[5];

    for (int i = 0; i < 5; i++)
    {
        Google[i].setData();
        Google[i].getData();
    }

    Employee ::getCount();
    

    return 0;
}