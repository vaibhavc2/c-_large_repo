#include <iostream>

class Entity
{
	int x, y;
public:
	friend void PrintEntity(const Entity*);
	Entity(int x, int y)
	{
		Entity* const e = this; // 'this' is just a pointer to the object & is a constant pointer
		//this = nullptr; // not valid

		e->x = x;
		e->y = y;
		
		this->x = x;
		this->y = y;
	}

	void GetX() const
	{
		const Entity* const e = this; // 'this' pointer here is a constant pointer to a constant object, we can't change the value of the object here

		//this->x++; //NOT VALID

		PrintEntity(this);
// PrintEntity(*this); // if the function took the const reference to the object: PrintEntity(const Entity& e)
	}
};

void PrintEntity(const Entity* e)
{
	std::cout << e->x << ", " << e->y << std::endl;
}

int main()
{
	Entity obj(5, 6);
	obj.GetX();
	std::cin.get();

	return 0;
}