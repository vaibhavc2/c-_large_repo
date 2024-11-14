#include <iostream>
using namespace std;

void fibo(int n)
{
    int t1 = 0, t2 = 1, next_term;
    cout << endl;
    for (int i = 1; i <= n; i++)
    {
        next_term = t1 + t2;
        cout << t1 << endl;
        t1 = t2;
        t2 = next_term;
    }
}

int main()
{
    int n; // n >> no. of terms
    cin >> n;

    fibo(n);

    return 0;
}