#include "PetCat.h"
#include <iostream>


PetCat::PetCat() { }
PetCat::~PetCat() { }

void PetCat::kind(void) {
	std::cout<<"cat";
}

IPet* NewPet(){return (new PetCat());}