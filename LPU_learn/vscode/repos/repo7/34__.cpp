#include <iostream>
using namespace std;

class uniqueCode
{
    int a;
    const char ch;
    int &b;

public:
    // Initializer List, a variation of Constructor
    uniqueCode(int a, char c, int &d) : a(a), ch(c), b(d)
    {
        cout << uniqueCode::a << ch << b << endl;
    }
};

int main()
{
    int y = 50;
    uniqueCode code1(3, 67, y);
    return 0;
}