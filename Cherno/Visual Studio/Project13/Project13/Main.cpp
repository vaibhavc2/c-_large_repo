#include <iostream>
#include <string>
#include <memory>

// Smart Pointers

class Entity
{
public:
	Entity()
	{
		std::cout << "Created Entity." << std::endl;
	}

	~Entity()
	{
		std::cout << "Destroyed Entity." << std::endl;
	}

	void Print() const {}
};
int main()
{
	{
		std::shared_ptr<Entity> e0;
		{
			//std::unique_ptr<Entity> entity = new Entity(); // NOT VALID

			// Unique Pointer is a Smart Pointer which points to a memory block allocated in the 'Heap memory'. It calls the new and delete operator automatically

			//std::unique_ptr<Entity> entity(new Entity());
			std::unique_ptr<Entity> entity = std::make_unique<Entity>(); // Better way to avoid exception & dangling pointer

			// unique pointers can't be copied or referenced to
			//std::unique_ptr<Entity> e0 = entity; //NOT VALID

			entity->Print();

			std::shared_ptr<Entity> sharedEntity = std::make_shared<Entity>();
			e0 = sharedEntity; // when all the shared pointers to the same memory die (Ref count becomes 0), only then the memory is freed up

			std::weak_ptr<Entity> weakEntity = e0; // this just doesn't increase the ref count of the shared pointer, so it can be freed up even if this is not yet deleted
		} // delete operator is called to delete the object and free the memory of the object entity

		//entity->Print(); //unique pointers are deleted out of scope

		std::cout << "DONE!" << std::endl;
	}
	std::cin.get();
	return 0;
}