#include <iostream>

// const in C++

class Entity
{
private:
    int m_X, m_Y;
    mutable int var = 0;
public:
    int n;
//    Entity():
//        m_X(5), m_Y(7), n(100) {}

//  Const methods can't modify the data members of a class, except the mutable data members
    int GetX() const
    {
//        n++; // this is hence not possible
        var++; // this is fine, because the var variable is marked mutable
        return m_X;
    }

    int GetX()
    {
        n++;
        return m_X;
    }

//    const int* const GetX() const // it returns a constant pointer to a constant value
//    {
//        return m_X;
//    }

    void SetX()
    {
        m_X = 50;
    }
};

void PrintEntity(const Entity& ety) // can't change the object passed to this function & also, not even the reference because of the const keyword
{
//    Entity obj;
//    ety = obj;

    std::cout << ety.GetX() << std::endl; // it takes the GetX() which is marked as const, not the other one
//    the above line of code will throw error if the GetX() is not marked const because then it may be changing the values of the object we can't do that here because the object being passed as const reference to itself
//    ety.SetX(); // this is not allowed because this function is not a const function
}

int main() {
    Entity e;

//    const short int MAX_AGE = 100;
    int a = 5;

//    When the pointer variable point to a const value
    const int* integerPointer1 = new int(10);
    integerPointer1 = &a;
//    *integerPointer1 = 8; // NOT VALID

//    When the const pointer variable point to a value
    int* const integerPointer2 = new int(10);
//     integerPointer2 = &a; // NOT VALID
    *integerPointer2 = 8;

//    When the const pointer variable point to a const value
    const int* const integerPointer3 = new int(99);
//    *integerPointer3++; //NOT VALID
//    integerPointer3 = integerPointer1; // NOT VALID

    return 0;
}
