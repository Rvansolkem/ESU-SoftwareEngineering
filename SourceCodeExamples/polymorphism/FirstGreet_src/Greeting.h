// Greeting.h: interface for the Greeting class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_GREETING_H__7FCFD944_E94A_4629_9B08_D6E78E7B19C0__INCLUDED_)
#define AFX_GREETING_H__7FCFD944_E94A_4629_9B08_D6E78E7B19C0__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

class XParent;

class Greeting  
{
public:
	Greeting();
	XParent *first();

	XParent *second();

	int greet(int selection);

	virtual ~Greeting();

};

#endif // !defined(AFX_GREETING_H__7FCFD944_E94A_4629_9B08_D6E78E7B19C0__INCLUDED_)
