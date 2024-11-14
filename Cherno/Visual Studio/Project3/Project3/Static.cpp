#include <iostream>
#define LOG(x) std::cout << x << std::endl;

int Variable = 5;

static int s_Variable = 10;
// no other translation unit (other .cpp files) can see static variables or functions written here!!
// static variables and functions are hence private for a cpp file (only if they are defined outside the classes)

void EntityFunction() {
	LOG("ENTITY");
}