#include <iostream>
using namespace std;

class complex
{
    double real, imaginary;

public:
    void setData(double, double);
    void setData_sum(complex, complex, complex);
    void print();
};

void complex ::setData(double x, double y)
{
    real = x;
    imaginary = y;
}

void complex ::setData_sum(complex obj1, complex obj2, complex obj3)
{
    real = obj1.real + obj2.real + obj3.real;
    imaginary = obj1.imaginary + obj2.imaginary + obj3.imaginary;
}

void complex ::print()
{
    cout << real << " + i(" << imaginary << ")" << endl;
}

int main()
{
    complex num1, num2, num3, result;

    num1.setData(1, 2); // 1 + i2
    num1.print();
    num2.setData(3, 4); // 3 + i4
    num2.print();
    num3.setData(9.3, 5.78); // 9.3 + i5.78
    num3.print();

    result.setData_sum(num1, num2, num3);
    result.print();

    return 0;
}