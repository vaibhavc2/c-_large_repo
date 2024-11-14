#include <iostream>
#include "Log.h"

void initLog()
{
	Log("Initialising Log.");
}

void Log(const char* message)
{
	std::cout << message << std::endl;
}