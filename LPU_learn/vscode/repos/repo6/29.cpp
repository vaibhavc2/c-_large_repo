#include <iostream>
using namespace std;

class array
{
private:
    static int arr[];
    static int n;

public:
    static int linearSearch(int element);
    static void displayResult(short int &index, short int &position)
    {
        if (index == -1)
        {
            cout << "\nThis element is not present in the Array." << endl;
        }
        else
        {
            cout << "\nThis element is present at:\n"
                 << "\tindex: " << index << endl
                 << "\tposition: " << position << endl;
        }
    }
};

int array::arr[] = {9, 11, 15, 29, 35, 43, 49};
int array::n = sizeof(arr) / sizeof(arr[0]);

int array::linearSearch(int element)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == element)
        {
            return i;
        }
    }
    return -1;
}


int main()
{
    int element;
    cout << "Enter an element (integer) to search in the array: ";
    cin >> element;

    short int index = array::linearSearch(element);
    short int position = index + 1;

    array::displayResult(index, position);

    return 0;
}