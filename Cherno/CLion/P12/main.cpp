#include <iostream>
#include <string>

struct VectorStructure
{
    float x, y;

    explicit VectorStructure(float x, float y)
        : x(x), y(y) {}

    VectorStructure AddVectors(const VectorStructure other) const
    {
        return VectorStructure(this->x + other.x, this->y + other.y);
    }

    VectorStructure operator+(const VectorStructure other) const // basically this is a function but it helps overloading the + operator
    {
        return VectorStructure(this->x + other.x, this->y + other.y);
    }

    VectorStructure MultiplyVectors(const VectorStructure other) const
    {
        return VectorStructure(this->x * other.x, this->y * other.y);
    }

    VectorStructure operator*(const VectorStructure other) const
    {
        return VectorStructure(this->x * other.x, this->y * other.y);
    }

    bool operator==(const VectorStructure& v) const
    {
        return (this->x == v.x && this->y == v.y);
    }

    bool operator!=(const VectorStructure& v) const
    {
        return !(*this == v);
    }
};

std::ostream& operator<<(std::ostream& stream, const VectorStructure& v) // left-shift operator overloaded to print objects with cout
{
    stream << v.x << ", " << v.y;
    return stream;
}

void PrintVector(const VectorStructure& v)
{
    std::cout << v.x << ", " << v.y << std::endl;
}

int main() {
    VectorStructure PositionVector(4.0f, 5.0f);
    VectorStructure VelocityVector(0.5f, 1.5f);
    VectorStructure PowerUp(1.5f, 3.0f);

    VectorStructure Result = PositionVector.AddVectors(VelocityVector.MultiplyVectors(PowerUp));
    VectorStructure NewResult = PositionVector + (VelocityVector * PowerUp); // operator overloading

//    if ((NewResult.x == Result.x) && (NewResult.y == Result.y))
    if (NewResult == Result) // == operator overloaded
    {
        PrintVector(Result);
        std::cout << NewResult << std::endl;
    }
    else if (NewResult != Result)
    {
        std::cout << "There's some Issue with your Code." << std::endl;
    }

    return 0;
}
