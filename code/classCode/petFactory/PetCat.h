#ifndef H_PETCAT
#define H_PETCAT
#include "IPet.h"

class PetCat: IPet{

};

IPet* NewPet(){    return (new PetCat());
}
#endif