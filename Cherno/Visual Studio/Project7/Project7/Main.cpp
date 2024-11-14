#include <iostream>

#define print(x) std::cout << x << std::endl;

struct Vector
{
	float x, y, z;

	Vector()
		: x(30), y(40), z(50) {}

	void Function() { std::cout << "Function\n"; }
};

int main()
{
	// stack memory allocated
	// stack memory (automatic memory) is very small in size, generally about 2MB to 8.192MB
	// in C++, all the following are just objects actually!
	int value = 10;
	char str[5];
	str[0] = 1;
	str[1] = 2;
	str[2] = 3;
	str[3] = 4;
	str[4] = 5;
	Vector VectorObject1;

	// heap memory allocated (dynamic memory): There is a free list which has list of all the free bytes in the heap memory, and from there it is decided where to allocate depending on the size of the block of memory demanded
	// here the pointer is created on the stack but it points to an address in the heap memory


	// the new keyword actually calls malloc() which in turn allocates a memory block in heap memory & returns a void pointer to the beginning of the memory block allocated on the heap memory. It also calls the default constructor to construct the object

	int* hvalue = new int(79); // *hvalue = 79
	int* ptr = (int*)malloc(sizeof(int)); // 4 bytes allocated and returned a void pointer, which is then typecasted to int pointer, but the difference from the above is that it doesn't call the default constructor
	*hvalue = 55;
	std::cout << *hvalue << " is the value stored at the following memory address in the heap: " << hvalue << std::endl;

	char* hStr = new char[5];
	hStr[0] = 1;
	hStr[1] = 2;
	hStr[2] = 3;
	hStr[3] = 4;
	hStr[4] = 5;

	auto* VectorObject2 = new Vector();
	Vector* VectorObject = (Vector*)malloc(sizeof(Vector));
	auto* VectorObject3 = new(VectorObject2) Vector(); // this assigns the memory block where VectorObject2 pointer points to, to the object pointed by the pointer VectorObject3
	delete VectorObject3;
	int* arr = new int[50]; //200 bytes in heap memory

	delete[] arr;

	// delete calls the destructor to destruct the created object and the free function, which helps to free the allocated memory in heap

	free(ptr); // using delete here not recommended because it was allocated using malloc
	free(VectorObject);

	Vector* vectorArray = new Vector[5];


	// we have to manually delete the heap memory, whereas the stack memory is popped and freed once the scope is over (e.g. a particular block in {})
	delete hvalue;
	delete[] hStr;
	delete VectorObject2;
	print("Vaibhav");
	Vector* v = NULL;
	{
		Vector obj;
		v = &obj;
		obj.Function();
	}
	// obj is deleted after the scope is completed

	// similarly calloc() is used just like malloc(), but it initializes each block with '0'
	float* FloatPointer = (float*)calloc(5, sizeof(float)); // allocates 5 * 4 bytes
	FloatPointer = (float*)realloc(FloatPointer, 8 * sizeof(float));

	free(FloatPointer);
	

	//in all cases of malloc, calloc & realloc, if space is insufficient in memory, then NULL pointer is returned
	std::cin.get();
}