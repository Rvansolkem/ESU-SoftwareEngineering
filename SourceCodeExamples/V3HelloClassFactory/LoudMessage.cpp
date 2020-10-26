#include <iostream>

#include "LoudMessage.h"
#include "Encryptor.h"

using namespace std;

LoudMessage::LoudMessage()
{
}

LoudMessage::~LoudMessage()
{
}

void
LoudMessage::setMessage(string word)
{
	for (unsigned i = 0; i<word.size(); i++)
		word.replace(i, 1, 1, toupper(word[i]));

	_message = word;
}

void
LoudMessage::showMessage()
// pre: setMessage() has been called at least once
{
	cout << _message << endl;
}

string
LoudMessage::readMessage()
{
	string str;
	cin >> str;
	for (unsigned i = 0; i<str.size(); i++)
		str.replace(i, 1, 1, toupper(str[i]));
	return (str);
}
