#include <iostream>
using namespace std;

class complex
{
    int real, imaginary;

public:
    // the friend function may be declared in the private section of the class also!!
    friend complex sum_complex(complex, complex); // this declares that the sum_complex function is a friend function of the class & hence can access private properties of the class. This however, doesn't make this function a member function or a method of the class!
    void setNumber(double x, double y)
    {
        real = x;
        imaginary = y;
    }
    // void sum(complex n1, complex n2)
    // {
    //     real = n1.real + n2.real;
    //     imaginary = n1.imaginary + n2.imaginary;
    // }
    void print()
    {
        cout << "\n"
             << real << " + i(" << imaginary << ")" << endl;
    }
};

complex sum_complex(complex n1, complex n2) // friend function of the class complex
{
    complex n3;
    n3.setNumber((n1.real + n2.real), (n1.imaginary + n2.imaginary));

    // The friend function can only access the private data of the class using the objects. Hence the following is totally invalid!

    // real = n1.real + n2.real;
    // imaginary = n1.imaginary + n2.imaginary
    return n3;
}

int main()
{
    complex num1, num2, result;
    double real1, real2, imaginary1, imaginary2;

    cout << "Enter the First Number" << endl
         << "Real part: ";
    cin >> real1;
    cout << "Imaginary part: ";
    cin >> imaginary1;
    num1.setNumber(real1, imaginary1);

    cout << "\nEnter the Second Number" << endl
         << "Real part: ";
    cin >> real2;
    cout << "Imaginary part: ";
    cin >> imaginary2;
    num2.setNumber(real2, imaginary2);

    // result.sum(num1, num2);
    result = sum_complex(num1, num2);

    result.print();

    return 0;
}