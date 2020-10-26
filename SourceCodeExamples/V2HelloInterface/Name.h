#if !defined(NAME_H)
#define NAME_H

class IMessage;

class Name  
{
public:
	Name(IMessage* m1, IMessage* m2);
	virtual std::string firstName();
	virtual std::string lastName();
	virtual ~Name();
private:
	IMessage* _textin;
	IMessage* _textout;
};

#endif
