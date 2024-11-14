#include <iostream>
#include "Log.h"
using namespace std;

int main()
{
	initLog();
	Log("Hello World!");
	cin.get();
	return 0;
}