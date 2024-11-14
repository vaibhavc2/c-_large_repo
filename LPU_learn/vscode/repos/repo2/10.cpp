#include <iostream>
using namespace std;

class mainData
{
    int num1, num2, result;

public:
    // member functions defined inside the class are inline functions (by-default)
    // member functions defined outside the class are non-inline functions (by-default)
    void setData() // inline
    {
        cin >> num1 >> num2;
    }
    void processData();    // non-inline
    inline void getData(); // inline
};

//static member functions are non-line by default

void mainData::processData()
{
    result = num1 + num2;
}

inline void mainData::getData()
{
    cout << result << endl;
}

int main()
{
    mainData D1;

    D1.setData();
    D1.processData();
    D1.getData();    
    
    return 0;
}