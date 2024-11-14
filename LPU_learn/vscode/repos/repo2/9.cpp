#include <iostream>
using namespace std;

inline int sum(int n1, int n2)
{
    return n1 + n2;
}

int main()
{
    int a = 5, b = 7;
    cout << sum(a, b) << endl;
    return 0;
}