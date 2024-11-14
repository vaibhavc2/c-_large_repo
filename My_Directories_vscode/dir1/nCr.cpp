#include <iostream>
using namespace std;

int factorial(int num)
{
    int factorial = 1;
    for (int i = 2; i <= num; i++)
    {
        factorial *= i;
    }
    return factorial;
}

int main()
{
    int n, r;

    cout << "\nEnter the value of n: ";
    cin >> n;
    cout << "\nEnter the value of r: ";
    cin >> r;

    int nCr = factorial(n) / (factorial(n - r) * factorial(r));
    cout << "\nnCr = " << nCr << endl;
    return 0;
}