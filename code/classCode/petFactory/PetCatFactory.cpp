#include "PetCat.h"
#include "PetCatFactory.h"
#include <iostream>

PetCatFactory::PetCatFactory(){}
PetCatFactory::~PetCatFactory(){}

IPet* PetCatFactory::newPet(){return (new *PetCat());}

IFood* PetCatFactory::newFod(){return (new FoodCat());}