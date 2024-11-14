#include <iostream>
using namespace std;

#define LOG(x) cout << x << endl;

void decrement(int& value)
{
    value--;
}

int main()
{
    int var = 15;
    int& ref = var; // ref is alias for var
    ref--;
    decrement(ref);
    LOG(var);


    // same reference should not be altered to reference some another variable!
    // int newVar = 19;
    // ref = newVar; // very wrong practice: it changes the value of var to 19, now ref, var and newVar will give the value 19
    // LOG(newVar);
    // LOG(var);

    LOG("Hello");

    return 0;
}