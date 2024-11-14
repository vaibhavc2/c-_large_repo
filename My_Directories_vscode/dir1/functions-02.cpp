#include <iostream>
using namespace std;

void print(int num)
{
    cout << endl << num << endl;
    return;
}

void add(int n1, int n2)
{
    print(n1 + n2);
    return;
}

int main()
{
    int a, b;
    cin >> a >> b;
    add(a, b);
    return 0;
}