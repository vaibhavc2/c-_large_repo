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
    int rows;
    cin >> rows;
    cout << endl;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            int iCj = factorial(i) / (factorial(i - j) * factorial(j));
            cout << iCj;  //All terms here are in iCj format only
        }
        cout << endl;
    }
    return 0;
}