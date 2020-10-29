#ifndef H_IPET
#define H_IPET

class IPet
{
public:
	virtual void kind(void)=0;
	virtual ~IPet() { };
};

IPet* NewPet();
#endif