#include <iostream>
using namespace std;

class className2; // forward declaration

class className
{
    int var1, var2;

public:
    void takeInput()
    {
        cin >> var1 >> var2;
    }
// friend functions are non-members of the class
    friend void friendFunction(className);
    friend void friendFunction2(className, className2);
};

void friendFunction(className object)
{
    cout << object.var1 << endl << object.var2;
}

int main()
{
    className object1;
    object1.takeInput();
    friendFunction(object1);
    return 0;
}