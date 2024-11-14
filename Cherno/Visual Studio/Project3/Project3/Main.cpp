#include <iostream>
#define LOG(x) std::cout << x << std::endl;

extern int Variable;
//extern int s_Variable;
static int s_Variable = 15; // similar static variables and functions can be defined in different translation units (diff .cpp files)

extern void EntityFunction();

int main()
{
	LOG(Variable);
	s_Variable = 100;
	LOG(s_Variable);
	EntityFunction();

	std::cin.get();
	return 0;
}