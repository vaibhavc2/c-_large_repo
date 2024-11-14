#include <iostream>
using namespace std;

// Forward declaration if the if that class's data is being accessed before it's definition
class complex;

class calculator
{
public:
    double sum(double a, double b)
    {
        return (a + b);
    }
    complex sum_complex(complex, complex); // just give declaration in the case that the class is defined ahead & define the function after the class complex is defined
    // complex sum_complex(complex n1, complex n2)
    // {
    //     complex n3;
    //     n3.set_num((n1.real + n2.real) + (n1.imaginary + n2.imaginary));
    //     return n3;
    // }
};

class complex
{
    double real, imaginary;
    // friend complex calculator ::sum_complex(complex, complex);

    // declaring the entire class calculator as a friend class of the class complex
    friend class calculator;
    
public:
    void set_num(double, double);
    void print_num();
};

void complex ::set_num(double x, double y)
{
    real = x;
    imaginary = y;
}

void complex ::print_num()
{
    cout << "\n"
         << real << " + i(" << imaginary << ")" << endl;
}

complex calculator ::sum_complex(complex n1, complex n2)
{
    complex n3;
    n3.set_num((n1.real + n2.real), (n1.imaginary + n2.imaginary));
    return n3;
}

int main()
{
    complex num1, num2;

    num1.set_num(2.3, 5);
    num2.set_num(4.9, 11.34);

    calculator c;
    complex num3 = c.sum_complex(num1, num2);

    num3.print_num();

    return 0;
}