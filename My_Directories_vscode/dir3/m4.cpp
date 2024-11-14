#include <iostream>
using namespace std;

// Inline functions make the programs more efficient, in case the function is of small code
// Inline functions basically copy the content of the function in the main function
inline int sum(int a, int b = 0) // here a default argument is given to b incase b is not specified during function call
{
    return a + b;
}
// inline void swap(int *n1, int *n2)
// {
//     int temp = *n1;
//     *n1 = *n2;
//     *n2 = temp;
// }

int main()
{
    int a, b;
    cin >> a >> b;
    cout << sum(a, b) << endl;
    cout << sum(a) << endl;
    // swap(&a, &b);
    // cout << a << endl << b;
    return 0;
}