#include <iostream>
using namespace std;

int main()
{
    int rows, count = 1;
    cin >> rows;
    cout << endl;

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << " " << count << " ";
            count++;
        }
        cout << endl;
    }

    return 0;
}