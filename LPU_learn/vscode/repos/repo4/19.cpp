#include <iostream>
using namespace std;
// function overloading
// return type doesn't matter, changes in parameters help in function overloading in cpp
void sum(int, int);
void sum(double, double);
void sum(char, char);
void sum(char, int); //sum('b',10);
void sum(int, char); //sum(2,'a')

main()
{
    int a = 10, b = 20;
    double c = 7.52, d = 8.14;
    char e = 'a', f = 'b';
    sum(a, b);
    sum(c, d);
    sum(e, f);
    sum(2, 'a'); //2+97= 99
    sum('b', 3);
}
void sum(int x, int y)
{
    cout << "\n sum of integers are" << x + y;
}
void sum(int x, char y) //2 a
{
    char z = x + y;                                                //99
    cout << "\n z= ....." << z;                                    //c
    cout << "\n sum of integers and char are........ : " << x + y; //ans in int
}
void sum(char x, int y)
{
    cout << "\n sum of char and int are" << x + y;
}
void sum(double x, double y)
{
    cout << "\n sum of two floating no are" << x + y;
}
void sum(char x, char y)
{
    cout << "\n sum of characters are" << x + y;
}