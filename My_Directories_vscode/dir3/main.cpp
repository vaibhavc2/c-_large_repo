#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int k = 10;
    int &t = k; // this is a reference variable in cpp which will point to k
    t++;
    cout << t << endl;
    k=55;
    cout << t << endl;
    t = 776; // and this is even modifiable!
    cout << t << endl;
    
    cout << sizeof(56.6) << endl;
    // by default Double
    cout << sizeof(56.6f) << endl; // Float
    cout << sizeof(56.6F) << endl; // Float
    cout << sizeof(56.6L) << endl; // Long Double
    cout << sizeof(56.6l) << endl; // Long Double

    const int a = 9.6;
    // a = 999; This gives error
    cout << (int)a << endl;
    cout << int(a) << endl;

    int x = 345, y = 45345, z = 9205;

    cout << "The value of x: " << x << endl;
    cout << "The value of y: " << y << endl;
    cout << "The value of z: " << z << endl;

    // setw() from iomanip sets the specified width and makes that as a parameter for right alignment
    cout << "The value of x: " << setw(5) << x << endl;
    cout << "The value of y: " << setw(5) << y << endl;
    cout << "The value of z: " << setw(5) << z << endl;

    int *l;
    l = &x;
    int *m = &y;

    cout<<endl<<l<<endl<<m;
    cout<<endl<<*l<<endl<<*m;
    cout<<endl<<&x<<endl<<&y<<endl;

    int **ptr = &l; // This is a pointer to a pointer
    cout<<endl<<**ptr<<endl; // This prints the value stored in the address stored by the address in the ptr
    cout<<endl<<ptr<<endl;
    cout<<endl<<*ptr<<endl; // This prints the value stored in the address stored by ptr, i.e &x

    int arr[] = {1,2,3,4,5};
    int *p = arr;

    cout<<endl<<*p<<endl;
    cout<<endl<<*(p+1)<<endl;
    cout<<endl<<*(p+2)<<endl;
    cout<<endl<<*(p+3)<<endl;
    cout<<endl<<*(p+4)<<endl;
    
    cout<<endl<<*(p++)<<endl;
    cout<<endl<<*p<<endl;

    return 0;
}