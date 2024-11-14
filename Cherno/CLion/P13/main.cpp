#include <iostream>
#include <string>

static int s_Level = 1;
static int s_Speed = 2;

void globalVar();
class A
{
public:
    A()
    {
        s_Speed++;
        std::cout << s_Speed << std::endl;
    }

    static void changeVar()
    {
        s_Speed++;
    }
};

class implementation
{
public:
    implementation()
    {
        std::cout << s_Speed << std::endl;
    }
};

A a;
implementation iOBJECT;

int main() {
//    if (s_Level > 5)
//        s_Speed = 10;
//    else
//        s_Speed = 5;


    s_Speed = s_Level > 5 ? 10 : 5; //same thing as above

    s_Speed = s_Level > 5 && s_Level < 10 ? s_Level > 10 ? 15 : 10 : 5;
    s_Speed = (s_Level > 5 && s_Level < 10) ? s_Level > 10 ? 15 : 10 : 5; // same thing as above
//            if...                     else if...   else...


//    std::string Rank;
//    if (s_Level > 10)
//        Rank = "PRO";
//    else
//        Rank = "NOOB";

    std::string rank = s_Level > 10 ? "PRO" : "NOOB"; // the above code calls for constructor twice and hence is slower than this one

    std::cout << rank << std::endl;

    A::changeVar();
    implementation i;

    return 0;
}

void globalVar()
{
    std::cout << s_Speed << std::endl;
}
