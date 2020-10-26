#include <string>
#include <iostream>

#include "Name.h"
#include "Message.h"
#include "SecureMessage.h"
#define SECURE 2
#define PLAINTEXT 1
#define FACTORY_VARIANT SECURE
//#define FACTORY_VARIANT PLAINTEXT
using namespace std;

int main(int argc, char* argv[])
{
	IMessage* message1 = 0;
	IMessage* message2 = 0;
	if (FACTORY_VARIANT == SECURE) 
	{
		message1 = new SecureMessage();
		message2 = new SecureMessage();
	}
	else if (FACTORY_VARIANT == PLAINTEXT) 
	{
		message1 = new Message();
		message2 = new Message();
	}

	cout << "Welcome to FlexibleHello!" << endl;
	
	Name* name = new Name(message1, message2);
	string s1 = name->firstName();
	string s2 = name->lastName();
	cout << "Hello " << s1 << " " << s2 << endl;

	delete name;  // guideline: creator should delete

	system("read -p 'Press Enter to continue...' var");
	return 0;
}

