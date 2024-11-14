#include <iostream>
#include <string>

using namespace std;

typedef struct employee
{
    int id;
    const char *name;
    float salary;
} e;

// union is that structure which provides better memory management if we want to use only one property out of the all defined. Hence, it allocates the maximum memory needed by a property and we can use only one out of them, but this in turn is quite good for saving memory if we needed that anyways

typedef union investment
{
    double stocks, gold, real_estate, equity, bonds, fd;
} i;

// enum makes a datatype with the values starting from int: 0 to ...
// it basically makes the code more readable
// also if a varible given the datatype defined using enum, then we can only give one of the defined values only to that variable!!

enum Meal
{
    breakfast,
    lunch,
    dinner
};

int main()
{
    e e1;
    e1.id = 234529;

    i me;
    me.stocks = 99579798.56;

    Meal meal1;
    // meal1 = 0; this is an ERROR
    // meal1 = 34; this one also
    meal1 = breakfast;

    return 0;
}