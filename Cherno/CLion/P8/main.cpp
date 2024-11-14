#include <iostream>
#include <string>
#define LOG(StringCombination) std::cout << StringCombination << std::endl;

class Entity
{
protected:
    bool RestrictionValue = false;
public:
    Entity()
    {
        if (!RestrictionValue)
        {
            RestrictionValue = true;
        }
    }
    virtual std::string GetName()
    {
        return "Entity";
    }
};

class Player : public Entity
{
private:
    std::string m_Name;
public:
    Player(const std::string& name)
        : m_Name(name) {}

    std::string GetName() override //this means that it has to override a virtual function of its base(parent) class
    {
        return m_Name;
    }
};

void PrintName(Entity* entity)
{
    LOG(entity->GetName());
}

int main() {

//    new keyword returns a pointer, here to a string object
//    auto* should be used if creating a new pointer to an object instead of: std::string* MyString = new std::string
//    ("Hello");
    auto* MyString = new std::string("Hello");
    LOG("'" << *MyString << "' is present at the address: " << MyString);


//    Entity* e = new Entity();
    auto* e = new Entity(); // using default constructor to construct an object of class Entity, Better method of
    // doing the above same thing, it actually returns a pointer to the object
//    LOG(e->GetName());
    PrintName(e);

    auto* p = new Player("Vaibhav");
//    LOG(p->GetName());
    PrintName(p);

//    Entity* entity = p;
//    LOG(entity->GetName());
    return 0;
}
