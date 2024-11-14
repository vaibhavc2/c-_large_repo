#include <iostream>
using namespace std;

union item
{
    int m;
    // float x; // this won't work because the compiler may store a little different value like 97.0001
    int x;
    char c;
};

int main()
{
    item i1;
    i1.m = 9;
    i1.x = 97;
    cout << i1.c;
    return 0;
}