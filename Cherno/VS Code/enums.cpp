#include <iostream>

//enum Example : unsigned char
//enum Example : int (default)
//enum Example : short int
//enum Example : long long int
//enum Example : unsigned int
// float, double are not allowed
enum Example : char
{
    A, B = 6, C, D, E = 100
};

int main() {
    Example value = B;
    if (value == 6) {
        // some code
    }
    return 0;
}