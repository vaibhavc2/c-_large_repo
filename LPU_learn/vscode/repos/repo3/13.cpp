#include <iostream>
using namespace std;

class sample
{
    int a, b; // pvt members
public:
    void ip()
    {
        a = 10;
        b = 40;
    }                            // member func or cin>>a>>b
    friend float mean(sample s); // parameter as obj
};

float mean(sample s)
{
    return float(s.a + s.b) / 2; // return s.a+s.b
}

main()
{
    sample x;
    x.ip();
    cout << "Mean: " << mean(x); // float m;m=mean(x);cout<<m;
}
