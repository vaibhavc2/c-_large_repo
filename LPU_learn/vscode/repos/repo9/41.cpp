#include <iostream>
using namespace std;
class inputs
{
protected:
    float l, b, r, s;

public:
    void getrad()
    {
        cout << "enter the radius:";
        cin >> r;
    }
    void getl_b()
    {
        cout << "enter the length and breadth:";
        cin >> l >> b;
    }
    void get_s()
    {
        cout << "enter the side of square:";
        cin >> s;
    }
};
class circle : public inputs
{
public:
    void area_cir()
    {
        cout << "area of circle is:" << (3.14 * r * r) << endl;
    }
};
class rectangle : public inputs
{
public:
    void area_rec()
    {
        cout << "area of rectangle is:" << (l * b) << endl;
    }
};
class square : public inputs
{
public:
    void area_sq()
    {
        cout << "area of square is:" << (s * s) << endl;
    }
};
int main()
{
    circle o1;
    rectangle o2;
    square o3;
    o1.getrad();
    o2.getl_b();
    o3.get_s();
    o1.area_cir();
    o2.area_rec();
    o3.area_sq();
}