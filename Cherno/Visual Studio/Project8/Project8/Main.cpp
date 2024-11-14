#include <iostream>
#include <array>

int main()
{
	int array[5] = { 0 }; // initialize all to 0

	int* ptr = array;
	*(ptr + 4) = 345897;
	std::cout << ptr[4] << std::endl;

	short int count = sizeof(array) / sizeof(int); //5
	std::cout << count << std::endl;

	int* arr = new int[5]; // initialized randomly
	//short int _count = sizeof(arr) / sizeof(int); // doesn't work that way since it refers to the size of the pointer rather than array

	for (int i = 0; i < 5; i++)
	{
		static int var1 = 1, var2 = 6;
		*(array + i) = var1;
		*(arr + i) = var2;
		std::cout << *(array + i) << " " << *(arr + i) << std::endl;
		std::cout << array[i] << " " << arr[i] << std::endl << std::endl << std::endl;
		var1++;
		var2++;
	}


	// the following are the standard arrays from C++ 11
	// for this, array file must be included

	std::array<float, 6> NewArray;
	for (int i = 0; i < NewArray.size(); i++)
	{
		NewArray[i] = 100;
		std::cout << NewArray[i] << std::endl;
	}


	std::cin.get();
}