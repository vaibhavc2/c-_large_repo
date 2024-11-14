#include <iostream>
using namespace std;

int main() {
    int num;

    cout<<"Enter a whole number: ";
    cin>>num;

    if (num%2==0)
    {
        /* code */
        cout<<"\nEven\n";
    }
    else
    {
        cout<<"\nOdd\n";
    }
    
    return 0;
}