#include <iostream>
using namespace std;

// namespaces define a scope for variables, functions etc.

namespace ns1
{
    void print()
    {
        cout << "Hello" << endl;
    }
}
namespace ns2
{
    int a = 10;
    void print()
    {
        cout << "Hi " << a << endl;
    }
}

int main()
{
    ns1::print();
    ns2::print();
    cout << ns2::a << endl;

    return 0;
}