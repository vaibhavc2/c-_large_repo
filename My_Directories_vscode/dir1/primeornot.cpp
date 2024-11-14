#include <iostream>
#include <math.h>
using namespace std;

int main()
//Method-1
{
    int n, i;
    cout << "\nEnter a positive number: ";
    cin >> n;

    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            cout << "\nIt is not a prime number." << endl;
            break;
        }
    }
    if (i == n)
    {
        cout << "\nIt is a prime number." << endl;
    }

    //Method-2 More efficient way!!

    cout << "\nEnter a positive number: ";
    cin >> n;

    bool flag = 0;

    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            cout << "\nIt is not a prime number." << endl;
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        cout << "\nIt is a prime number." << endl;
    }

    return 0;
}