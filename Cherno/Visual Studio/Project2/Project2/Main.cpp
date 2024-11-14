#include <iostream>
#include <cstring>

int main()
{
    char* buffer = new char[8]; // creates a block of 8 bytes of memory and returns a pointer to index:0
    memset(buffer, 0, 8); // setting all the 8 values of the buffer char array memory block to value 0, 8 value helps to fill all 8 bytes with 0
    
    delete[] buffer;

    std::cin.get();
    return 0;
}