#include <iostream>
using namespace std;

enum day{monday, tuesday, wednesday, thursday, friday, saturday, sunday}; // 0 1 2 .... (Iincrementing by 1)
// enum day{0, 1, 2, 3, 4, 5, 6}; //ERROR
// enum day{monday, tuesday, wednesday = 10, thursday, friday, saturday = 100, sunday}; // 0 1 10 11 12 100 101
// enum day{monday, tuesday, wednesday = 10, thursday, friday = 10, saturday, sunday}; // 0 1 10 11 10 11 12 // WE CAN GIVE SAME VALUE TO DIFF ENUMERATORS AS WELL!
// enum day{monday, tuesday, wednesday = 10, thursday, tuesday, saturday = 100, sunday}; // 0 1 10 11 12 100 101 // 2 enumerators can't have same names //ERROR

enum month{jan, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dbr};


int main()
{
    day day1;
    day1 = monday; // but day1 = 0; is false [ERROR]
    cout << day1 << endl; // but this gives 0 & NOT monday

    month m1 = dbr;
    cout << m1 << endl;
    month m2 = nov;
    // month m3 = jan + feb; // ERROR

    // cin >> m2; Can't take input in enum data type, gives ERROR
    cout << m1 + m2;
    return 0;
}