#include <iostream>
#include <fstream>
#include <stdlib.h>

using namespace std;

int main()
{
    char name[10];
    float sal;
    ofstream outputFile;
    outputFile.open("Employee1.txt");

    for (int i = 0; i < 3; i++)
    {
        cout << "\n Enter the name and salary of Employee" << i + 1 << " : ";
        cin >> name >> sal;
        outputFile << "\n"
                << name << "\t" << sal;
    }
    outputFile.close();

    ifstream inputFile;
    inputFile.open("Employee1.txt");

    for (int i = 0; i < 3; i++)
    {
        inputFile >> name;
        inputFile >> sal;
        cout << "\n Employee " << i + 1 << " : ";
        cout << name << "\t" << sal;
    }
    inputFile.close();
}    