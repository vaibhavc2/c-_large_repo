#include <iostream>
using namespace std;

int search(int arr[], int size, int key)
{
    int s = 0; //start point
    int e = 0; //end point

    while (s <= e)
    {
        int mid = (s + e) / 2;

        if (arr[mid] == key)
        {
            return mid;
        }
        else if (key < arr[mid])
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    
    return -1;
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

    cout << search(arr, size, key);

    return 0;
}