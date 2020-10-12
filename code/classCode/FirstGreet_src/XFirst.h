// XFirst.h: interface for the XFirst class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_XFIRST_H__FD7FFDC7_06AF_4D96_B1DD_8C17D5A920EB__INCLUDED_)
#define AFX_XFIRST_H__FD7FFDC7_06AF_4D96_B1DD_8C17D5A920EB__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "XParent.h"

class XFirst : public XParent  
{
public:
	XFirst();
	int whoami();
	virtual ~XFirst();

};

#endif // !defined(AFX_XFIRST_H__FD7FFDC7_06AF_4D96_B1DD_8C17D5A920EB__INCLUDED_)
