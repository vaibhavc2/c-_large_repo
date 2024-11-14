#include <iostream>
#include <string>

using namespace std;

class binary
{
    // if undeclared, everything in a class is private!
    string s;
    void chk_bin();

public:
    void read();
    void complement();
    // void display();
};

void binary ::read()
{
    cout << "Enter a binary number: ";
    cin >> s;
    cout << endl;
    chk_bin();
}

void binary ::chk_bin()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect! Not a Binary number.\n";
            break;
            // exit(0); // exit(0) is used to exit the program & report successful completion of the program
            // exit(1); // exit(1) is used to exit the program & report unsuccessful completion of the program
        }
    }
    // cout << "It is indeed a Binary number." << endl;
}

void binary ::complement()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
    cout << s << endl;
}

// void binary ::display()
// {
//     for (int i = 0; i < s.length(); i++)
//     {
//         cout << s.at(i);
//     }
//     cout << endl;
// }

int main()
{
    binary n1;
    n1.read();
    // n1.chk_bin();
    n1.complement();
    // n1.display();
    
    binary n2;
    n2.read();
    // n2.chk_bin();
    n2.complement();
    // n2.display();

    return 0;
}