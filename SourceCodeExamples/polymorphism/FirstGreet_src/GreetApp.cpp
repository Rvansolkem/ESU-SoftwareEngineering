// GreetApp.cpp: implementation of the GreetApp class.
//
//////////////////////////////////////////////////////////////////////

#include "Greeting.h"
#include <iostream>


int main(int argc, char* argv[])
{
	Greeting g;
	std::cout << "First: " << g.greet(1) << std::endl;
	std::cout << "Second: " << g.greet(2) << std::endl;
	return 0;
}
