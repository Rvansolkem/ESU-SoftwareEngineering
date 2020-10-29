#ifndef H_PETDOG
#define H_PETDOG

#include "IPet.h"

class PetDog : public IPet
{
public:
	PetDog();
	void kind(void);
	~PetDog();
};

#endif