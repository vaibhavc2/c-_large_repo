#include <iostream>
// using namespace std;

int a = 5;

main()
{
    int a = 10;
    std::cout << a;
    std::cout << ::a; // use the scope resolution operator to access the global variable
}