#include <iostream>
using namespace std;

// Constructors

class mainClass
{
    int number1, number2;
public:
// constructor overloading
    mainClass() //default constructor (constructor with no parameters)
    {
        number1 = 5;
        number2 = 10;
    }
    mainClass(int num1) //parameterized constructor (constructor with parameters)
    {
        number1 = num1;
        number2 = 10;
    }
    mainClass(int num1, int num2) //parameterized constructor (constructor with parameters)
    {
        number1 = num1;
        number2 = num2;
    }
    int addition()
    {
        return (number1 + number2);
    }
};

int main()
{
    mainClass data1(32, 56);
    cout << data1.addition() << endl;

    mainClass data2(3);
    cout << data2.addition() << endl;

    mainClass data3;
    cout << data3.addition() << endl;


    return 0;
}