#include <iostream>
using namespace std;

int main()
{
    // for (int i = 1; i <= 5; i++)
    // {
    //     cout<<"\n* * * *";
    // }

    int rows, cols;

    cout << "\nEnter the no. of rows: ";
    cin >> rows;
    cout << "\nEnter the no. of columns: ";
    cin >> cols;
    cout << endl;

    // for (int i = 0; i < rows; i++)
    // {
    //     for (int j = 0; j < cols; j++)
    //     {
    //         cout << " * ";
    //     }
    //     cout << endl;
    // }

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= cols; j++)
        {
            if (i == 1 || i == rows || j == 1 || j == cols)
            {
                cout << " * ";
            }
            else
            {
                cout << "   ";
            }
        }
        cout << endl;
    }

    return 0;
}