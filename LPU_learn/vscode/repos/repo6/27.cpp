#include <iostream>

#include <string>
using namespace std;
int main()
{
    string string1 = "high", string2;
    cin >> string2;
    string str = "good";

    // whenever the compiler gets first less than or greater than in ascii code while comparing characters in strings, it stops to calculate further and displays the output

    // 1 method
    // if (string1 < string2)
    //     cout << (string1 < string2) << endl;
    // if (string1 < "tree")
    //     cout << "string1<tree" << endl;
    // if ("low" != string1)
    //     cout << "LOW!=X" << endl;
    // if (str > string1)
    //     cout << "str>string1" << endl;
    // else
    //     cout << "str<string1";

    // 2 method
    int compareStrings = string1.compare(string2); // stores the difference of the ascii code of chars the first time it is < 0 or > 0, else at the end it stores 0 as the diff...
    // if (compareStrings > 0)
    // {
    //     cout << "string1 > string2" << endl;
    // }
    // else if (compareStrings < 0)
    // {
    //     cout << "string1 < string2" << endl;
    // }
    // else
    // {
    //     cout << "string1 = string2" << endl;
    // }

    // to compare substrings of 2 strings
    int compareSubstrings = string1.compare(2, 3, string2, 1, 3);

    if (compareSubstrings > 0)
        cout << "string1 is Greater Than string2 " << string1 << endl;
    else if (compareSubstrings < 0)
        cout << "string2 is Greater Than string1 " << string2 << endl;
    else
        cout << "string1 and string2 are Both Same = " << string1 << endl;

    return 0;
}