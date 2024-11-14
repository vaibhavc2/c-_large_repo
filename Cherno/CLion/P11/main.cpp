#include <iostream>
#include <string>

class Entity
{
private:
    int ID;
    std::string m_Name;
    mutable int m_DebugCount = (int)NULL;
public:
    explicit Entity(int id):
        ID(id), m_Name("Entity") {} // those variables which were declared first should be initialised first.
//        m_Name("Entity"), ID(id) {} // NOT GOOD practice

    const std::string& GetName() const
    {
        m_DebugCount++;
        std::cout << this->ID << std::endl;
        return m_Name;
    }

    ~Entity()
    {
        std::cout << "GetName() called for: " << m_DebugCount << " times in the entire code." << std::endl;
    }
};

int main() {
    const Entity e(123499);
    const std::string& mainString = e.GetName();
    std::cout << mainString << std::endl;

    // another use-case of mutable:
    int x = 8;

// this is a lambda which is just a random function
//      &: all vars can be accessed by reference, =: all vars can be accessed by value, &x to access x by reference, x to access x by value
//  mutable means that it can change the values of the variables and objects passed by value.
    auto Lambda = [=]() mutable
    {
        x++; // this can't be done if x is NOT passed by reference & the Lambda isn't marked mutable
        std::cout << "Hello, this is x: " << x << std::endl;
    };

    Lambda();

    std::cout << x << std::endl; // outside of the Lambda, it still has the same value, it's value was only changed internally in the Lambda function because x was not passed by reference

    return 0;
}
