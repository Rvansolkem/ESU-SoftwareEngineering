// XSecond.h: interface for the XSecond class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_XSECOND_H__52BCD265_BAC6_42C8_ABF3_D2933D4DDB7A__INCLUDED_)
#define AFX_XSECOND_H__52BCD265_BAC6_42C8_ABF3_D2933D4DDB7A__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "XParent.h"

class XSecond : public XParent  
{
public:
	XSecond();
	int whoami();
	virtual ~XSecond();

};

#endif // !defined(AFX_XSECOND_H__52BCD265_BAC6_42C8_ABF3_D2933D4DDB7A__INCLUDED_)
