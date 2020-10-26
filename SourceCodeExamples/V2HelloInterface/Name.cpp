#include <string>
#include "Name.h"
#include "IMessage.h"

using namespace std;

Name::Name(IMessage* m1, IMessage* m2) :
_textout(m1), _textin(m2)
{
}

Name::~Name()
{
	delete _textout; // guideline: creator should delete
	delete _textin;
}

string
Name::firstName()
{
	_textout->setMessage("Enter your first name: ");
	_textout->showMessage();
	return (_textin->readMessage());
}

string
Name::lastName()
{
	_textout->setMessage("Enter your last name: ");
	_textout->showMessage();
	return (_textin->readMessage());
}
