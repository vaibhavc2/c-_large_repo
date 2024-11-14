#include <iostream>
using namespace std;

int main()
{
    // long long int a, b, sum, x;
    // x = 12;

    // cout << "\nEnter two numbers: ";
    // cin >> a >> b;

    // sum = a + b;

    // cout << "\nThe sum is: " << sum << endl;
    // cout << "The size of long long int is: " << sizeof(x) << endl;

    for (int i = 1; i <= 100; i++)
    {
        if (i % 3 == 0)
        {
            continue;
        }
        cout << i << endl;
        cin.get(); // this function makes the user press enter to get to the next step. basically the program stops there for a while!
    }

    return 0;
}