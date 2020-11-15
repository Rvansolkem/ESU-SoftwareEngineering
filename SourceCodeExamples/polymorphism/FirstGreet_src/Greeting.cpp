// Greeting.cpp: implementation of the Greeting class.
//
//////////////////////////////////////////////////////////////////////

#include "Greeting.h"
#include "XFirst.h"
#include "XSecond.h"

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

Greeting::Greeting()
{

}

Greeting::~Greeting()
{

}


XParent *Greeting::first()
{
	XParent *x1 = new XFirst();
	return (x1);
}

XParent *Greeting::second()
{
	XParent *x2 = new XSecond();
	return (x2);
}

int Greeting::greet(int selection)
{
	XParent *x;

	if (selection == 1) {
		x = first();
	} else {
		x = second();
	}
	return (x->whoami());
}

