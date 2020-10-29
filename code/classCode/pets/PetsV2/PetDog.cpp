#include "PetDog.h"
#include <iostream>

PetDog::PetDog() { }
PetDog::~PetDog() { }

void PetDog::kind(void){
	std::cout<<"dog";	
}

//IPet* NewPet(){return (new PetDog());}