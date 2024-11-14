#include <iostream>
#include <string>

class Entity
{
private:
	int m_Age;
	std::string m_Name;
public:
	friend void PrintEntity(const Entity&);

	// the explicit constructors must explicitly called to construct the object
	explicit Entity(const std::string& name)
		: m_Age(-1), m_Name(name) {}

	explicit Entity(int age)
		: m_Age(age), m_Name(std::string("Unknown")) {}

	void GetData()
	{
		std::cout << m_Name << ", " << m_Age << std::endl;
	}
};

// friend functions and classes can access the private data members of a class in which they are mentioned as friend.
void PrintEntity(const Entity& entity)
{
	std::cout << entity.m_Name << ", " << entity.m_Age << std::endl;
}

int main()
{
	//Entity a = Entity("Vaibhav");
	//Entity a = std::string("Vaibhav"); // NOT VALID if the constructor is marked explicit
	Entity a("Vaibhav");

	//Entity b = 19; // NOT VALID if the constructor is marked explicit
	Entity b(19);
	//Entity b = Entity(19); // this is also valid

	//Entity c = 'A'; // implicit conversion (automatic typecasting to send the value to the constructor available which accepts a convertible data-type, hence the 'A' is implicitly converted to int value 65 and sent to the constructor which accepts int as a parameter.
	// But, if that constructor is declared 'explicit' then such implicit conversion will not be performed.
	//c.GetData();

	// the following 2 only work if the constructors are not explicit. In that case, the object is constructed with the passed parameter typecasted into suitable type-parameter
	//PrintEntity(45);
	//PrintEntity(std::string("VC"));

	PrintEntity(Entity("VC")); // however this is fine since it is calling Entity constructor to construct the object explicitly

	std::cin.get();
}