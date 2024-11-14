#include <iostream>
using namespace std;

class employee
{
    int employeeID;
    char employeeName[20];
    int employeeSalary;

public:
    void setData()
    {
        cout << "Enter ID: ";
        cin >> employeeID;
        cout << "Enter name: ";
        cin >> employeeName;
        cout << "Enter salary: ";
        cin >> employeeSalary;
    }
    void getData()
    {
        cout << "\n"
             << "ID: " << employeeID << "\n"
             << "Name: " << employeeName << "\n"
             << "Salary: " << employeeSalary << "\n"
             << endl;
    }
};

int main()
{
    employee e1;
    e1.setData();
    e1.getData();

    employee e2;
    e2.setData();
    e2.getData();
    return 0;
}