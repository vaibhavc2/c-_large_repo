#include <iostream>
#include <string>
using namespace std;

class person
{
public:
    string name;
    int age;
    string sex;

    // constructor helps to input a predefined set data for any object on its initialization
    // this is invoked automatically at the time the object is created

    person(); // constructor declaration
    // since it takes no parameter, this is the default constructor
};

// Constructor definition
person ::person()
{
    name = "Vaibhav";
    age = 19;
    sex = "Male";
}

int main()
{
    person insaan1, insaan2;

    cout << insaan1.name << endl
         << insaan1.age << endl
         << insaan1.sex << endl;

    cout << endl
         << insaan2.name << endl
         << insaan2.age << endl
         << insaan2.sex << endl;

    return 0;
}