#include <iostream>
#include <string>

class Example
{
public:
	Example()
	{
		std::cout << "Created Entity object." << std::endl;
	}

	Example(int x)
	{
		std::cout << "Created Entity object with " << x << " parameter." << std::endl;
	}
};

class Entity
{
	int x = 0, y = 0, z = 0;
	std::string m_Name;
	Example m_Example;
public:
	Entity():
		x(1), y(2), z(3), m_Example(8) // this being there in the initializer list of the constructor helps to boost performance because it only the runs the parameterised constructor to construct this object just a single time rather than calling different constructors to construct it twice!!
	{
		m_Name = "Unknown"; // if something is not initialised in Initialiser List, but later here, then what actually happens is that: 'that' object is constructed twice, first using the default constructor and then again here
		//m_Example = Example(8); // in this way it runs 2 different constructors at 2 diff times
	}

	explicit Entity(const std::string& name):
		m_Name(name) {}
};

int main()
{
	Entity e0;

	std::cin.get();
}