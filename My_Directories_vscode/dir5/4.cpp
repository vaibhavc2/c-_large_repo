#include <iostream>
using namespace std;

class c1
{
    int value;
    friend class _swap;

public:
    void input(int a)
    {
        value = a;
    }
    void display()
    {
        cout << value << endl;
    }
};

class c2
{
    int value;
    friend class _swap;

public:
    void input(int a)
    {
        value = a;
    }
    void display()
    {
        cout << value << endl;
    }
};

class _swap
{
public:
    void swap_value(c1 &n1, c2 &n2)
    {
        int temp = n1.value;
        n1.value = n2.value;
        n2.value = temp;
    }
};

int main()
{
    c1 num1;
    num1.input(5);

    c2 num2;
    num2.input(6);

    _swap s;
    s.swap_value(num1, num2);

    num1.display();
    num2.display();

    return 0;
}