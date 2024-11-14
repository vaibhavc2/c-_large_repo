#include <iostream>
using namespace std;

void search(int arr[], int size, int key)
{
    int i = 0;
    for (i; i < size; i++)
    {
        if (arr[i] == key)
        {
            cout << "\nThe index of this element in the given array is: " << i << endl;
            i = 0;
            break;
        }
    }
    if (i != 0)
    {
        cout << "\nDidn't found it in the array.\n";
    }
}

int main()
{
    int size;
    cin >> size;
    cout << endl;

    int arr[size];

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int key;
    cout << "\nEnter the element to find in array: ";
    cin >> key;

    search(arr, size, key);

    return 0;
}