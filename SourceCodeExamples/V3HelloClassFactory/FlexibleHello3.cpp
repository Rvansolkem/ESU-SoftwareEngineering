#include <string>
#include <iostream>

#include "Name.h"
#include "MessageFactory.h"
#include "SecureMessageFactory.h"
#include "LoudMessageFactory.h"
#define LOUD 3
#define SECURE 2
#define PLAINTEXT 1
//#define FACTORY_VARIANT SECURE
#define FACTORY_VARIANT LOUD
using namespace std;

int main(int argc, char* argv[])
{
	IMessageFactory* pfactory = 0;
	if (FACTORY_VARIANT == SECURE) 
		pfactory = new SecureMessageFactory();
	else if (FACTORY_VARIANT == PLAINTEXT) 
		pfactory = new MessageFactory();
	else if (FACTORY_VARIANT == LOUD)
		pfactory = new LoudMessageFactory();

	cout << "Welcome to FlexibleHello!" << endl;
	
	Name* name = new Name(pfactory);
	string s1 = name->firstName();
	string s2 = name->lastName();
	cout << "Hello " << s1 << " " << s2 << endl;

	delete name;  // guideline: creator should delete

	system("read -p 'Press Enter to continue...' var");
	return 0;
}

