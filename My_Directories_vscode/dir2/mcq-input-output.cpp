#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number of Q: ";
    cin>>n;

    char ans[n];

    cout<<"\nEnter the answers:\n";
    for (int i = 0; i < n; i++)
    {
        cin>>ans[i];
    }

    cout<<endl<<"\nThe answers entered are:\n";
    for (int i = 0; i < n; i++)
    {
        cout<<"Q"<<i+1<<": "<<ans[i]<<endl;
    }

    return 0;
}