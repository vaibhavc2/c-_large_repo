#include <iostream>
#define LOG(StringCombination) std::cout << StringCombination << std::endl;

class Vector
{
private:
    int X, Y;
public:
//    Vector() = default; // default constructor

    Vector()
    {
        this->X = 0;
        this->Y = 0;
        LOG("Created a Vector Object!");
    }

    // constructor
    Vector(int& X, int& Y)
    {
        this->X = X;
        this->Y = Y;
        LOG("Created a Vector Object!");
    }

//    Vector(int X, int Y)
//    {
//        this->X = X;
//        this->Y = Y;
//    }

    void LOG_Coordinates()
    {
        LOG(this->X << ", " << this->Y);
    }

    void VectorRotator()
    {
        // some Functionality of rotating the vector
    }

//    ~Vector() = default; // default destructor
    ~Vector()
    {
        LOG("Destroyed the Vector Object!");
    }
};

int main() {
    int v1_X = 0;
    int v1_Y = 0;
    std::cin >> v1_X >> v1_Y;
    Vector v1(v1_X, v1_Y);
    v1.LOG_Coordinates();
    v1.VectorRotator();
//    v1.~Vector();

    Vector v2;
    v2.LOG_Coordinates();

    return 0;
}
