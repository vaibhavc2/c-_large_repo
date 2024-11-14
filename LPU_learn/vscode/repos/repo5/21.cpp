#include <iostream>
using namespace std;

int main()
{
    int a = 50;
    int *ptr = &a; // all pointers take 8 bytes of memory in general in 64-bit machines
    cout << sizeof(ptr) << endl;
    cout << sizeof(*ptr) << endl;
    cout << sizeof(a) << endl;
    return 0;
}