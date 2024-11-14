#include <iostream>
using namespace std;

// Destructor

// tilde(~) symbol: destructor
class itemData
{
    int id, serialNumber;
public:
// destructor overloading is not possible, hence only one destructor for any class
    itemData(int num1, int num2)
    {
        id = num1;
        serialNumber = num2;
    }
    ~itemData();
};

int main()
{
    return 0;
}