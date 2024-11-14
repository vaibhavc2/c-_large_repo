#include <iostream>
#include <iomanip>

using namespace std;

main()
{
    int a;
    float f;
    char s1[10];
    cout << "Enter any integer no";
    cin >> a;

    cout << "\nEnter any string";
    fflush(stdin);
    gets(s1);
    cout << "No is:" << a << endl;                                   //23
    cout << "with setw:" << setw(8) << a << endl;                    // 23
    cout << "With setfill:" << setw(9) << setfill('*') << a << endl; //*******23
    cout << "Decimal base:" << dec << a << endl;                     //23
    cout << "Octal base:" << oct << a << endl;
    cout << "Hexadecimal base:" << hex << a << endl;
    cout << "Enter the float no:";
    cin >> f;                                                     //3.123456
    cout << "with setprecision:" << setprecision(4) << f << endl; //3.123
    cout << "lovely" << ends;                                     //lovely professional
    cout << "professional" << endl;
    cout << "University";
    cout.flush();
}