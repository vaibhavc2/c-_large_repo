#include <iostream>
using namespace std;

int main()
{
    int pocketmoney = 5000;
    for (int date = 1; date <= 30; date++)
    {
        if (date % 2 == 0)
        {
            continue;
        }
        if (pocketmoney <= 0)
        {
            break;
        }
        
        pocketmoney -= 500;
        cout << date << ": You can go out on this date." << endl;
    }

    return 0;
}