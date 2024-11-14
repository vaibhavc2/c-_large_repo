#include <iostream>
using namespace std;

int main()
{
    int savings;

    cout << "Enter your savings: ";
    cin >> savings;

    if (savings > 5000)
    {
        /* code */
        cout << "\nA" << endl;
    }
    else if (savings > 2000)
    {
        cout << "\nB" << endl;
    }
    else
    {
        cout << "\nFriends" << endl;
    }

    return 0;
}