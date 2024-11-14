#include <iostream>

void Log(const char* message);  // defined in Log.cpp
													 
int main()
{
	Log("Hello World!\n");
	std::cin.get(); // must press enter to proceed furthur in the execution of the program!!
	std::cout << "Hi, I'm Vaibhav." << std::endl;
	std::cout << "What is your age? " << std::endl;
	int x;
	std::cin >> x;
	return 0;
}