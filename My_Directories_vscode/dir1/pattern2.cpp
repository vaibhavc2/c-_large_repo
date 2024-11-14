#include <iostream>
using namespace std;

int main()
{
    int rows;

    cout << "\nEnter the no. of rows: ";
    cin >> rows;
    cout << endl;

    // for (int i = rows; i >= 1; i--)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }


    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}