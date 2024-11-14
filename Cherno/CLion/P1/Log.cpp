#include <iostream>
#include "Log.h"

void initLog()
{
    Log("Initialising Log Function.");
}

void Log(const char* message)
{
    std::cout << message << std::endl;
}