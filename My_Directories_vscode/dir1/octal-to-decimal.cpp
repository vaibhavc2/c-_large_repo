#include <iostream>

using namespace std;

int convert(int octal)
{
    int decimal = 0, x = 1;
    while (octal > 0)
    {
        int i = octal % 10;
        decimal += (i * x);
        x *= 8;
        octal /= 10;
    }
    return decimal;
}

int main()
{
    int octal;
    cout << "\nEnter a octal number: ";
    cin >> octal;

    cout << "\nThe same number in decimal system is: " << convert(octal) << endl;

    return 0;
}