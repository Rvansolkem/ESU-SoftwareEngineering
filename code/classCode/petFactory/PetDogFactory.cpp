#include "PetDog.h"
#include "PetDogFactory.h"
#include <iostream>

PetCatFactory::PetDogFactory(){}
PetCatFactory::~PetDogFactory(){}

IPet* PetDogFactory::newPet(){return (new PetDog());}

IFood* PetDogFactory::newFod(){return (new FoodDog());}