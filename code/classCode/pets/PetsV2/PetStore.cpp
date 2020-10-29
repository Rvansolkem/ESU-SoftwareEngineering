#include "PetStore.h"
#include "IPet.h" //no include of PetCat.h or PetDog.h
#include <iostream>

using namespace std;

PetStore::PetStore()
{	
	IPet* b =NewPet();	
	cout << "I have a ";		//who knows what you have.... could be a hermit crab
	b->kind();	
}

PetStore::~PetStore(void)
{
}
