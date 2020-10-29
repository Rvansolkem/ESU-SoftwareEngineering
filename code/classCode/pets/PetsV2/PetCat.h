#ifndef H_PETCAT
#define H_PETCAT

#include "IPet.h"

class PetCat : public IPet
{
public:
	PetCat();
	void kind(void);
	~PetCat();
};

//IPet* NewPet(){return (new PetCat());}

#endif