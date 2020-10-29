#ifndef H_PETDOG
#define H_PETDOG
#include "IPet.h"

class PetDog: IPet{

};

IPet* NewPet(){    return (new PetDog());
}
#endif