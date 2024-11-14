#include <iostream>
using namespace std;

class student
{
    // string name;
    char name[20];
    int rollNo;

public:
    void setData()
    {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter roll no: ";
        cin >> rollNo;
    }
    void getData()
    {
        cout << "Name: " << name << endl
             << "Roll No: " << rollNo << endl;
    }
    void learn(string learningMaterial);
};

void student::learn(string learningMaterial)
{
    cout << "You learn using " << learningMaterial << endl;
}

int main()
{
    student stdnt1;
    stdnt1.setData();
    stdnt1.getData();
    stdnt1.learn("YouTube");

    student stdnt2;
    stdnt2.setData();
    stdnt2.getData();
    stdnt2.learn("Books");

    return 0;
}