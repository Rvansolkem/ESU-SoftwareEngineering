
#if !defined(LOUD_MESSAGE_H)
#define LOUD_MESSAGE_H

#include "IMessage.h"

class LoudMessage : public IMessage
{
public:
	LoudMessage();
	virtual void setMessage(std::string);
	virtual void showMessage();
	virtual std::string readMessage();
	virtual ~LoudMessage();

private:
	std::string _message;
};

#endif