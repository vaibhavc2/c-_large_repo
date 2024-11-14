#include <iostream>
using namespace std;

int main()
{
    // Void pointer (Generic Pointer)
    void *p = NULL;
    int a = 1;
    float b = 2.56;
    char ch = 89;
    p = &a;
    cout << *(int *)p << endl;
    p = &b;
    cout << *(float *)p << endl;
    p = &ch;
    cout << *(char *)p << endl;

    return 0;
}