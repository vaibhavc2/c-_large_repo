#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cout << endl;

    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            int s = i + j;
            if (s % 4 == 0)
            {
                cout << "* ";
            }
            else if (i == 2 && j % 4 == 0)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
    return 0;
}