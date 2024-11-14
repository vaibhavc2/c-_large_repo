#include <iostream>
using namespace std;

int main()
{
    // getline is used to count(consider) spaces in the input string.
    // diff getline variations

    char charString[20];
    cin.getline(charString, 20);

    string mainString;
    getline(cin, mainString);

    cout << charString << endl << mainString << endl;
    return 0;
}