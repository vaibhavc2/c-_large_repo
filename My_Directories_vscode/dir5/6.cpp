#include <iostream>
#include <string>
using namespace std;

class person
{
    string name;
    int age;
    string sex;

public:
    person(string str, int n, string sx) // this is a parameterized constructor
    {
        name = str;
        age = n;
        sex = sx;
    }
    void print_info()
    {
        cout << "\n"
             << name << "\n"
             << age << "\n"
             << sex << endl;
    }
};

int main()
{
    person p1("Vaibhav", 19, "male"); // Implicitly given the values
    person p2 = person("Kuleena", 18, "female"); // Explicitly given the values
    
    p1.print_info();
    p2.print_info();
    return 0;
}