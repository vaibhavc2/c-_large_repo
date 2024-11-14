#include <iostream>

using namespace std;

int convert(int binary)
{
    int decimal = 0, x = 1;
    while (binary > 0)
    {
        int i = binary % 10;
        decimal += (i * x);
        x *= 2;
        binary /= 10;
    }
    return decimal;
}

int main()
{
    int binary;
    cout << "\nEnter a binary number: ";
    cin >> binary;

    cout << "\nThe same number in decimal system is: " << convert(binary) << endl;

    return 0;
}