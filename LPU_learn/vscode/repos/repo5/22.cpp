#include <iostream>
using namespace std;

class student
{
private:
    int r, *p;
    char n[30];

public:
    void getdata()
    {
        cout << "enter rollno=";
        cin >> r;
        p = &r; //cout<<*rp;
        cout << "enter name=";
        cin >> n;
    }

    void display()
    {
        cout << "rollno=" << *p << endl; // cout<<r ---- *rp
        cout << "name=" << n;
    }
};

int main()
{
    class student abc;
    class student *ptr; // object pointer
    ptr = &abc;
    cout << sizeof(ptr) << endl; // 8 bytes is the size

    (*ptr).getdata(); // we can use . operator or -> operator to access properties of the object the object pointer is pointing to
    ptr->display();

    return 0;
}