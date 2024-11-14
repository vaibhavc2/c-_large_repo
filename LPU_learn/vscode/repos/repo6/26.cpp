#include <iostream>
#include <string>

using namespace std;

int main()
{
    string mainString("Hello World!"); // string is a pre-defined class, hence we make an object of class string using constructor
    cout << mainString << endl;
    string otherString;

    bool boolVariable = otherString.empty(); //1
    if (boolVariable)
    {
        otherString = " Vaibhav Chopra.";
    }
    string concatenatedString = mainString + otherString;

    cout << concatenatedString << endl;
    cout << "Hello" + otherString << endl;

    cout << concatenatedString[7] << endl;

    cout << otherString.size() << " " << otherString.length() << " " << otherString.capacity() << endl; // gives size(length) of the string

    mainString.clear(); //clears the string data
    cout << mainString + "HI"
         << " Boom" << endl;

    concatenatedString.append(" I gotta do the IMPOSSIBLE!"); // appends
    cout << concatenatedString << endl;
    cout << concatenatedString.find_first_of('.') << endl; // index of first occurrence
    cout << concatenatedString.find_last_of('e') << endl;          // index of last occurrence

    otherString.swap(mainString);
    cout << otherString << "BBB" << endl;
    otherString.swap(mainString);

    mainString = "Entrepreneurial Mindset";
    mainString.erase(4,7); // start from 4th index and erase 7 characters from it..
    cout << mainString << endl;

    mainString.replace(0, 5, " 123 YUPP"); // erase 5 chars from index 3, & then replace that with the given string
    cout << mainString << endl;

    cout << mainString.substr(9, 3) << endl;

    mainString.append("123");
    mainString.insert(15, "89");
    cout << mainString << endl;

    cout << mainString.find("123") << endl;
    cout << mainString.rfind("123") << endl; //reverseFind
    
    return 0;
}