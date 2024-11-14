#include <iostream>
using namespace std;

int main()
{
    int n, reverse = 0;
    cout << endl << "Enter a number: ";
    cin >> n;
    cout << endl;

    while (n > 0)
    {
        int lastdigit = n % 10;
        reverse = reverse * 10 + lastdigit;
        n = n / 10;
    }

    cout << "The reverse of the given number is: " << reverse << endl;
    
    return 0;
}