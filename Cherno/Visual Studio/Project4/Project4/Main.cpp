#include <iostream>
#include <string>
#define LOG(StringCombination) std::cout << StringCombination << std::endl;

class Entity
{
public:
	int x, y;
	static int count;

	void Print()
	{
		count++;
		//std::cout << x << ", " << y << std::endl;
		LOG(x << ", " << y);
	}

	static void Greeting(std::string& GreetMessage)
	{
		// static methods can't access non-static data members
		LOG(GreetMessage);
	}
};

int Entity::count = 0;

int main()
{
	Entity e1;
	e1.x = 1;
	e1.y = 2;

	Entity e2 = { 3, 4 };

	std::string GreetMessage;
	LOG("Enter a Greeting Message: ");
	getline(std::cin, GreetMessage);
	Entity::Greeting(GreetMessage);

	e1.Print();
	e2.Print();
	LOG("\nThere are " << Entity::count << " objects in the Entity class.");

	std::cin.get();
	return 0;
}