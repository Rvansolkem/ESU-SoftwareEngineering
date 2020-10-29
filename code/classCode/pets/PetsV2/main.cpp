// Written by Nick Moukhine, 2006
#include <iostream>
#include "PetCat.h"
#include "PetDog.h"
#include "PetStore.h"

using namespace std;

int main(void)
{
	//PetStore(new PetDog());   
	IPet* p = NewPet();

	// do the following if you want to keep the console window visible while executing from windows (not .NET or a console window)
	char temp;
	cin >> temp;

	return 0;
}
