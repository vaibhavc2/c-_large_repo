#include <iostream>
using namespace std;

int main()
{
    int n, i, sum = 0;

    cout << "Enter a number upto which I should print sum: ";
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        sum += i;
    }

    cout << "\nThe sum is: " << sum << endl;

    return 0;
}