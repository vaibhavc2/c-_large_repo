#include <iostream>
#include <cstring>
using namespace std;

#define LOG(x) cout << x << endl;

int main()
{
    int var = 8;
    // void* ptr = NULL;
    // void* ptr = 0;
    // void* ptr = nullptr;

    // void *ptr = &var;

    int *ptr = &var;
    *ptr = 10;
    cout << *ptr << endl;
    LOG(var);

    char* buffer = new char[8]; // creates a block of 8 bytes of memory and returns a pointer to index:0
    memset(buffer, 0, 8); // setting all the 8 values of the buffer char array memory block to value 0, 8 value helps to fill all 8 bytes with 0
    delete[] buffer;
    
    return 0;
}