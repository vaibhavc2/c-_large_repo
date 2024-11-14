#include <iostream>

class Entity
{
protected:
	float X, Y;
public:

	void Move(float& X, float& Y)
	{
		this->X += X;
		this->Y += Y;
	}
};

class Player : protected Entity
{
	const char* Name;

	void PrintName()
	{
		std::cout << Name << std::endl;
		std::cout << this->X;
	}
};

int main()
{
	
	std::cin.get();
	return 0;
}