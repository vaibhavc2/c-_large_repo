#include <iostream>
#include <math.h>
using namespace std;
//Program to print all primes between two numbers
bool is_prime(int num)
{
    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % 2 == 0)
        {
            return false;
        }
    }
    return true; // or write return 1
}

int main()
{
    int a, b;
    cout << "\nEnter two numbers: ";
    cin >> a >> b;
    cout << endl;

    for (int i = a + 1; i < b; i++)
    {
        if (is_prime(i))
        {
            cout << i << endl;
        }
    }
    return 0;
}