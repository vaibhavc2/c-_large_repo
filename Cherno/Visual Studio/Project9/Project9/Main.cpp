#include <iostream>
#include <string>

int main()
{
	const char* str = "Vaibhav"; //const char array is in double quotes, str is a char pointer to the const char array, which is here stored in the Read-only section of the memory
	char name[] = { 'V', 'a', 'i', 'b', 'h', 'a', 'v', '\0' };
	char _name[] = { 'V', 'a', 'i', 'b', 'h', 'a', 'v', 0}; // same thing as above
	char __name[] = "Vaibhav\0"; // same thing as above
	std::cout << name << std::endl;
	std::cout << _name << std::endl;
	std::cout << str << std::endl;

	std::string myName("Vaibhav Chopra"); // here, myName is an object of string class which has a constructor which takes in a const char* pointer
	std::cout << myName << std::endl;
	myName[8] = 'B'; // modification is done by copying the string in the object and then allocating a new memory in read-only section with the modified characters
	__name[3] = 'G'; // modification is done by copying the string in the object and then allocating a new memory in read-only section with the modified characters
	std::cout << myName << std::endl;
	std::cout << __name << std::endl;
	std::cout << myName.size() << std::endl;
	
	std::string myString = std::string("Hello") + (" World!");
	std::cout << myString << std::endl;

	const char* Paragraph = R"(Hi
MEW
kakak
VC
	BOY
		This works Fine!)";

	std::cout << "\n" << Paragraph << std::endl;

	std::cin.get();
}