#include <iostream>
using namespace std;

class mainData
{
    int a, b;

public:
    friend class calculations;
    void input()
    {
        cin >> a >> b;
    }
} object1;

class calculations
{
public:
    static int sum(mainData object)
    {
        return (object.a + object.b);
    }
};


// Don't declare the functions(which use the private data of the other class) of the friend class outside it because then it can't access the private data of the other class

// int calculations::sum(mainData object)
// {
//     return (object.a + object.b);
// }

int main()
{
    object1.input();
    cout << calculations::sum(object1);
    return 0;
}