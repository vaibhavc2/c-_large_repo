#include <iostream>
using namespace std;

int main()
{
    // int arr[5];

    // arr[0] = 1;
    // arr[1] = 2;
    // arr[2] = 3;
    // arr[3] = 4;
    // arr[4] = 5;

    // cout << endl
    //      << arr[2] << endl;

    int size;
    cin >> size;

    int arr[size];

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < size; i++)
    {
        cout << " " << arr[i] << " ";
    }

    return 0;
}